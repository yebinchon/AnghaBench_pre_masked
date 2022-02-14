
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_bdev; } ;
struct ext4_super_block {int s_error_count; int s_last_error_block; int s_first_error_block; int s_last_error_ino; int s_first_error_ino; void* s_first_error_line; int s_first_error_func; int s_last_error_time_hi; int s_first_error_time_hi; scalar_t__ s_last_error_time; scalar_t__ s_first_error_time; void* s_last_error_line; int s_last_error_func; int s_state; } ;
struct TYPE_2__ {int s_err_report; int s_mount_state; struct ext4_super_block* s_es; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct ext4_super_block*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 int VAR_3 ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_8(struct super_block *VAR_4, const char *VAR_5,
       unsigned int VAR_6)
{
 struct ext4_super_block *VAR_7 = FUNC_0(VAR_4)->s_es;

 FUNC_0(VAR_4)->s_mount_state |= VAR_0;
 if (FUNC_1(VAR_4->s_bdev))
  return;
 VAR_7->s_state |= FUNC_2(VAR_0);
 FUNC_4(VAR_7, VAR_3);
 FUNC_7(VAR_7->s_last_error_func, VAR_5, sizeof(VAR_7->s_last_error_func));
 VAR_7->s_last_error_line = FUNC_3(VAR_6);
 if (!VAR_7->s_first_error_time) {
  VAR_7->s_first_error_time = VAR_7->s_last_error_time;
  VAR_7->s_first_error_time_hi = VAR_7->s_last_error_time_hi;
  FUNC_7(VAR_7->s_first_error_func, VAR_5,
   sizeof(VAR_7->s_first_error_func));
  VAR_7->s_first_error_line = FUNC_3(VAR_6);
  VAR_7->s_first_error_ino = VAR_7->s_last_error_ino;
  VAR_7->s_first_error_block = VAR_7->s_last_error_block;
 }




 if (!VAR_7->s_error_count)
  FUNC_6(&FUNC_0(VAR_4)->s_err_report, VAR_2 + 24*60*60*VAR_1);
 FUNC_5(&VAR_7->s_error_count, 1);
}
