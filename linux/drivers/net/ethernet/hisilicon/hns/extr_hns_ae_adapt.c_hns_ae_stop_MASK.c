
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {int dummy; } ;
struct hnae_handle {int q_num; int qs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hnae_handle*,int ) ;
 struct hns_mac_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hns_mac_cb*) ;
 int FUNC_3 (struct hns_mac_cb*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct hnae_handle *VAR_2)
{
 struct hns_mac_cb *VAR_3 = FUNC_1(VAR_2);


 FUNC_4(VAR_2->qs, VAR_2->q_num, VAR_1);

 FUNC_5(20);

 FUNC_2(VAR_3);

 FUNC_6(10000, 20000);

 FUNC_0(VAR_2, 0);


 FUNC_4(VAR_2->qs, VAR_2->q_num, VAR_0);

 (void)FUNC_3(VAR_3, 0, 0);
}
