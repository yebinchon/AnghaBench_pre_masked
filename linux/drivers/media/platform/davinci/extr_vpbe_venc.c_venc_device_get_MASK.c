
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venc_state {int dummy; } ;
struct platform_device {int name; } ;
struct device {int dummy; } ;


 struct venc_state* FUNC_0 (struct platform_device*) ;
 int * FUNC_1 (int ,char*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_2(VAR_0);
 struct venc_state **VAR_3 = VAR_1;

 if (FUNC_1(VAR_2->name, "vpbe-venc") != ((void*)0))
  *VAR_3 = FUNC_0(VAR_2);

 return 0;
}
