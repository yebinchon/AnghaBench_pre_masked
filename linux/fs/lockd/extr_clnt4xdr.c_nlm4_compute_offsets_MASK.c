
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; } ;
struct nlm_lock {struct file_lock fl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct nlm_lock *VAR_1,
     u64 *VAR_2, u64 *VAR_3)
{
 const struct file_lock *VAR_4 = &VAR_1->fl;

 *VAR_2 = FUNC_0(VAR_4->fl_start);
 if (VAR_4->fl_end == VAR_0)
  *VAR_3 = 0;
 else
  *VAR_3 = FUNC_0(VAR_4->fl_end - VAR_4->fl_start + 1);
}
