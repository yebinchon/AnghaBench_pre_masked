
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int proc_iops; int mode; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct proc_dir_entry *VAR_0)
{
 return FUNC_0(VAR_0->mode) && !VAR_0->proc_iops;
}
