
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_cpp {int* imb_cat_table; int mu_locality_lsb; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct nfp_cpp *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->imb_cat_table[VAR_0];
 VAR_3 = FUNC_0(VAR_5);
 VAR_4 = !!(VAR_5 & VAR_1);

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_2->mu_locality_lsb = VAR_6;

 return 0;
}
