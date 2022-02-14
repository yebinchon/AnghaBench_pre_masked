
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfb_info {scalar_t__ count; struct fsl_diu_data* parent; } ;
struct fsl_diu_data {TYPE_2__* diu_reg; TYPE_1__* fsl_diu_info; } ;
struct fb_info {struct mfb_info* par; } ;
struct TYPE_4__ {int int_mask; } ;
struct TYPE_3__ {struct mfb_info* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_2, int VAR_3)
{
 struct mfb_info *VAR_4 = VAR_2->par;
 int VAR_5 = 0;

 FUNC_2(&VAR_1);
 VAR_4->count--;
 if (VAR_4->count == 0) {
  struct fsl_diu_data *VAR_6 = VAR_4->parent;
  bool VAR_7 = 1;
  int VAR_8;


  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   struct mfb_info *VAR_9 = VAR_6->fsl_diu_info[VAR_8].par;

   if (VAR_9->count)
    VAR_7 = 0;
  }
  if (VAR_7)
   FUNC_1(&VAR_6->diu_reg->int_mask, 0xffffffff);
  FUNC_0(VAR_2);
 }

 FUNC_3(&VAR_1);
 return VAR_5;
}
