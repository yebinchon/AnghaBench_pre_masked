
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int * fl_lmops; int * fl_ops; int fl_end; scalar_t__ fl_start; int fl_flags; struct file* fl_file; int fl_pid; struct file* fl_owner; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct file_lock*,long) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, long VAR_6, struct file_lock *VAR_7)
{
 if (FUNC_0(VAR_7, VAR_6) != 0)
  return -VAR_0;

 VAR_7->fl_owner = VAR_5;
 VAR_7->fl_pid = VAR_3->tgid;

 VAR_7->fl_file = VAR_5;
 VAR_7->fl_flags = VAR_1;
 VAR_7->fl_start = 0;
 VAR_7->fl_end = VAR_2;
 VAR_7->fl_ops = ((void*)0);
 VAR_7->fl_lmops = &VAR_4;
 return 0;
}
