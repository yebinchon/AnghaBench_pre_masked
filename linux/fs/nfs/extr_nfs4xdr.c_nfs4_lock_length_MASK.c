
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct file_lock {scalar_t__ fl_end; scalar_t__ fl_start; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline uint64_t FUNC_0(struct file_lock *VAR_1)
{
 if (VAR_1->fl_end == VAR_0)
  return ~(uint64_t)0;
 return VAR_1->fl_end - VAR_1->fl_start + 1;
}
