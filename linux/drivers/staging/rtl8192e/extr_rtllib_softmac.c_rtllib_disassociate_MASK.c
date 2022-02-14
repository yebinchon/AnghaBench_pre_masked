
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int softmac_features; int is_set_key; int link_change_wq; scalar_t__ wap_set; int state; int dev; int (* data_hard_stop ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtllib_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rtllib_device*) ;
 int FUNC_4 (struct rtllib_device*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct rtllib_device *VAR_2)
{
 FUNC_2(VAR_2->dev);
 if (VAR_2->softmac_features & VAR_0)
  FUNC_4(VAR_2);

 if (VAR_2->data_hard_stop)
  VAR_2->data_hard_stop(VAR_2->dev);
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2);
 VAR_2->state = VAR_1;
 VAR_2->is_set_key = 0;
 VAR_2->wap_set = 0;

 FUNC_5(&VAR_2->link_change_wq, 0);

 FUNC_3(VAR_2);
}
