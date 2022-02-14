
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static void FUNC_0(struct file_lock *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 128:
  VAR_2->fl_flags &= ~VAR_1;

 case 129:
  VAR_2->fl_flags &= ~VAR_0;
 }
}
