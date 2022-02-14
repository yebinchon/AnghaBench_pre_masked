
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u32 ;
struct nfp_abm_link {int has_prio; unsigned int* prio_map; int dscp_map; struct nfp_abm* abm; } ;
struct nfp_abm {unsigned int num_bands; unsigned int num_prios; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_abm_link*,unsigned int*) ;
 unsigned int FUNC_2 (struct nfp_abm_link*,unsigned int) ;
 int FUNC_3 (struct nfp_abm_link*) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct nfp_abm_link *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;
 struct nfp_abm *VAR_6 = VAR_1->abm;
 u32 VAR_7;

 VAR_1->has_prio = !FUNC_0(&VAR_1->dscp_map);

 VAR_3 = FUNC_5(FUNC_4(VAR_6->num_bands));
 VAR_7 = (1 << VAR_3) - 1;
 VAR_4 = sizeof(u32) * VAR_0 / VAR_3;


 VAR_5 = 8 - FUNC_4(VAR_6->num_prios);

 for (VAR_2 = 0; VAR_2 < VAR_6->num_prios; VAR_2++) {
  unsigned int VAR_8;
  u32 *VAR_9;
  u8 VAR_10;

  VAR_9 = &VAR_1->prio_map[VAR_2 / VAR_4];
  VAR_8 = (VAR_2 % VAR_4) * VAR_3;

  VAR_10 = FUNC_2(VAR_1, VAR_2 << VAR_5);

  *VAR_9 &= ~(VAR_7 << VAR_8);
  *VAR_9 |= VAR_10 << VAR_8;
 }


 FUNC_3(VAR_1);

 return FUNC_1(VAR_1, VAR_1->prio_map);
}
