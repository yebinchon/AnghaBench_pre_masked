
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int *,char*) ;
 struct vpfe_device* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vpfe_device*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, unsigned int *VAR_3)
{
 struct vpfe_device *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(1, VAR_0, &VAR_4->v4l2_dev, "vpfe_g_input\n");

 return FUNC_2(VAR_4, VAR_3);
}
