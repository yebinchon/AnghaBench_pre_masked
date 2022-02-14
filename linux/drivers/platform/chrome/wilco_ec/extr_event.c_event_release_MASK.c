
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct event_device_data* private_data; } ;
struct event_device_data {int dev; int available; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct event_device_data *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->available, 1);
 FUNC_1(&VAR_2->dev);

 return 0;
}
