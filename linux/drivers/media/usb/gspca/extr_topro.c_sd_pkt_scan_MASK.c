
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ bridge; int quality; int* jpeg_hdr; } ;
struct gspca_dev {void* last_packet_type; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_7,
   u8 *VAR_8,
   int VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_7;
 if (VAR_10->bridge == VAR_0) {
  if (*VAR_8 != 0x5a) {

   if (*VAR_8 == 0xaa || *VAR_8 == 0x00)
    return;
   if (*VAR_8 > 0xc0) {
    FUNC_0(VAR_7, VAR_2, "bad frame\n");
    VAR_7->last_packet_type = VAR_1;
    return;
   }
  }
  VAR_8++;
  VAR_9--;
  if (VAR_9 < 2) {
   VAR_7->last_packet_type = VAR_1;
   return;
  }
  if (*VAR_8 == 0xff && VAR_8[1] == 0xd8) {

   if (VAR_9 < 7) {
    VAR_7->last_packet_type = VAR_1;
    return;
   }
   if ((VAR_8[6] & 0x0f) != VAR_10->quality)
    FUNC_2(VAR_7, VAR_8[6] & 0x0f);
   FUNC_1(VAR_7, VAR_3,
     VAR_10->jpeg_hdr, VAR_5);
   FUNC_1(VAR_7, VAR_4,
     VAR_8 + 7, VAR_9 - 7);
  } else if (VAR_8[VAR_9 - 2] == 0xff && VAR_8[VAR_9 - 1] == 0xd9) {
   FUNC_1(VAR_7, VAR_6,
     VAR_8, VAR_9);
  } else {
   FUNC_1(VAR_7, VAR_4,
     VAR_8, VAR_9);
  }
  return;
 }

 switch (*VAR_8) {
 case 0x55:
  FUNC_1(VAR_7, VAR_6, VAR_8, 0);

  if (VAR_9 < 8
   || VAR_8[1] != 0xff || VAR_8[2] != 0xd8
   || VAR_8[3] != 0xff || VAR_8[4] != 0xfe) {


   VAR_7->last_packet_type = VAR_1;
   return;
  }
  if (VAR_8[7] != VAR_10->quality)
   FUNC_2(VAR_7, VAR_8[7]);
  FUNC_1(VAR_7, VAR_3,
    VAR_10->jpeg_hdr, VAR_5);
  FUNC_1(VAR_7, VAR_4,
    VAR_8 + 8, VAR_9 - 8);
  break;
 case 0xaa:
  VAR_7->last_packet_type = VAR_1;
  break;
 case 0xcc:
  if (VAR_9 >= 3 && (VAR_8[1] != 0xff || VAR_8[2] != 0xd8))
   FUNC_1(VAR_7, VAR_4,
     VAR_8 + 1, VAR_9 - 1);
  else
   VAR_7->last_packet_type = VAR_1;
  break;
 }
}
