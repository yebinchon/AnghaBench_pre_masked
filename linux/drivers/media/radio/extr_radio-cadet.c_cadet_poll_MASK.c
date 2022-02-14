
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
struct cadet {scalar_t__ rdsstat; int lock; int read_queue; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cadet*) ;
 int FUNC_1 (struct cadet*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct poll_table_struct*) ;
 int FUNC_5 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_6 (struct file*,struct poll_table_struct*) ;
 struct cadet* FUNC_7 (struct file*) ;

__attribute__((used)) static __poll_t FUNC_8(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct cadet *VAR_4 = FUNC_7(VAR_2);
 __poll_t VAR_5 = FUNC_4(VAR_3);
 __poll_t VAR_6 = FUNC_6(VAR_2, VAR_3);

 FUNC_5(VAR_2, &VAR_4->read_queue, VAR_3);
 if (VAR_4->rdsstat == 0 && (VAR_5 & (VAR_0 | VAR_1))) {
  FUNC_2(&VAR_4->lock);
  if (VAR_4->rdsstat == 0)
   FUNC_1(VAR_4);
  FUNC_3(&VAR_4->lock);
 }
 if (FUNC_0(VAR_4))
  VAR_6 |= VAR_0 | VAR_1;
 return VAR_6;
}
