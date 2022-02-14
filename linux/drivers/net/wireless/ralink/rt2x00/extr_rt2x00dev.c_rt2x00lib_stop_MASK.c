
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {scalar_t__ intf_associated; scalar_t__ intf_sta_count; scalar_t__ intf_ap_count; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct rt2x00_dev *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->flags))
  return;





 FUNC_0(VAR_1);

 VAR_1->intf_ap_count = 0;
 VAR_1->intf_sta_count = 0;
 VAR_1->intf_associated = 0;
}
