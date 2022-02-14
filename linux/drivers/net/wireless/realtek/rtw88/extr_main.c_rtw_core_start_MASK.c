
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcr; } ;
struct rtw_dev {int watch_dog_work; int hw; TYPE_1__ hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct rtw_dev*,int ) ;
 int FUNC_2 (struct rtw_dev*) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*,int ,int ) ;

int FUNC_5(struct rtw_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_3);


 FUNC_4(VAR_3, VAR_0, VAR_3->hal.rcr);

 FUNC_0(VAR_3->hw, &VAR_3->watch_dog_work,
         VAR_2);

 FUNC_1(VAR_3, VAR_1);

 return 0;
}
