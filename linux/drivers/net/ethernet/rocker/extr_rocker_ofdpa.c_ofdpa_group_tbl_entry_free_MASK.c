
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofdpa_group_tbl_entry {struct ofdpa_group_tbl_entry* group_ids; int group_id; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (struct ofdpa_group_tbl_entry*) ;

__attribute__((used)) static void FUNC_2(struct ofdpa_group_tbl_entry *VAR_0)
{
 switch (FUNC_0(VAR_0->group_id)) {
 case 129:
 case 128:
  FUNC_1(VAR_0->group_ids);
  break;
 default:
  break;
 }
 FUNC_1(VAR_0);
}
