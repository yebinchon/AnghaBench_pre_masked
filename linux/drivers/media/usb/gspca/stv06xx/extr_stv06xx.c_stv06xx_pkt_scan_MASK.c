
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ bridge; int to_skip; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; int last_packet_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,char*) ;
 int FUNC_2 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_6,
   u8 *VAR_7,
   int VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_6;

 FUNC_0(VAR_6, VAR_2, "Packet of length %d arrived\n", VAR_8);



 while (VAR_8) {
  int VAR_10, VAR_11;

  if (VAR_8 < 4) {
   FUNC_0(VAR_6, VAR_2, "Packet is smaller than 4 bytes\n");
   return;
  }


  VAR_10 = (VAR_7[0] << 8) | VAR_7[1];


  VAR_11 = (VAR_7[2] << 8) | VAR_7[3];
  FUNC_0(VAR_6, VAR_2, "Chunk id: %x, length: %d\n",
     VAR_10, VAR_11);

  VAR_7 += 4;
  VAR_8 -= 4;

  if (VAR_8 < VAR_11) {
   FUNC_1(VAR_6, "URB packet length is smaller than the specified chunk length\n");
   VAR_6->last_packet_type = VAR_1;
   return;
  }


  if (VAR_9->bridge == VAR_0 && (VAR_10 & 0xff00) == 0x0200)
   goto frame_data;

  switch (VAR_10) {
  case 0x0200:
  case 0x4200:
frame_data:
   FUNC_0(VAR_6, VAR_2, "Frame data packet detected\n");

   if (VAR_9->to_skip) {
    int VAR_12 = (VAR_9->to_skip < VAR_11) ?
         VAR_9->to_skip : VAR_11;
    VAR_7 += VAR_12;
    VAR_8 -= VAR_12;
    VAR_11 -= VAR_12;
    VAR_9->to_skip -= VAR_12;
   }

   FUNC_2(VAR_6, VAR_4,
     VAR_7, VAR_11);
   break;

  case 0x8001:
  case 0x8005:
  case 0xc001:
  case 0xc005:
   FUNC_0(VAR_6, VAR_2, "Starting new frame\n");


   FUNC_2(VAR_6, VAR_3,
     ((void*)0), 0);

   if (VAR_9->bridge == VAR_0)
    VAR_9->to_skip = VAR_6->pixfmt.width * 4;

   if (VAR_11)
    FUNC_1(VAR_6, "Chunk length is non-zero on a SOF\n");
   break;

  case 0x8002:
  case 0x8006:
  case 0xc002:
   FUNC_0(VAR_6, VAR_2, "End of frame detected\n");


   FUNC_2(VAR_6, VAR_5,
     ((void*)0), 0);

   if (VAR_11)
    FUNC_1(VAR_6, "Chunk length is non-zero on a EOF\n");
   break;

  case 0x0005:
   FUNC_0(VAR_6, VAR_2, "Chunk 0x005 detected\n");



   break;

  case 0x0100:
   FUNC_0(VAR_6, VAR_2, "Chunk 0x0100 detected\n");


   break;
  case 0x42ff:
   FUNC_0(VAR_6, VAR_2, "Chunk 0x42ff detected\n");

   break;
  default:
   FUNC_0(VAR_6, VAR_2, "Unknown chunk 0x%04x detected\n",
      VAR_10);

  }
  VAR_7 += VAR_11;
  VAR_8 -= VAR_11;
 }
}
