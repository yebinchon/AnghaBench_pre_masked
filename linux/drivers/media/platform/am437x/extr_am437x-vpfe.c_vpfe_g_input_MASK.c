
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpfe_device {int dummy; } ;
struct file {int dummy; } ;


 struct vpfe_device* FUNC_0 (struct file*) ;
 int FUNC_1 (int,struct vpfe_device*,char*) ;
 int FUNC_2 (struct vpfe_device*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1, unsigned int *VAR_2)
{
 struct vpfe_device *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(2, VAR_3, "vpfe_g_input\n");

 return FUNC_2(VAR_3, VAR_2);
}
