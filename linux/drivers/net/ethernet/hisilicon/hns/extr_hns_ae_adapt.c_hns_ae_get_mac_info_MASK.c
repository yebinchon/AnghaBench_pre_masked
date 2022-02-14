
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hns_mac_cb {int dummy; } ;
struct hnae_handle {int dummy; } ;


 struct hns_mac_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (struct hns_mac_cb*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct hnae_handle *VAR_0,
          u8 *VAR_1, u16 *VAR_2, u8 *VAR_3)
{
 struct hns_mac_cb *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
}
