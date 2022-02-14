
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int v4l2_dev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*,void*) ;
 struct go7007* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3)
{
 struct go7007 *VAR_4 = FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_3);
 return FUNC_0(&VAR_4->v4l2_dev, VAR_0, VAR_1);
}
