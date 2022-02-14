
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_lock {int type; int pid; int end; int start; } ;
struct fuse_conn {int pid_ns; } ;
struct file_lock {int fl_type; int fl_pid; int fl_end; int fl_start; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct fuse_conn *VAR_3,
      const struct fuse_file_lock *VAR_4,
      struct file_lock *VAR_5)
{
 switch (VAR_4->type) {
 case 129:
  break;

 case 130:
 case 128:
  if (VAR_4->start > VAR_1 || VAR_4->end > VAR_1 ||
      VAR_4->end < VAR_4->start)
   return -VAR_0;

  VAR_5->fl_start = VAR_4->start;
  VAR_5->fl_end = VAR_4->end;





  FUNC_2();
  VAR_5->fl_pid = FUNC_1(FUNC_0(VAR_4->pid, VAR_3->pid_ns), &VAR_2);
  FUNC_3();
  break;

 default:
  return -VAR_0;
 }
 VAR_5->fl_type = VAR_4->type;
 return 0;
}
