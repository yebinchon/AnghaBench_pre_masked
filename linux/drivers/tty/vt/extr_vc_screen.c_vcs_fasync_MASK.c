
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcs_poll_data {int fasync; } ;
struct file {struct vcs_poll_data* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct file*,int,int *) ;
 struct vcs_poll_data* FUNC_1 (struct file*) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, struct file *VAR_2, int VAR_3)
{
 struct vcs_poll_data *VAR_4 = VAR_2->private_data;

 if (!VAR_4) {

  if (!VAR_3)
   return 0;
  VAR_4 = FUNC_1(VAR_2);
  if (!VAR_4)
   return -VAR_0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4->fasync);
}
