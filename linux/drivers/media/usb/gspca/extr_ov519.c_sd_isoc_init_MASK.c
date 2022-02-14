
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int bridge; } ;
struct TYPE_4__ {int bulk_size; } ;
struct TYPE_3__ {int width; } ;
struct gspca_dev {TYPE_2__ cam; TYPE_1__ pixfmt; } ;



 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->bridge) {
 case 128:
  if (VAR_1->pixfmt.width != 800)
   VAR_1->cam.bulk_size = VAR_0;
  else
   VAR_1->cam.bulk_size = 7 * 4096;
  break;
 }
 return 0;
}
