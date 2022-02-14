
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_loopback {size_t vf_id; int enable; } ;
struct nicpf {size_t num_vf_en; int node; int * vf_lmac_map; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (struct nicpf*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct nicpf *VAR_2, struct set_loopback *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->vf_id >= VAR_2->num_vf_en)
  return -1;

 VAR_4 = FUNC_1(VAR_2->vf_lmac_map[VAR_3->vf_id]);
 VAR_5 = FUNC_2(VAR_2->vf_lmac_map[VAR_3->vf_id]);

 FUNC_3(VAR_2->node, VAR_4, VAR_5, VAR_3->enable);





 FUNC_4(VAR_2, VAR_0,
        (FUNC_0(20) | 0x2ull << 14 | 0x1));
 FUNC_4(VAR_2, VAR_1,
        (FUNC_0(20) | 0x3ull << 14 | 0x1));

 return 0;
}
