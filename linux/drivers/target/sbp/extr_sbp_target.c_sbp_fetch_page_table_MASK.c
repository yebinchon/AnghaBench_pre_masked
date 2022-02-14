
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_descriptor; int misc; } ;
struct sbp_target_request {struct sbp_page_table_entry* pg_tbl; TYPE_1__ orb; } ;
struct sbp_page_table_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sbp_page_table_entry*) ;
 struct sbp_page_table_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sbp_target_request*,int ,int ,struct sbp_page_table_entry*,int) ;

__attribute__((used)) static int FUNC_7(struct sbp_target_request *VAR_5)
{
 int VAR_6, VAR_7;
 struct sbp_page_table_entry *VAR_8;

 if (!FUNC_1(FUNC_2(VAR_5->orb.misc)))
  return 0;

 VAR_6 = FUNC_0(FUNC_2(VAR_5->orb.misc)) *
  sizeof(struct sbp_page_table_entry);

 VAR_8 = FUNC_4(VAR_6, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_6(VAR_5, VAR_4,
   FUNC_5(&VAR_5->orb.data_descriptor),
   VAR_8, VAR_6);
 if (VAR_7 != VAR_3) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }

 VAR_5->pg_tbl = VAR_8;
 return 0;
}
