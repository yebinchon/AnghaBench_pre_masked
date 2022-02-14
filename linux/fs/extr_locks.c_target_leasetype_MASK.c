
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_flags; int fl_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file_lock *VAR_4)
{
 if (VAR_4->fl_flags & VAR_1)
  return VAR_3;
 if (VAR_4->fl_flags & VAR_0)
  return VAR_2;
 return VAR_4->fl_type;
}
