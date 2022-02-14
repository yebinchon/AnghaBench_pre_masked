
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_mac_filter {int mac_hash_table; scalar_t__ mac_addr_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct enetc_mac_filter *VAR_1)
{
 VAR_1->mac_addr_cnt = 0;

 FUNC_0(VAR_1->mac_hash_table,
      VAR_0);
}
