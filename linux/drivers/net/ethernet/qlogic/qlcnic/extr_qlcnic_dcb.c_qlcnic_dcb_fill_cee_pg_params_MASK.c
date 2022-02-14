
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qlcnic_dcb_pg_cfg {int valid; size_t total_bw_percent; size_t tsa_type; } ;
struct qlcnic_dcb_param {int * pg_tsa_map; int * pg_bw_map; } ;
struct qlcnic_dcb_cee {struct qlcnic_dcb_pg_cfg* pg_cfg; } ;


 size_t FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int ,size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_2(struct qlcnic_dcb_param *VAR_1,
       struct qlcnic_dcb_cee *VAR_2)
{
 struct qlcnic_dcb_pg_cfg *VAR_3;
 u8 VAR_4, VAR_5, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->pg_cfg[VAR_4];
  VAR_3->valid = 1;

  if (VAR_4 < 4) {
   VAR_6 = FUNC_0(VAR_1->pg_bw_map[0], VAR_4);
   VAR_5 = FUNC_1(VAR_1->pg_tsa_map[0], VAR_4);
  } else {
   VAR_6 = FUNC_0(VAR_1->pg_bw_map[1], VAR_4);
   VAR_5 = FUNC_1(VAR_1->pg_tsa_map[1], VAR_4);
  }

  VAR_3->total_bw_percent = VAR_6;
  VAR_3->tsa_type = VAR_5;
 }
}
