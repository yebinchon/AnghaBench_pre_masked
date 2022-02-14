
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct poll_table_struct {int dummy; } ;
struct media_devnode {TYPE_1__* fops; } ;
struct file {int dummy; } ;
typedef int __poll_t ;
struct TYPE_2__ {int (* poll ) (struct file*,struct poll_table_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct media_devnode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct media_devnode*) ;
 int FUNC_2 (struct file*,struct poll_table_struct*) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_3,
          struct poll_table_struct *VAR_4)
{
 struct media_devnode *VAR_5 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_5))
  return VAR_1 | VAR_2;
 if (!VAR_5->fops->poll)
  return VAR_0;
 return VAR_5->fops->poll(VAR_3, VAR_4);
}
