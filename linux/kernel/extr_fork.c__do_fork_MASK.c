
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {struct completion* vfork_done; } ;
struct pid {int dummy; } ;
struct kernel_clone_args {int flags; scalar_t__ exit_signal; int parent_tid; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long FUNC_1 (struct task_struct*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 () ;
 struct task_struct* FUNC_3 (int *,int,int ,struct kernel_clone_args*) ;
 int VAR_10 ;
 struct pid* FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct completion*) ;
 scalar_t__ FUNC_7 (int) ;
 long FUNC_8 (struct pid*) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,struct pid*) ;
 int FUNC_11 (struct pid*) ;
 int FUNC_12 (long,int ) ;
 int FUNC_13 (int ,struct task_struct*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct task_struct*,struct completion*) ;
 int FUNC_16 (struct task_struct*) ;

long FUNC_17(struct kernel_clone_args *VAR_11)
{
 u64 VAR_12 = VAR_11->flags;
 struct completion VAR_13;
 struct pid *VAR_14;
 struct task_struct *VAR_15;
 int VAR_16 = 0;
 long VAR_17;







 if (!(VAR_12 & VAR_1)) {
  if (VAR_12 & VAR_2)
   VAR_16 = VAR_7;
  else if (VAR_11->exit_signal != VAR_9)
   VAR_16 = VAR_5;
  else
   VAR_16 = VAR_6;

  if (FUNC_7(!FUNC_9(VAR_10, VAR_16)))
   VAR_16 = 0;
 }

 VAR_15 = FUNC_3(((void*)0), VAR_16, VAR_3, VAR_11);
 FUNC_2();

 if (FUNC_0(VAR_15))
  return FUNC_1(VAR_15);





 FUNC_13(VAR_10, VAR_15);

 VAR_14 = FUNC_4(VAR_15, VAR_4);
 VAR_17 = FUNC_8(VAR_14);

 if (VAR_12 & VAR_0)
  FUNC_12(VAR_17, VAR_11->parent_tid);

 if (VAR_12 & VAR_2) {
  VAR_15->vfork_done = &VAR_13;
  FUNC_6(&VAR_13);
  FUNC_5(VAR_15);
 }

 FUNC_16(VAR_15);


 if (FUNC_14(VAR_16))
  FUNC_10(VAR_16, VAR_14);

 if (VAR_12 & VAR_2) {
  if (!FUNC_15(VAR_15, &VAR_13))
   FUNC_10(VAR_8, VAR_14);
 }

 FUNC_11(VAR_14);
 return VAR_17;
}
