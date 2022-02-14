
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct go7007 {int std; int vidq; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct go7007*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct go7007* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, v4l2_std_id VAR_3)
{
 struct go7007 *VAR_4 = FUNC_2(VAR_1);

 if (FUNC_1(&VAR_4->vidq))
  return -VAR_0;

 VAR_4->std = VAR_3;

 return FUNC_0(VAR_4);
}
