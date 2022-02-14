
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int vlan_del_fail_bmap; struct hnae3_handle nic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct hnae3_handle*,int ,scalar_t__,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hclgevf_dev *VAR_3)
{

 struct hnae3_handle *VAR_4 = &VAR_3->nic;
 int VAR_5, VAR_6 = 0;
 u16 VAR_7;

 VAR_7 = FUNC_1(VAR_3->vlan_del_fail_bmap, VAR_2);
 while (VAR_7 != VAR_2) {
  VAR_5 = FUNC_2(VAR_4, FUNC_3(VAR_0),
           VAR_7, 1);
  if (VAR_5)
   return;

  FUNC_0(VAR_7, VAR_3->vlan_del_fail_bmap);
  VAR_6++;
  if (VAR_6 >= 60)
   return;

  VAR_7 = FUNC_1(VAR_3->vlan_del_fail_bmap, VAR_2);
 }
}
