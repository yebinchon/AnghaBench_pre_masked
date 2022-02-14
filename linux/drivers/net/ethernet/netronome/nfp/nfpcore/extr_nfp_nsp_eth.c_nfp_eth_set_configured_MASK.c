
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union eth_table_entry {int control; int state; } ;
typedef int u64 ;
struct nfp_nsp {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct nfp_nsp*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct nfp_nsp*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nfp_nsp*) ;
 int FUNC_7 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_8 (struct nfp_cpp*,unsigned int) ;
 union eth_table_entry* FUNC_9 (struct nfp_nsp*) ;
 int FUNC_10 (struct nfp_nsp*,int) ;
 int FUNC_11 (struct nfp_nsp*) ;

int FUNC_12(struct nfp_cpp *VAR_3, unsigned int VAR_4, bool VAR_5)
{
 union eth_table_entry *VAR_6;
 struct nfp_nsp *VAR_7;
 u64 VAR_8;

 VAR_7 = FUNC_8(VAR_3, VAR_4);
 if (FUNC_2(VAR_7))
  return FUNC_3(VAR_7);




 if (FUNC_11(VAR_7) < 20) {
  FUNC_6(VAR_7);
  return -VAR_0;
 }

 VAR_6 = FUNC_9(VAR_7);


 VAR_8 = FUNC_5(VAR_6[VAR_4].state);
 if (VAR_5 != FUNC_0(VAR_2, VAR_8)) {
  VAR_8 = FUNC_5(VAR_6[VAR_4].control);
  VAR_8 &= ~VAR_1;
  VAR_8 |= FUNC_1(VAR_1, VAR_5);
  VAR_6[VAR_4].control = FUNC_4(VAR_8);

  FUNC_10(VAR_7, 1);
 }

 return FUNC_7(VAR_7);
}
