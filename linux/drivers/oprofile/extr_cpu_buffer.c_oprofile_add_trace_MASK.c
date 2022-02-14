
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oprofile_cpu_buffer {int backtrace_aborted; scalar_t__ tracing; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct oprofile_cpu_buffer*,unsigned long,int ) ;
 int VAR_1 ;
 struct oprofile_cpu_buffer* FUNC_1 (int *) ;

void FUNC_2(unsigned long VAR_2)
{
 struct oprofile_cpu_buffer *VAR_3 = FUNC_1(&VAR_1);

 if (!VAR_3->tracing)
  return;





 if (VAR_2 == VAR_0)
  goto fail;

 if (FUNC_0(VAR_3, VAR_2, 0))
  goto fail;

 return;
fail:
 VAR_3->tracing = 0;
 VAR_3->backtrace_aborted++;
 return;
}
