
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union eth_table_entry {int port; } ;
struct nfp_nsp {int dummy; } ;
struct nfp_eth_table {int count; int * ports; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (union eth_table_entry*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfp_cpp*,char*,int,...) ;
 int FUNC_3 (struct nfp_cpp*,struct nfp_eth_table*) ;
 int FUNC_4 (struct nfp_cpp*,int *) ;
 int FUNC_5 (struct nfp_nsp*,union eth_table_entry*,int,int *) ;
 int FUNC_6 (struct nfp_nsp*,union eth_table_entry*,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct nfp_eth_table*,int ,int) ;

struct nfp_eth_table *
FUNC_8(struct nfp_cpp *VAR_5, struct nfp_nsp *VAR_6)
{
 union eth_table_entry *VAR_7;
 struct nfp_eth_table *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;

 VAR_7 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_11 = FUNC_6(VAR_6, VAR_7, VAR_3);
 if (VAR_11 < 0) {
  FUNC_2(VAR_5, "reading port table failed %d\n", VAR_11);
  goto err;
 }

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  if (VAR_7[VAR_9].port & VAR_2)
   VAR_12++;





 if (VAR_11 && VAR_11 != VAR_12) {
  FUNC_2(VAR_5, "table entry count reported (%d) does not match entries present (%d)\n",
   VAR_11, VAR_12);
  goto err;
 }

 VAR_8 = FUNC_1(FUNC_7(VAR_8, VAR_4, VAR_12), VAR_0);
 if (!VAR_8)
  goto err;

 VAR_8->count = VAR_12;
 for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_1; VAR_9++)
  if (VAR_7[VAR_9].port & VAR_2)
   FUNC_5(VAR_6, &VAR_7[VAR_9], VAR_9,
            &VAR_8->ports[VAR_10++]);

 FUNC_3(VAR_5, VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_8->count; VAR_9++)
  FUNC_4(VAR_5, &VAR_8->ports[VAR_9]);

 FUNC_0(VAR_7);

 return VAR_8;

err:
 FUNC_0(VAR_7);
 return ((void*)0);
}
