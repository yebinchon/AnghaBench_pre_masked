
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {size_t curr_mode; scalar_t__ empty_packet; TYPE_1__ pixfmt; } ;
struct sd {scalar_t__ sensor; TYPE_2__ gspca_dev; int jpegqual; int jpeg_hdr; } ;
struct TYPE_6__ {scalar_t__ pixelformat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sd*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct sd*) ;
 int FUNC_6 (struct sd*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_7(struct sd *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 FUNC_5(VAR_3);

 FUNC_2(VAR_3, 0x14, VAR_3->gspca_dev.pixfmt.width);
 FUNC_2(VAR_3, 0x15, VAR_3->gspca_dev.pixfmt.height);


 FUNC_2(VAR_3, 0x30, VAR_3->gspca_dev.pixfmt.width);
 FUNC_2(VAR_3, 0x31, VAR_3->gspca_dev.pixfmt.height);


 if (VAR_2[VAR_3->gspca_dev.curr_mode].pixelformat ==
     VAR_1) {
  FUNC_2(VAR_3, 0x2c, VAR_3->gspca_dev.pixfmt.width / 2);
  FUNC_2(VAR_3, 0x2d, VAR_3->gspca_dev.pixfmt.width / 4);
 } else
  FUNC_2(VAR_3, 0x2c, VAR_3->gspca_dev.pixfmt.width);

 FUNC_2(VAR_3, 0x00, 0xbf17);
 FUNC_2(VAR_3, 0x00, 0xbf10);


 VAR_4 = VAR_3->gspca_dev.pixfmt.width * VAR_3->gspca_dev.pixfmt.height;
 FUNC_2(VAR_3, 0x3d, VAR_4 & 0xffff);
 FUNC_2(VAR_3, 0x3e, VAR_4 >> 16);

 if (VAR_2[VAR_3->gspca_dev.curr_mode].pixelformat ==
     VAR_1) {

  FUNC_0(VAR_3->jpeg_hdr, VAR_3->gspca_dev.pixfmt.height,
       VAR_3->gspca_dev.pixfmt.width, 0x22);
  FUNC_1(VAR_3->jpeg_hdr, FUNC_3(VAR_3->jpegqual));
  FUNC_6(VAR_3);
  FUNC_4(VAR_3->jpegqual, 1);
 }


 if (VAR_3->sensor == VAR_0) {

  VAR_5 = 1;
  VAR_6 = 1;
 } else {
  VAR_5 = 1;
  VAR_6 = 0;
 }

 VAR_4 = (VAR_5 << 12) | (VAR_6 << 11);





 if (VAR_2[VAR_3->gspca_dev.curr_mode].pixelformat ==
     VAR_1) {

  VAR_4 |= 0x0003;
 } else
  VAR_4 |= 0x0080;





 VAR_4 |= 0x8000;

 FUNC_2(VAR_3, 0x16, VAR_4);

 VAR_3->gspca_dev.empty_packet = 0;
}
