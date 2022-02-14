
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct tw5864_input {int std; int nr; int v4l2_std; struct tw5864_dev* root; } ;
struct tw5864_dev {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct tw5864_input* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1, v4l2_std_id VAR_2)
{
 struct tw5864_input *VAR_3 = FUNC_3(VAR_0);
 struct tw5864_dev *VAR_4 = VAR_3->root;

 VAR_3->v4l2_std = VAR_2;
 VAR_3->std = FUNC_1(VAR_2);
 FUNC_2(FUNC_0(VAR_3->nr), VAR_3->std);
 return 0;
}
