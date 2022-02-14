
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct as102_dev_t* private_data; } ;
struct as102_dev_t {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct as102_dev_t *VAR_3 = ((void*)0);

 VAR_3 = VAR_2->private_data;
 if (VAR_3 != ((void*)0)) {

  FUNC_0(&VAR_3->kref, VAR_0);
 }

 return 0;
}
