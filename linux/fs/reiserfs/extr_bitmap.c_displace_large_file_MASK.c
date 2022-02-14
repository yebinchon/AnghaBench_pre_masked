
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int search_start; int beg; int end; int inode; TYPE_1__* th; } ;
typedef TYPE_2__ reiserfs_blocknr_hint_t ;
struct TYPE_7__ {int k_objectid; int k_dir_id; } ;
struct TYPE_5__ {int t_super; } ;


 TYPE_4__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static inline void FUNC_3(reiserfs_blocknr_hint_t * VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1->th->t_super))
  VAR_1->search_start =
      VAR_1->beg +
      FUNC_2((char *)(&FUNC_0(VAR_1->inode)->k_dir_id),
          4) % (VAR_1->end - VAR_1->beg);
 else
  VAR_1->search_start =
      VAR_1->beg +
      FUNC_2((char *)(&FUNC_0(VAR_1->inode)->k_objectid),
          4) % (VAR_1->end - VAR_1->beg);
}
