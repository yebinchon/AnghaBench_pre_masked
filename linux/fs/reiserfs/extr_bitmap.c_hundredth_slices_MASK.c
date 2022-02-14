
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_core_key {int k_dir_id; } ;
struct TYPE_3__ {int end; int search_start; struct in_core_key key; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef int b_blocknr_t ;


 int FUNC_0 (char*,int) ;

__attribute__((used)) static inline void FUNC_1(reiserfs_blocknr_hint_t * VAR_0)
{
 struct in_core_key *VAR_1 = &VAR_0->key;
 b_blocknr_t VAR_2;

 VAR_2 =
     (FUNC_0((char *)(&VAR_1->k_dir_id), 4) % 100) * (VAR_0->end / 100);
 if (VAR_2 > VAR_0->search_start
     || VAR_2 + (VAR_0->end / 100) <= VAR_0->search_start) {
  VAR_0->search_start = VAR_2;
 }
}
