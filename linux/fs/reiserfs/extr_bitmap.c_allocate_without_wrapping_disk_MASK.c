
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int inode; TYPE_2__* th; int block; int formatted_node; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_9__ {int i_prealloc_count; scalar_t__ i_prealloc_block; int i_prealloc_list; } ;
struct TYPE_8__ {int j_prealloc_list; } ;
struct TYPE_7__ {int t_super; } ;


 TYPE_5__* FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*,scalar_t__,int,int,int,int ) ;

__attribute__((used)) static inline int FUNC_4(reiserfs_blocknr_hint_t * VAR_0,
       b_blocknr_t * VAR_1,
       b_blocknr_t VAR_2,
       b_blocknr_t VAR_3, int VAR_4,
       int VAR_5,
       int VAR_6)
{
 int VAR_7 = VAR_5;
 int VAR_8;

 while (VAR_7 > 0 && VAR_2 <= VAR_3) {
  VAR_8 = FUNC_3(VAR_0->th, &VAR_2, VAR_3, VAR_4,
        VAR_7 + VAR_6,
        !VAR_0->formatted_node, VAR_0->block);

  if (VAR_8 == 0)
   break;


  while (VAR_7 > 0 && VAR_8 > 0) {
   *VAR_1++ = VAR_2++;
   VAR_7--;
   VAR_8--;
  }


  if (VAR_8 > 0) {




   FUNC_2(&FUNC_0(VAR_0->inode)->i_prealloc_list,
     &FUNC_1(VAR_0->th->t_super)->
     j_prealloc_list);
   FUNC_0(VAR_0->inode)->i_prealloc_block = VAR_2;
   FUNC_0(VAR_0->inode)->i_prealloc_count =
       VAR_8;
   break;
  }
 }

 return (VAR_5 - VAR_7);
}
