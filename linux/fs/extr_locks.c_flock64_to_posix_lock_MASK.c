
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flock64 {int l_whence; scalar_t__ l_start; int l_len; int l_type; } ;
struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; int * fl_lmops; int * fl_ops; int fl_flags; struct file* fl_file; int fl_pid; int fl_owner; } ;
struct file {scalar_t__ f_pos; } ;
struct TYPE_2__ {int tgid; int files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_0 (struct file_lock*,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, struct file_lock *VAR_6,
     struct flock64 *VAR_7)
{
 switch (VAR_7->l_whence) {
 case 128:
  VAR_6->fl_start = 0;
  break;
 case 130:
  VAR_6->fl_start = VAR_5->f_pos;
  break;
 case 129:
  VAR_6->fl_start = FUNC_2(FUNC_1(VAR_5));
  break;
 default:
  return -VAR_0;
 }
 if (VAR_7->l_start > VAR_3 - VAR_6->fl_start)
  return -VAR_1;
 VAR_6->fl_start += VAR_7->l_start;
 if (VAR_6->fl_start < 0)
  return -VAR_0;



 if (VAR_7->l_len > 0) {
  if (VAR_7->l_len - 1 > VAR_3 - VAR_6->fl_start)
   return -VAR_1;
  VAR_6->fl_end = VAR_6->fl_start + VAR_7->l_len - 1;

 } else if (VAR_7->l_len < 0) {
  if (VAR_6->fl_start + VAR_7->l_len < 0)
   return -VAR_0;
  VAR_6->fl_end = VAR_6->fl_start - 1;
  VAR_6->fl_start += VAR_7->l_len;
 } else
  VAR_6->fl_end = VAR_3;

 VAR_6->fl_owner = VAR_4->files;
 VAR_6->fl_pid = VAR_4->tgid;
 VAR_6->fl_file = VAR_5;
 VAR_6->fl_flags = VAR_2;
 VAR_6->fl_ops = ((void*)0);
 VAR_6->fl_lmops = ((void*)0);

 return FUNC_0(VAR_6, VAR_7->l_type);
}
