
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_mac_filter {int mac_addr_cnt; int mac_hash_table; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static void FUNC_2(struct enetc_mac_filter *VAR_0,
      const unsigned char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);


 FUNC_0(VAR_2, VAR_0->mac_hash_table);
 VAR_0->mac_addr_cnt++;
}
