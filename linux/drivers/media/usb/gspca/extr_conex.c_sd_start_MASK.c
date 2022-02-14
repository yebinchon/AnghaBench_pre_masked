
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int jpeg_hdr; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;


 FUNC_4(VAR_2->jpeg_hdr, VAR_1->pixfmt.height,
   VAR_1->pixfmt.width,
   0x22);
 FUNC_5(VAR_2->jpeg_hdr, VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 return 0;
}
