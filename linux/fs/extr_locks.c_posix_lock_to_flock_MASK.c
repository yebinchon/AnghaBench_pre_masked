
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flock {scalar_t__ l_start; scalar_t__ l_len; int l_type; scalar_t__ l_whence; int l_pid; } ;
struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; int fl_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct file_lock*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct flock *VAR_4, struct file_lock *VAR_5)
{
 VAR_4->l_pid = FUNC_0(VAR_5, FUNC_1(VAR_3));
 VAR_4->l_start = VAR_5->fl_start;
 VAR_4->l_len = VAR_5->fl_end == VAR_1 ? 0 :
  VAR_5->fl_end - VAR_5->fl_start + 1;
 VAR_4->l_whence = 0;
 VAR_4->l_type = VAR_5->fl_type;
 return 0;
}
