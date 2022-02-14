
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_abm {unsigned int num_bands; int red_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct nfp_abm*,unsigned int,int ) ;
 int FUNC_1 (struct nfp_abm*,unsigned int,int ) ;
 int FUNC_2 (struct nfp_abm*) ;

__attribute__((used)) static int FUNC_3(struct nfp_abm *VAR_3)
{
 unsigned int VAR_4;

 if (!VAR_3->red_support)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_bands * VAR_2; VAR_4++) {
  FUNC_1(VAR_3, VAR_4, VAR_1);
  FUNC_0(VAR_3, VAR_4, VAR_0);
 }

 return FUNC_2(VAR_3);
}
