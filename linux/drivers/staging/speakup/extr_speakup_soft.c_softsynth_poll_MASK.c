
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;
struct TYPE_2__ {int spinlock; scalar_t__ flushing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int VAR_4 ;

__attribute__((used)) static __poll_t FUNC_5(struct file *VAR_5, struct poll_table_struct *VAR_6)
{
 unsigned long VAR_7;
 __poll_t VAR_8 = 0;

 FUNC_0(VAR_5, &VAR_2, VAR_6);

 FUNC_1(&VAR_3.spinlock, VAR_7);
 if (FUNC_4() == &VAR_4 &&
     (!FUNC_3() || VAR_3.flushing))
  VAR_8 = VAR_0 | VAR_1;
 FUNC_2(&VAR_3.spinlock, VAR_7);
 return VAR_8;
}
