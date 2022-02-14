
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct super_block {int dummy; } ;
struct TYPE_21__ {scalar_t__ search_start; scalar_t__ formatted_node; scalar_t__ inode; TYPE_1__* th; scalar_t__ end; scalar_t__ beg; } ;
typedef TYPE_2__ reiserfs_blocknr_hint_t ;
struct TYPE_20__ {scalar_t__ displace_new_blocks; struct super_block* t_super; } ;
struct TYPE_19__ {scalar_t__ i_prealloc_block; } ;


 TYPE_18__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int (*) (TYPE_2__*),struct super_block*) ;
 scalar_t__ FUNC_3 (struct super_block*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (struct super_block*) ;
 scalar_t__ FUNC_8 (struct super_block*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct super_block*) ;
 int FUNC_19 (struct super_block*,TYPE_2__*) ;
 scalar_t__ FUNC_20 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_21(reiserfs_blocknr_hint_t * VAR_0,
       int VAR_1)
{
 struct super_block *VAR_2 = VAR_0->th->t_super;
 int VAR_3;

 VAR_0->beg = 0;
 VAR_0->end = FUNC_1(VAR_2) - 1;


 if (FUNC_3(VAR_2))
  FUNC_19(VAR_2, VAR_0);
 if (FUNC_7(VAR_2) && !VAR_0->formatted_node
     && FUNC_20(VAR_0)) {
  FUNC_5(VAR_0);
  return;
 }





 if (VAR_0->formatted_node && FUNC_2(FUNC_11, VAR_2)) {
  FUNC_10(VAR_0);
  return;
 }

 VAR_3 = FUNC_9(VAR_0);
 if (FUNC_2(FUNC_16, VAR_2)) {
  if (!VAR_0->formatted_node) {
   if (!FUNC_17(VAR_2))
    FUNC_16(VAR_0);
   else if (!FUNC_18(VAR_2))
    FUNC_15(VAR_0);

   if (VAR_0->inode
       && VAR_0->search_start <
       FUNC_0(VAR_0->inode)->i_prealloc_block)
    VAR_0->search_start =
        FUNC_0(VAR_0->inode)->i_prealloc_block;
  }
  return;
 }


 if (FUNC_2(FUNC_12, VAR_2)
     && !(FUNC_7(VAR_2) && !VAR_0->formatted_node)) {
  FUNC_12(VAR_0);
  return;
 }


 if (!VAR_3 && !VAR_0->formatted_node &&
     FUNC_2(FUNC_15, VAR_2)) {
  FUNC_15(VAR_0);
 }


 if ((!VAR_3 || VAR_0->formatted_node) &&
     FUNC_2(FUNC_13, VAR_2)) {
  FUNC_13(VAR_0);
 }


 if (!VAR_3 && !VAR_0->formatted_node && FUNC_2(FUNC_4, VAR_2)) {
  FUNC_4(VAR_0);
 }







 if (!VAR_3 && !VAR_0->formatted_node && FUNC_2(FUNC_14, VAR_2)) {
  FUNC_14(VAR_0);
 }
 return;
}
