
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int* vf_enabled; int num_vf_en; int node; int * vf_lmac_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct nicpf *VAR_0, int VAR_1, bool VAR_2)
{
 int VAR_3, VAR_4;

 VAR_0->vf_enabled[VAR_1] = VAR_2;

 if (VAR_1 >= VAR_0->num_vf_en)
  return;

 VAR_3 = FUNC_0(VAR_0->vf_lmac_map[VAR_1]);
 VAR_4 = FUNC_1(VAR_0->vf_lmac_map[VAR_1]);

 FUNC_2(VAR_0->node, VAR_3, VAR_4, VAR_2);
}
