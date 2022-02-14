
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_qs_cfg {int pf_map_size; int q_count; int* vsi_map; int vsi_map_offset; int qs_mutex; int pf_map; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ice_qs_cfg *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_2(VAR_1->qs_mutex);
 VAR_2 = FUNC_0(VAR_1->pf_map, VAR_1->pf_map_size,
         0, VAR_1->q_count, 0);
 if (VAR_2 >= VAR_1->pf_map_size) {
  FUNC_3(VAR_1->qs_mutex);
  return -VAR_0;
 }

 FUNC_1(VAR_1->pf_map, VAR_2, VAR_1->q_count);
 for (VAR_3 = 0; VAR_3 < VAR_1->q_count; VAR_3++)
  VAR_1->vsi_map[VAR_3 + VAR_1->vsi_map_offset] = VAR_3 + VAR_2;
 FUNC_3(VAR_1->qs_mutex);

 return 0;
}
