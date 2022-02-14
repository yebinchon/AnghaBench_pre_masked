
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cxl {struct cxl* native; } ;


 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (struct cxl*) ;
 int FUNC_2 (char*) ;
 struct cxl* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct cxl *VAR_1 = FUNC_3(VAR_0);

 FUNC_2("cxl_release_adapter\n");

 FUNC_0(VAR_1);

 FUNC_1(VAR_1->native);
 FUNC_1(VAR_1);
}
