
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* th; scalar_t__ prealloc_size; TYPE_7__* inode; scalar_t__ preallocate; int formatted_node; } ;
typedef TYPE_4__ reiserfs_blocknr_hint_t ;
struct TYPE_13__ {int i_size; TYPE_1__* i_sb; int i_mode; } ;
struct TYPE_9__ {int preallocmin; scalar_t__ preallocsize; } ;
struct TYPE_12__ {TYPE_2__ s_alloc_options; } ;
struct TYPE_10__ {int t_super; } ;
struct TYPE_8__ {int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 TYPE_6__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(reiserfs_blocknr_hint_t * VAR_1)
{




 VAR_1->prealloc_size = 0;

 if (!VAR_1->formatted_node && VAR_1->preallocate) {
  if (FUNC_2(VAR_1->inode->i_mode) && !FUNC_0(VAR_1->inode)
      && VAR_1->inode->i_size >=
      FUNC_1(VAR_1->th->t_super)->s_alloc_options.
      preallocmin * VAR_1->inode->i_sb->s_blocksize)
   VAR_1->prealloc_size =
       FUNC_1(VAR_1->th->t_super)->s_alloc_options.
       preallocsize - 1;
 }
 return VAR_0;
}
