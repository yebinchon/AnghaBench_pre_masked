
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpmsg_eptdev {int dev; } ;
struct file {struct rpmsg_eptdev* private_data; } ;


 long VAR_0 ;
 unsigned int VAR_1 ;
 long FUNC_0 (int *,int *) ;

__attribute__((used)) static long FUNC_1(struct file *VAR_2, unsigned int VAR_3,
          unsigned long VAR_4)
{
 struct rpmsg_eptdev *VAR_5 = VAR_2->private_data;

 if (VAR_3 != VAR_1)
  return -VAR_0;

 return FUNC_0(&VAR_5->dev, ((void*)0));
}
