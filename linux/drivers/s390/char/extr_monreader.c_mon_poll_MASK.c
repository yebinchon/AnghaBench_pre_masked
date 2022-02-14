
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct mon_private {int read_ready; int iucv_severed; } ;
struct file {struct mon_private* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_4, struct poll_table_struct *VAR_5)
{
 struct mon_private *VAR_6 = VAR_4->private_data;

 FUNC_1(VAR_4, &VAR_3, VAR_5);
 if (FUNC_2(FUNC_0(&VAR_6->iucv_severed)))
  return VAR_0;
 if (FUNC_0(&VAR_6->read_ready))
  return VAR_1 | VAR_2;
 return 0;
}
