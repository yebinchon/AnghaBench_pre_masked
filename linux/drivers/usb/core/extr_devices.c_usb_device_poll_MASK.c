
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct file {unsigned int f_version; } ;
typedef int __poll_t ;
struct TYPE_2__ {int count; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_2(struct file *VAR_3,
        struct poll_table_struct *VAR_4)
{
 unsigned int VAR_5;

 FUNC_1(VAR_3, &VAR_2.wait, VAR_4);

 VAR_5 = FUNC_0(&VAR_2.count);
 if (VAR_3->f_version != VAR_5) {
  VAR_3->f_version = VAR_5;
  return VAR_0 | VAR_1;
 }

 return 0;
}
