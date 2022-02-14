
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int dummy; } ;
struct qed_db_recovery_entry {scalar_t__ db_width; scalar_t__ db_space; int hwfn_idx; int db_data; int db_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,char*,struct qed_db_recovery_entry*,int ,int ,char*,char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_3,
         struct qed_db_recovery_entry *VAR_4,
         char *VAR_5)
{
 FUNC_0(VAR_3,
     VAR_2,
     "(%s: db_entry %p, addr %p, data %p, width %s, %s space, hwfn %d)\n",
     VAR_5,
     VAR_4,
     VAR_4->db_addr,
     VAR_4->db_data,
     VAR_4->db_width == VAR_1 ? "32b" : "64b",
     VAR_4->db_space == VAR_0 ? "user" : "kernel",
     VAR_4->hwfn_idx);
}
