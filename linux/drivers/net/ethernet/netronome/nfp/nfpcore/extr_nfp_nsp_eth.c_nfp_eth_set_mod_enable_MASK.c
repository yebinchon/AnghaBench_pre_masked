
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union eth_table_entry {int control; int state; } ;
typedef int u64 ;
struct nfp_nsp {int dummy; } ;
struct nfp_cpp {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct nfp_nsp*) ;
 int VAR_0 ;
 int FUNC_3 (struct nfp_nsp*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nfp_nsp*) ;
 struct nfp_nsp* FUNC_7 (struct nfp_cpp*,unsigned int) ;
 union eth_table_entry* FUNC_8 (struct nfp_nsp*) ;
 int FUNC_9 (struct nfp_nsp*,int) ;

int FUNC_10(struct nfp_cpp *VAR_1, unsigned int VAR_2, bool VAR_3)
{
 union eth_table_entry *VAR_4;
 struct nfp_nsp *VAR_5;
 u64 VAR_6;

 VAR_5 = FUNC_7(VAR_1, VAR_2);
 if (FUNC_2(VAR_5))
  return FUNC_3(VAR_5);

 VAR_4 = FUNC_8(VAR_5);


 VAR_6 = FUNC_5(VAR_4[VAR_2].state);
 if (VAR_3 != FUNC_0(VAR_0, VAR_6)) {
  VAR_6 = FUNC_5(VAR_4[VAR_2].control);
  VAR_6 &= ~VAR_0;
  VAR_6 |= FUNC_1(VAR_0, VAR_3);
  VAR_4[VAR_2].control = FUNC_4(VAR_6);

  FUNC_9(VAR_5, 1);
 }

 return FUNC_6(VAR_5);
}
