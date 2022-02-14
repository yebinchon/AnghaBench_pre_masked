
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {scalar_t__ do_ctrl; } ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_3__ {int bulk_nurbs; int bulk_size; } ;
struct gspca_dev {TYPE_2__ pixfmt; TYPE_1__ cam; } ;



__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 VAR_0->cam.bulk_nurbs = 1;
 VAR_1->do_ctrl = 0;
 VAR_0->cam.bulk_size = VAR_0->pixfmt.width *
   VAR_0->pixfmt.height + 8;
 return 0;
}
