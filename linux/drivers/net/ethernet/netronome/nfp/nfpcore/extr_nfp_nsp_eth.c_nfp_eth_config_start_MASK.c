
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union eth_table_entry {int port; } ;
struct nfp_nsp {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfp_nsp* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct nfp_nsp*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (union eth_table_entry*) ;
 union eth_table_entry* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct nfp_cpp*,char*,int) ;
 int FUNC_5 (struct nfp_nsp*) ;
 int FUNC_6 (struct nfp_nsp*,union eth_table_entry*,unsigned int) ;
 struct nfp_nsp* FUNC_7 (struct nfp_cpp*) ;
 int FUNC_8 (struct nfp_nsp*,union eth_table_entry*,int ) ;
 int FUNC_9 (struct nfp_cpp*,char*,unsigned int) ;

struct nfp_nsp *FUNC_10(struct nfp_cpp *VAR_5, unsigned int VAR_6)
{
 union eth_table_entry *VAR_7;
 struct nfp_nsp *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_7(VAR_5);
 if (FUNC_1(VAR_8)) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 VAR_9 = FUNC_8(VAR_8, VAR_7, VAR_4);
 if (VAR_9 < 0) {
  FUNC_4(VAR_5, "reading port table failed %d\n", VAR_9);
  goto err;
 }

 if (!(VAR_7[VAR_6].port & VAR_3)) {
  FUNC_9(VAR_5, "trying to set port state on disabled port %d\n",
    VAR_6);
  goto err;
 }

 FUNC_6(VAR_8, VAR_7, VAR_6);
 return VAR_8;

err:
 FUNC_5(VAR_8);
 FUNC_2(VAR_7);
 return FUNC_0(-VAR_0);
}
