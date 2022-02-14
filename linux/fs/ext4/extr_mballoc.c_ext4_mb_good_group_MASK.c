
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ext4_group_info {unsigned int bb_free; unsigned int bb_fragments; int bb_largest_free_order; } ;
struct TYPE_5__ {unsigned int fe_len; } ;
struct ext4_allocation_context {int ac_flags; TYPE_1__ ac_g_ex; int ac_2order; TYPE_2__* ac_sb; } ;
typedef int ext4_group_t ;
struct TYPE_6__ {int s_blocksize_bits; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct ext4_group_info*) ;
 int FUNC_3 (struct ext4_group_info*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 struct ext4_group_info* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct ext4_allocation_context *VAR_3,
    ext4_group_t VAR_4, int VAR_5)
{
 unsigned VAR_6, VAR_7;
 int VAR_8 = FUNC_5(FUNC_4(VAR_3->ac_sb));
 struct ext4_group_info *VAR_9 = FUNC_6(VAR_3->ac_sb, VAR_4);

 FUNC_1(VAR_5 < 0 || VAR_5 >= 4);

 VAR_6 = VAR_9->bb_free;
 if (VAR_6 == 0)
  return 0;
 if (VAR_5 <= 2 && VAR_6 < VAR_3->ac_g_ex.fe_len)
  return 0;

 if (FUNC_8(FUNC_2(VAR_9)))
  return 0;


 if (FUNC_8(FUNC_3(VAR_9))) {
  int VAR_10 = FUNC_7(VAR_3->ac_sb, VAR_4, VAR_2);
  if (VAR_10)
   return VAR_10;
 }

 VAR_7 = VAR_9->bb_fragments;
 if (VAR_7 == 0)
  return 0;

 switch (VAR_5) {
 case 0:
  FUNC_1(VAR_3->ac_2order == 0);


  if ((VAR_3->ac_flags & VAR_1) &&
      (VAR_8 >= VAR_0) &&
      ((VAR_4 % VAR_8) == 0))
   return 0;

  if ((VAR_3->ac_2order > VAR_3->ac_sb->s_blocksize_bits+1) ||
      (VAR_6 / VAR_7) >= VAR_3->ac_g_ex.fe_len)
   return 1;

  if (VAR_9->bb_largest_free_order < VAR_3->ac_2order)
   return 0;

  return 1;
 case 1:
  if ((VAR_6 / VAR_7) >= VAR_3->ac_g_ex.fe_len)
   return 1;
  break;
 case 2:
  if (VAR_6 >= VAR_3->ac_g_ex.fe_len)
   return 1;
  break;
 case 3:
  return 1;
 default:
  FUNC_0();
 }

 return 0;
}
