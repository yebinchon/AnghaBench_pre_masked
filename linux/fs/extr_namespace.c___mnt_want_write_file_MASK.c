
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct file *VAR_1)
{
 if (!(VAR_1->f_mode & VAR_0))
  return FUNC_0(VAR_1->f_path.mnt);
 else
  return FUNC_1(VAR_1->f_path.mnt);
}
