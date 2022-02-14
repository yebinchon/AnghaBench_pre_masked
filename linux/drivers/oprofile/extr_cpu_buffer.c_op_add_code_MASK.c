
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct oprofile_cpu_buffer {int last_is_kernel; struct task_struct* last_task; } ;
struct op_sample {unsigned long event; int eip; } ;
struct op_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct op_entry*,unsigned long) ;
 int FUNC_1 (struct op_entry*) ;
 struct op_sample* FUNC_2 (struct op_entry*,int) ;

__attribute__((used)) static int
FUNC_3(struct oprofile_cpu_buffer *VAR_6, unsigned long VAR_7,
     int VAR_8, struct task_struct *VAR_9)
{
 struct op_entry VAR_10;
 struct op_sample *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_12 = 0;

 if (VAR_7)
  VAR_12 |= VAR_4;


 VAR_8 = !!VAR_8;
 if (VAR_6->last_is_kernel != VAR_8) {
  VAR_6->last_is_kernel = VAR_8;
  VAR_12 |= VAR_3;
  if (VAR_8)
   VAR_12 |= VAR_2;
 }


 if (VAR_6->last_task != VAR_9) {
  VAR_6->last_task = VAR_9;
  VAR_12 |= VAR_5;
 }

 if (!VAR_12)

  return 0;

 if (VAR_12 & VAR_5)
  VAR_13 = 1;
 else
  VAR_13 = 0;

 VAR_11 = FUNC_2(&VAR_10, VAR_13);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->eip = VAR_1;
 VAR_11->event = VAR_12;

 if (VAR_13)
  FUNC_0(&VAR_10, (unsigned long)VAR_9);

 FUNC_1(&VAR_10);

 return 0;
}
