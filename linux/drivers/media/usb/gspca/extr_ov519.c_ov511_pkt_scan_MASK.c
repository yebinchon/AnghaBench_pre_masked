
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ packet_nr; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {int last_packet_type; TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,char*,int,int,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;
 if (!(VAR_5[0] | VAR_5[1] | VAR_5[2] | VAR_5[3] | VAR_5[4] | VAR_5[5] | VAR_5[6] | VAR_5[7]) &&
     (VAR_5[8] & 0x08)) {
  FUNC_2(VAR_4, (VAR_5[8] >> 2) & 1);
  if (VAR_5[8] & 0x80) {

   if ((VAR_5[9] + 1) * 8 != VAR_4->pixfmt.width ||
       (VAR_5[10] + 1) * 8 != VAR_4->pixfmt.height) {
    FUNC_0(VAR_4, "Invalid frame size, got: %dx%d, requested: %dx%d\n",
       (VAR_5[9] + 1) * 8, (VAR_5[10] + 1) * 8,
       VAR_4->pixfmt.width,
       VAR_4->pixfmt.height);
    VAR_4->last_packet_type = VAR_0;
    return;
   }

   FUNC_1(VAR_4, VAR_3, VAR_5, 11);
   return;
  } else {

   FUNC_1(VAR_4, VAR_1, VAR_5, 0);
   VAR_7->packet_nr = 0;
  }
 }


 VAR_6--;


 FUNC_1(VAR_4, VAR_2, VAR_5, VAR_6);
}
