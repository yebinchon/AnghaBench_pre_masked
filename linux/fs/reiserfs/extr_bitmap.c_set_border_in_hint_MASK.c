
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_6__ {void* beg; void* end; scalar_t__ formatted_node; } ;
typedef TYPE_2__ reiserfs_blocknr_hint_t ;
typedef void* b_blocknr_t ;
struct TYPE_5__ {int border; } ;
struct TYPE_7__ {TYPE_1__ s_alloc_options; } ;


 TYPE_4__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;

__attribute__((used)) static inline void FUNC_2(struct super_block *VAR_0,
          reiserfs_blocknr_hint_t * VAR_1)
{
 b_blocknr_t VAR_2 =
     FUNC_1(VAR_0) / FUNC_0(VAR_0)->s_alloc_options.border;

 if (VAR_1->formatted_node)
  VAR_1->end = VAR_2 - 1;
 else
  VAR_1->beg = VAR_2;
}
