
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ext4_sb_info {int s_md_lock; } ;
struct ext4_journal_cb_entry {int jce_list; } ;
struct TYPE_7__ {TYPE_2__* h_transaction; } ;
typedef TYPE_3__ handle_t ;
struct TYPE_6__ {TYPE_1__* t_journal; } ;
struct TYPE_5__ {int j_private; } ;


 struct ext4_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline bool FUNC_5(handle_t *VAR_0,
          struct ext4_journal_cb_entry *VAR_1)
{
 bool VAR_2;
 struct ext4_sb_info *VAR_3 =
   FUNC_0(VAR_0->h_transaction->t_journal->j_private);

 FUNC_3(&VAR_3->s_md_lock);
 VAR_2 = !FUNC_2(&VAR_1->jce_list);
 FUNC_1(&VAR_1->jce_list);
 FUNC_4(&VAR_3->s_md_lock);
 return VAR_2;
}
