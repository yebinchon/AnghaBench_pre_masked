
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in_core_key {int k_objectid; } ;
struct TYPE_5__ {int search_start; int beg; int end; TYPE_1__* th; struct in_core_key key; } ;
typedef TYPE_2__ reiserfs_blocknr_hint_t ;
struct TYPE_4__ {scalar_t__ displace_new_blocks; } ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline void FUNC_1(reiserfs_blocknr_hint_t * VAR_0)
{
 struct in_core_key *VAR_1 = &VAR_0->key;

 VAR_0->th->displace_new_blocks = 0;
 VAR_0->search_start =
     VAR_0->beg + FUNC_0((char *)(&VAR_1->k_objectid),
       4) % (VAR_0->end - VAR_0->beg);
}
