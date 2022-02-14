
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {int work; } ;
struct rt2x00_dev {int hw; int flags; int intf_sta_count; int intf_ap_count; struct link link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct rt2x00_dev *VAR_3)
{
 struct link *VAR_4 = &VAR_3->link;





 if (!VAR_3->intf_ap_count && !VAR_3->intf_sta_count)
  return;







 if (FUNC_2(VAR_1, &VAR_3->flags))
  return;

 FUNC_1(VAR_3, 0);

 if (FUNC_2(VAR_0, &VAR_3->flags))
  FUNC_0(VAR_3->hw,
          &VAR_4->work, VAR_2);
}
