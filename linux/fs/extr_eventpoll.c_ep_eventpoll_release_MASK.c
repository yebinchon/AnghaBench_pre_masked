
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct eventpoll* private_data; } ;
struct eventpoll {int dummy; } ;


 int FUNC_0 (struct eventpoll*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct eventpoll *VAR_2 = VAR_1->private_data;

 if (VAR_2)
  FUNC_0(VAR_2);

 return 0;
}
