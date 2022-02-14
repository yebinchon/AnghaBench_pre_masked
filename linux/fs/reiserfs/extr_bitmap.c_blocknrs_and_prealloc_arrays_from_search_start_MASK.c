
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct super_block {int dummy; } ;
struct TYPE_13__ {int preallocate; int prealloc_size; TYPE_3__* inode; int formatted_node; TYPE_2__* th; scalar_t__ beg; scalar_t__ search_start; } ;
typedef TYPE_1__ reiserfs_blocknr_hint_t ;
typedef scalar_t__ b_blocknr_t ;
struct TYPE_15__ {int i_uid; } ;
struct TYPE_14__ {struct super_block* t_super; } ;
struct TYPE_12__ {int i_prealloc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_10__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (struct super_block*,int ,char*,int,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,scalar_t__,int) ;
 int FUNC_9 (struct super_block*,int) ;
 int FUNC_10 (struct super_block*) ;

__attribute__((used)) static inline int FUNC_11
    (reiserfs_blocknr_hint_t * VAR_4, b_blocknr_t * VAR_5,
     int VAR_6) {
 struct super_block *VAR_7 = VAR_4->th->t_super;
 b_blocknr_t VAR_8 = VAR_4->search_start;
 b_blocknr_t VAR_9 = FUNC_1(VAR_7) - 1;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_3(VAR_4);
 if (!VAR_4->formatted_node) {
  int VAR_13;





  VAR_12 = FUNC_10(VAR_7);
  VAR_13 =
      FUNC_4(VAR_4->inode, VAR_6);
  if (VAR_13) {
   FUNC_9(VAR_7, VAR_12);
   return VAR_2;
  }
  if (VAR_4->preallocate && VAR_4->prealloc_size) {





   VAR_13 = FUNC_6(VAR_4->inode,
        VAR_4->prealloc_size);
   if (VAR_13)
    VAR_4->preallocate = VAR_4->prealloc_size = 0;
  }

  FUNC_9(VAR_7, VAR_12);
 }

 do {
  switch (VAR_10++) {
  case 0:
   VAR_8 = VAR_4->search_start;
   VAR_9 = FUNC_1(VAR_7) - 1;
   break;
  case 1:
   VAR_8 = VAR_4->beg;
   VAR_9 = VAR_4->search_start;
   break;
  case 2:
   VAR_8 = 0;
   VAR_9 = VAR_4->beg;
   break;
  default:


   if (!VAR_4->formatted_node) {
    VAR_12 = FUNC_10(VAR_7);
    FUNC_5(VAR_4->inode,
     VAR_6 + VAR_4->prealloc_size -
     VAR_11);
    FUNC_9(VAR_7, VAR_12);
   }
   while (VAR_11--)
    FUNC_8(VAR_4->th, VAR_4->inode,
          VAR_5[VAR_11],
          !VAR_4->formatted_node);

   return VAR_1;
  }
 } while ((VAR_11 += FUNC_2(VAR_4,
         VAR_5 +
         VAR_11,
         VAR_8, VAR_9,
         1,
         VAR_6 -
         VAR_11,
         VAR_4->
         prealloc_size))
   < VAR_6);
 if (!VAR_4->formatted_node &&
     VAR_6 + VAR_4->prealloc_size >
     VAR_11 + FUNC_0(VAR_4->inode)->i_prealloc_count) {
  VAR_12 = FUNC_10(VAR_7);
  FUNC_5(VAR_4->inode, VAR_6 +
      VAR_4->prealloc_size - VAR_11 -
      FUNC_0(VAR_4->inode)->
      i_prealloc_count);
  FUNC_9(VAR_7, VAR_12);
 }

 return VAR_0;
}
