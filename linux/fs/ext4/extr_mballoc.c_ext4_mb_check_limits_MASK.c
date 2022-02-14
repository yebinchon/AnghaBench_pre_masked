
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_sb_info {scalar_t__ s_mb_max_to_scan; scalar_t__ s_mb_min_to_scan; } ;
struct ext4_free_extent {int fe_len; scalar_t__ fe_group; int fe_start; } ;
struct ext4_buddy {scalar_t__ bd_group; } ;
struct ext4_allocation_context {scalar_t__ ac_status; scalar_t__ ac_found; int ac_flags; struct ext4_free_extent ac_g_ex; struct ext4_free_extent ac_b_ex; int ac_sb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ext4_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct ext4_allocation_context*,struct ext4_buddy*) ;
 int FUNC_2 (struct ext4_buddy*,int ,int,struct ext4_free_extent*) ;

__attribute__((used)) static void FUNC_3(struct ext4_allocation_context *VAR_3,
     struct ext4_buddy *VAR_4,
     int VAR_5)
{
 struct ext4_sb_info *VAR_6 = FUNC_0(VAR_3->ac_sb);
 struct ext4_free_extent *VAR_7 = &VAR_3->ac_b_ex;
 struct ext4_free_extent *VAR_8 = &VAR_3->ac_g_ex;
 struct ext4_free_extent VAR_9;
 int VAR_10;

 if (VAR_3->ac_status == VAR_1)
  return;



 if (VAR_3->ac_found > VAR_6->s_mb_max_to_scan &&
   !(VAR_3->ac_flags & VAR_2)) {
  VAR_3->ac_status = VAR_0;
  return;
 }




 if (VAR_7->fe_len < VAR_8->fe_len)
  return;

 if ((VAR_5 || VAR_3->ac_found > VAR_6->s_mb_min_to_scan)
   && VAR_7->fe_group == VAR_4->bd_group) {



  VAR_10 = FUNC_2(VAR_4, VAR_7->fe_start, VAR_8->fe_len, &VAR_9);
  if (VAR_10 >= VAR_8->fe_len) {
   FUNC_1(VAR_3, VAR_4);
   return;
  }
 }
}
