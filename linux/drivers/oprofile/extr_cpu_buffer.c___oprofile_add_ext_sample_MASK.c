
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;
struct oprofile_cpu_buffer {int dummy; } ;
struct TYPE_2__ {int (* backtrace ) (struct pt_regs* const,unsigned long) ;} ;


 int FUNC_0 (struct oprofile_cpu_buffer*,unsigned long,unsigned long,int,unsigned long,struct task_struct*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct oprofile_cpu_buffer*) ;
 int FUNC_2 (struct oprofile_cpu_buffer*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (struct pt_regs* const,unsigned long) ;
 struct oprofile_cpu_buffer* FUNC_4 (int *) ;

__attribute__((used)) static inline void
FUNC_5(unsigned long VAR_3, struct pt_regs * const VAR_4,
     unsigned long VAR_5, int VAR_6,
     struct task_struct *VAR_7)
{
 struct oprofile_cpu_buffer *VAR_8 = FUNC_4(&VAR_0);
 unsigned long VAR_9 = VAR_1;





 if (!FUNC_0(VAR_8, VAR_3, VAR_9, VAR_6, VAR_5, VAR_7))

  return;

 if (!VAR_9)
  return;

 FUNC_1(VAR_8);
 VAR_2.backtrace(VAR_4, VAR_9);
 FUNC_2(VAR_8);
}
