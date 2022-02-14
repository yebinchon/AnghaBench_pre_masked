
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ beg; int end; scalar_t__ search_start; int * inode; scalar_t__ formatted_node; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_5__ {int k_dir_id; } ;


 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(reiserfs_blocknr_hint_t * VAR_0)
{
 b_blocknr_t VAR_1;

 if (VAR_0->formatted_node || VAR_0->inode == ((void*)0)) {
  return 0;
 }

 VAR_1 =
     VAR_0->beg +
     FUNC_1(FUNC_0(VAR_0->inode)->k_dir_id) % (VAR_0->end -
             VAR_0->beg);
 if (VAR_1 > VAR_0->search_start)
  VAR_0->search_start = VAR_1;

 return 1;
}
