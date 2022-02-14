
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;
struct inode {int dummy; } ;


 struct mm_struct* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mm_struct*) ;
 unsigned int VAR_1 ;
 struct task_struct* FUNC_2 (struct inode*) ;
 struct mm_struct* FUNC_3 (struct task_struct*,unsigned int) ;
 int FUNC_4 (struct mm_struct*) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (struct task_struct*) ;

struct mm_struct *FUNC_7(struct inode *VAR_2, unsigned int VAR_3)
{
 struct task_struct *VAR_4 = FUNC_2(VAR_2);
 struct mm_struct *VAR_5 = FUNC_0(-VAR_0);

 if (VAR_4) {
  VAR_5 = FUNC_3(VAR_4, VAR_3 | VAR_1);
  FUNC_6(VAR_4);

  if (!FUNC_1(VAR_5)) {

   FUNC_4(VAR_5);

   FUNC_5(VAR_5);
  }
 }

 return VAR_5;
}
