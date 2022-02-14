
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ext4_sb_info {int s_md_lock; } ;
struct ext4_journal_cb_entry {void (* jce_func ) (struct super_block*,struct ext4_journal_cb_entry*,int) ;} ;
struct TYPE_8__ {TYPE_2__* h_transaction; } ;
typedef TYPE_3__ handle_t ;
struct TYPE_7__ {TYPE_1__* t_journal; } ;
struct TYPE_6__ {int j_private; } ;


 struct ext4_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,struct ext4_journal_cb_entry*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(handle_t *VAR_0,
   void (*VAR_1)(struct super_block *VAR_2,
         struct ext4_journal_cb_entry *VAR_3,
         int VAR_4),
   struct ext4_journal_cb_entry *VAR_5)
{
 struct ext4_sb_info *VAR_6 =
   FUNC_0(VAR_0->h_transaction->t_journal->j_private);


 VAR_5->jce_func = VAR_1;
 FUNC_2(&VAR_6->s_md_lock);
 FUNC_1(VAR_0, VAR_5);
 FUNC_3(&VAR_6->s_md_lock);
}
