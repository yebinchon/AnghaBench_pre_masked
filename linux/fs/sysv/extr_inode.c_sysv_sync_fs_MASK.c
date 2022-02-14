
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sysv_sb_info {scalar_t__ s_type; scalar_t__* s_sb_state; int s_lock; int s_bh2; scalar_t__* s_sb_time; } ;
struct super_block {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sysv_sb_info* FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct sysv_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sysv_sb_info*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct super_block *VAR_1, int VAR_2)
{
 struct sysv_sb_info *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = (u32)FUNC_3(), VAR_5;

 FUNC_5(&VAR_3->s_lock);






 VAR_5 = FUNC_2(VAR_3, *VAR_3->s_sb_time);
 if (VAR_3->s_type == VAR_0) {
  if (*VAR_3->s_sb_state == FUNC_1(VAR_3, 0x7c269d38u - VAR_5))
   *VAR_3->s_sb_state = FUNC_1(VAR_3, 0x7c269d38u - VAR_4);
  *VAR_3->s_sb_time = FUNC_1(VAR_3, VAR_4);
  FUNC_4(VAR_3->s_bh2);
 }

 FUNC_6(&VAR_3->s_lock);

 return 0;
}
