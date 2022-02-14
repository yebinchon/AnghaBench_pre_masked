
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_owner; scalar_t__ fl_break_time; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct file_lock *VAR_0)
{





 VAR_0->fl_break_time = 0;
 FUNC_0(VAR_0->fl_owner);
 return 0;
}
