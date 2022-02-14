
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_abm {unsigned int num_prios; int num_bands; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int,int) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct nfp_abm *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_3(FUNC_1(VAR_1->num_bands));
 VAR_2 = FUNC_0(VAR_2 * VAR_1->num_prios, VAR_0);
 VAR_2 = FUNC_2(VAR_2, sizeof(u32));

 return VAR_2;
}
