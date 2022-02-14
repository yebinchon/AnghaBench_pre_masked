
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int k_dir_id; } ;
struct TYPE_8__ {int search_start; int beg; int end; int inode; TYPE_2__* th; TYPE_1__ key; scalar_t__ formatted_node; } ;
typedef TYPE_3__ reiserfs_blocknr_hint_t ;
struct TYPE_9__ {int k_objectid; int k_dir_id; } ;
struct TYPE_7__ {int t_super; } ;


 TYPE_5__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static inline void FUNC_3(reiserfs_blocknr_hint_t * VAR_1)
{
 char *VAR_2;

 if (VAR_1->formatted_node) {
  VAR_2 = (char *)&VAR_1->key.k_dir_id;
 } else {
  if (!VAR_1->inode) {

   VAR_2 = (char *)&VAR_1->key.k_dir_id;
  } else
      if (FUNC_1(VAR_0, VAR_1->th->t_super))
   VAR_2 = (char *)(&FUNC_0(VAR_1->inode)->k_dir_id);
  else
   VAR_2 =
       (char *)(&FUNC_0(VAR_1->inode)->k_objectid);
 }

 VAR_1->search_start =
     VAR_1->beg + FUNC_2(VAR_2, 4) % (VAR_1->end - VAR_1->beg);
}
