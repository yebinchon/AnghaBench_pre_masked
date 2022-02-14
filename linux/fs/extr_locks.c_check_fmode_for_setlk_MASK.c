
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int fl_type; TYPE_1__* fl_file; } ;
struct TYPE_2__ {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static int
FUNC_0(struct file_lock *VAR_3)
{
 switch (VAR_3->fl_type) {
 case 129:
  if (!(VAR_3->fl_file->f_mode & VAR_1))
   return -VAR_0;
  break;
 case 128:
  if (!(VAR_3->fl_file->f_mode & VAR_2))
   return -VAR_0;
 }
 return 0;
}
