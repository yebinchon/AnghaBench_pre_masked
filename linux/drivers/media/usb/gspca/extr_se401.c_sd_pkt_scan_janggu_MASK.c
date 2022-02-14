
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int restart_stream; int packet_read; int* packet; int pixels_read; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {scalar_t__ last_packet_type; TYPE_1__ pixfmt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__,int*,int) ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4, u8 *VAR_5, int VAR_6)
{
 struct sd *VAR_7 = (struct sd *)VAR_4;
 int VAR_8 = VAR_4->pixfmt.width * VAR_4->pixfmt.height;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_7->restart_stream)
  return;


 if (VAR_4->last_packet_type == VAR_3 && VAR_6 == 1024) {
  VAR_4->last_packet_type = VAR_0;
  return;
 }

 VAR_9 = 0;
 while (VAR_9 < VAR_6) {

  if (VAR_7->packet_read < 4) {
   VAR_14 = 4 - VAR_7->packet_read;
   if (VAR_14 > VAR_6 - VAR_9)
    VAR_14 = VAR_6 - VAR_9;
   FUNC_1(&VAR_7->packet[VAR_7->packet_read], &VAR_5[VAR_9], VAR_14);
   VAR_7->packet_read += VAR_14;
   VAR_9 += VAR_14;
   if (VAR_7->packet_read < 4)
    break;
  }
  VAR_11 = VAR_7->packet[3] + (VAR_7->packet[2] << 8);
  VAR_12 = VAR_7->packet[1] + ((VAR_7->packet[0] & 0x3f) << 8);
  VAR_13 = (VAR_7->packet[0] & 0xc0) >> 6;
  VAR_10 = ((VAR_11 + 47) >> 4) << 1;

  if (VAR_10 > 1024) {
   FUNC_2("invalid packet len %d restarting stream\n",
          VAR_10);
   goto error;
  }
  if (VAR_13 == 3) {
   FUNC_2("unknown frame info value restarting stream\n");
   goto error;
  }


  VAR_14 = VAR_10 - VAR_7->packet_read;
  if (VAR_14 > VAR_6 - VAR_9)
   VAR_14 = VAR_6 - VAR_9;
  FUNC_1(&VAR_7->packet[VAR_7->packet_read], &VAR_5[VAR_9], VAR_14);
  VAR_7->packet_read += VAR_14;
  VAR_9 += VAR_14;
  if (VAR_7->packet_read < VAR_10)
   break;

  VAR_7->pixels_read += VAR_12;
  VAR_7->packet_read = 0;

  switch (VAR_13) {
  case 0:
   FUNC_0(VAR_4, VAR_2, VAR_7->packet,
     VAR_10);
   break;
  case 1:
   if (VAR_7->pixels_read != VAR_8) {
    FUNC_2("frame size %d expected %d\n",
           VAR_7->pixels_read, VAR_8);
    goto error;
   }
   FUNC_3(VAR_4, VAR_7->packet, VAR_10);
   return;
  case 2:
   FUNC_0(VAR_4, VAR_1, VAR_7->packet,
     VAR_10);
   VAR_7->pixels_read = VAR_12;
   break;
  }
 }
 return;

error:
 VAR_7->restart_stream = 1;


 FUNC_0(VAR_4, VAR_1, ((void*)0), 0);
 FUNC_0(VAR_4, VAR_3, ((void*)0), 0);
}
