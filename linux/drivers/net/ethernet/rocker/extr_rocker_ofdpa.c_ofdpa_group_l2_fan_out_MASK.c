
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ofdpa_port {int dummy; } ;
struct ofdpa_group_tbl_entry {int group_count; int group_ids; int group_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct ofdpa_group_tbl_entry*) ;
 struct ofdpa_group_tbl_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int const*,int) ;
 int FUNC_4 (struct ofdpa_port*,int,struct ofdpa_group_tbl_entry*) ;

__attribute__((used)) static int FUNC_5(struct ofdpa_port *VAR_2,
      int VAR_3, u8 VAR_4,
      const u32 *VAR_5, u32 VAR_6)
{
 struct ofdpa_group_tbl_entry *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->group_id = VAR_6;
 VAR_7->group_count = VAR_4;

 VAR_7->group_ids = FUNC_0(VAR_4, sizeof(u32), VAR_1);
 if (!VAR_7->group_ids) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }
 FUNC_3(VAR_7->group_ids, VAR_5, VAR_4 * sizeof(u32));

 return FUNC_4(VAR_2, VAR_3, VAR_7);
}
