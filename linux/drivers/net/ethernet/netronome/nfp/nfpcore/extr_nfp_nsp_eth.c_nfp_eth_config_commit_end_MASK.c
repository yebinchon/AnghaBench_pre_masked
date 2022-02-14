
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union eth_table_entry {int dummy; } eth_table_entry ;
struct nfp_nsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_nsp*) ;
 union eth_table_entry* FUNC_1 (struct nfp_nsp*) ;
 scalar_t__ FUNC_2 (struct nfp_nsp*) ;
 int FUNC_3 (struct nfp_nsp*,union eth_table_entry*,int ) ;

int FUNC_4(struct nfp_nsp *VAR_1)
{
 union eth_table_entry *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 1;

 if (FUNC_2(VAR_1)) {
  VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_0);
  VAR_3 = VAR_3 < 0 ? VAR_3 : 0;
 }

 FUNC_0(VAR_1);

 return VAR_3;
}
