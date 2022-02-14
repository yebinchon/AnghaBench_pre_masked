
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_3,
          struct poll_table_struct *VAR_4)
{
 __poll_t VAR_5 = 0;

 FUNC_1(VAR_3, &VAR_2, VAR_4);

 if (!FUNC_0(&VAR_1))
  VAR_5 |= VAR_0;
 return VAR_5;
}
