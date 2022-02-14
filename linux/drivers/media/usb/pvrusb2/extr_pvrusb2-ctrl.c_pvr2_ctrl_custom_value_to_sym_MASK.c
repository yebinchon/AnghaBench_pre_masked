
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_ctrl {TYPE_1__* info; } ;
struct TYPE_2__ {int (* val_to_sym ) (struct pvr2_ctrl*,int,int,char*,unsigned int,unsigned int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_ctrl*,int,int,char*,unsigned int,unsigned int*) ;

int FUNC_1(struct pvr2_ctrl *VAR_1,
      int VAR_2,int VAR_3,
      char *VAR_4,unsigned int VAR_5,
      unsigned int *VAR_6)
{
 if (!VAR_1) return -VAR_0;
 if (!VAR_1->info->val_to_sym) return -VAR_0;
 return VAR_1->info->val_to_sym(VAR_1,VAR_2,VAR_3,VAR_4,VAR_5,VAR_6);
}
