
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl {int ev_async; } ;
struct file {struct mei_cl* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct file*,int,int *) ;
 int FUNC_1 (struct mei_cl*) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct file *VAR_2, int VAR_3)
{

 struct mei_cl *VAR_4 = VAR_2->private_data;

 if (!FUNC_1(VAR_4))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->ev_async);
}
