
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int device_lock; } ;
struct mei_cl {struct mei_device* dev; } ;
struct inode {int dummy; } ;
struct file {struct mei_cl* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mei_device*,struct mei_cl*,char*) ;
 int FUNC_2 (struct mei_cl*) ;
 int FUNC_3 (struct mei_cl*) ;
 int FUNC_4 (struct mei_cl*,struct file*) ;
 int FUNC_5 (struct mei_cl*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 struct mei_cl *VAR_3 = VAR_2->private_data;
 struct mei_device *VAR_4;
 int VAR_5;

 if (FUNC_0(!VAR_3 || !VAR_3->dev))
  return -VAR_0;

 VAR_4 = VAR_3->dev;

 FUNC_6(&VAR_4->device_lock);

 VAR_5 = FUNC_3(VAR_3);

 FUNC_4(VAR_3, VAR_2);
 FUNC_1(VAR_4, VAR_3, "removing\n");

 FUNC_5(VAR_3);

 VAR_2->private_data = ((void*)0);

 FUNC_2(VAR_3);

 FUNC_7(&VAR_4->device_lock);
 return VAR_5;
}
