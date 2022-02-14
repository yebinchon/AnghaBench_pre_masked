
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct oprofile_cpu_buffer {int sample_lost_overflow; int sample_received; } ;
struct op_sample {scalar_t__ event; int eip; } ;
struct op_entry {int * event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct oprofile_cpu_buffer*,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct op_entry*,unsigned long) ;
 struct op_sample* FUNC_2 (struct op_entry*,int) ;
 struct oprofile_cpu_buffer* FUNC_3 (int *) ;
 int FUNC_4 (struct pt_regs* const) ;

void
FUNC_5(struct op_entry *VAR_3, struct pt_regs * const VAR_4,
         unsigned long VAR_5, int VAR_6, int VAR_7)
{
 struct op_sample *VAR_8;
 int VAR_9 = !FUNC_4(VAR_4);
 struct oprofile_cpu_buffer *VAR_10 = FUNC_3(&VAR_2);

 VAR_10->sample_received++;


 if (FUNC_0(VAR_10, 0, VAR_9, VAR_1))
  goto fail;

 VAR_8 = FUNC_2(VAR_3, VAR_7 + 2);
 if (!VAR_8)
  goto fail;
 VAR_8->eip = VAR_0;
 VAR_8->event = 0;

 FUNC_1(VAR_3, VAR_6);
 FUNC_1(VAR_3, VAR_5);

 return;

fail:
 VAR_3->event = ((void*)0);
 VAR_10->sample_lost_overflow++;
}
