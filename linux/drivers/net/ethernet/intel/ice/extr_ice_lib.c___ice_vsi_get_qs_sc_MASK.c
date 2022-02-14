
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_qs_cfg {int q_count; int pf_map_size; int* vsi_map; int vsi_map_offset; int qs_mutex; int pf_map; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct ice_qs_cfg *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 FUNC_2(VAR_1->qs_mutex);
 for (VAR_2 = 0; VAR_2 < VAR_1->q_count; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1->pf_map,
        VAR_1->pf_map_size, VAR_3);
  if (VAR_3 >= VAR_1->pf_map_size)
   goto err_scatter;
  FUNC_4(VAR_3, VAR_1->pf_map);
  VAR_1->vsi_map[VAR_2 + VAR_1->vsi_map_offset] = VAR_3;
 }
 FUNC_3(VAR_1->qs_mutex);

 return 0;
err_scatter:
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(VAR_1->vsi_map[VAR_3], VAR_1->pf_map);
  VAR_1->vsi_map[VAR_3 + VAR_1->vsi_map_offset] = 0;
 }
 FUNC_3(VAR_1->qs_mutex);

 return -VAR_0;
}
