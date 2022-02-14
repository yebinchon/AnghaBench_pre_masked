
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ve; } ;
struct fimc_dev {TYPE_1__ vid_cap; } ;


 int VAR_0 ;
 int FUNC_0 (struct fimc_dev*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct fimc_dev*,int) ;

int FUNC_3(struct fimc_dev *VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_1);

 int VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 return FUNC_1(&VAR_1->vid_cap.ve, VAR_0);
}
