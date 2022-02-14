
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; scalar_t__ fl_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(struct file_lock *VAR_2)
{
 return VAR_2->fl_start == 0 && VAR_2->fl_end == VAR_1 &&
   VAR_2->fl_type == VAR_0;
}
