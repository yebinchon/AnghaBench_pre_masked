
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_5, poll_table *VAR_6)
{
 __poll_t VAR_7;
 unsigned long VAR_8;

 FUNC_0(VAR_5, &VAR_2, VAR_6);
 FUNC_1(&VAR_4, VAR_8);
 if (VAR_3)
  VAR_7 = (VAR_0 | VAR_1);
 else
  VAR_7 = 0;
 VAR_3 = 0;
 FUNC_2(&VAR_4, VAR_8);
 return VAR_7;
}
