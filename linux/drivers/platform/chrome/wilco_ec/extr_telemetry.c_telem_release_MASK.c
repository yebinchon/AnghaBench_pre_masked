
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct telem_session_data {TYPE_1__* dev_data; } ;
struct inode {int dummy; } ;
struct file {struct telem_session_data* private_data; } ;
struct TYPE_2__ {int dev; int available; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct telem_session_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct telem_session_data *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->dev_data->available, 1);
 FUNC_2(&VAR_2->dev_data->dev);
 FUNC_1(VAR_2);

 return 0;
}
