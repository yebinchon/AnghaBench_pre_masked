
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct hnae3_handle {scalar_t__ port_base_vlan_state; } ;
struct hclgevf_dev {struct hnae3_handle nic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hclgevf_dev*,int ) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ,int *,int ,int,int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct hclgevf_dev *VAR_6, u16 VAR_7,
     u8 *VAR_8, u8 VAR_9)
{
 struct hnae3_handle *VAR_10 = &VAR_6->nic;

 FUNC_2();
 FUNC_0(VAR_6, VAR_2);
 FUNC_3();


 FUNC_1(VAR_6, VAR_1,
        VAR_0,
        VAR_8, VAR_9,
        0, ((void*)0), 0);

 if (VAR_7 == VAR_3)
  VAR_10->port_base_vlan_state = VAR_3;
 else
  VAR_10->port_base_vlan_state = VAR_4;

 FUNC_2();
 FUNC_0(VAR_6, VAR_5);
 FUNC_3();
}
