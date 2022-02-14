
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_mac_cb {scalar_t__ media_type; } ;
struct hnae_handle {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hnae_handle*) ;
 struct hns_mac_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hns_mac_cb*) ;

__attribute__((used)) static void FUNC_3(struct hnae_handle *VAR_1)
{
 struct hns_mac_cb *VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2->media_type != VAR_0)
  return;

 FUNC_2(VAR_2);
}
