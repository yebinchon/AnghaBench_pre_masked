
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tidr; } ;
struct task_struct {TYPE_2__ thread; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct mm_struct {TYPE_1__ context; } ;
struct cxllib_pe_attributes {scalar_t__ tid; scalar_t__ pid; int lpid; int sr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int,int) ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mm_struct*) ;

int FUNC_4(struct task_struct *VAR_4,
        unsigned long VAR_5,
        struct cxllib_pe_attributes *VAR_6)
{
 struct mm_struct *VAR_7 = ((void*)0);

 if (VAR_5 != VAR_1 &&
  VAR_5 != VAR_0)
  return -VAR_2;

 VAR_6->sr = FUNC_0(0,
    VAR_4 == ((void*)0),
    VAR_5 == VAR_0,
    1);
 VAR_6->lpid = FUNC_2(VAR_3);
 if (VAR_4) {
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 == ((void*)0))
   return -VAR_2;




  VAR_6->pid = VAR_7->context.id;
  FUNC_3(VAR_7);
  VAR_6->tid = VAR_4->thread.tidr;
 } else {
  VAR_6->pid = 0;
  VAR_6->tid = 0;
 }
 return 0;
}
