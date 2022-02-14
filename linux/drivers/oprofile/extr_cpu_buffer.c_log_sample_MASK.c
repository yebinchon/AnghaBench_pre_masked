
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct oprofile_cpu_buffer {int sample_lost_overflow; int sample_invalid_eip; int sample_received; } ;


 unsigned long VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_0 (struct oprofile_cpu_buffer*,unsigned long,int,struct task_struct*) ;
 scalar_t__ FUNC_1 (struct oprofile_cpu_buffer*,unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_2(struct oprofile_cpu_buffer *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, int VAR_5, unsigned long VAR_6,
    struct task_struct *VAR_7)
{
 struct task_struct *VAR_8 = VAR_7 ? VAR_7 : VAR_1;
 VAR_2->sample_received++;

 if (VAR_3 == VAR_0) {
  VAR_2->sample_invalid_eip++;
  return 0;
 }

 if (FUNC_0(VAR_2, VAR_4, VAR_5, VAR_8))
  goto fail;

 if (FUNC_1(VAR_2, VAR_3, VAR_6))
  goto fail;

 return 1;

fail:
 VAR_2->sample_lost_overflow++;
 return 0;
}
