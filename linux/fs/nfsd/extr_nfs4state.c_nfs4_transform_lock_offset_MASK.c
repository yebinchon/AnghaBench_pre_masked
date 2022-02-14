
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; } ;


 void* VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct file_lock *VAR_1)
{
 if (VAR_1->fl_start < 0)
  VAR_1->fl_start = VAR_0;
 if (VAR_1->fl_end < 0)
  VAR_1->fl_end = VAR_0;
}
