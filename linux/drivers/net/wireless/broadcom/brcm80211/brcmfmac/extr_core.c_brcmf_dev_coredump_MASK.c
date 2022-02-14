
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct brcmf_bus*,int *,int ) ;
 struct brcmf_bus* FUNC_2 (struct device*) ;

void FUNC_3(struct device *VAR_1)
{
 struct brcmf_bus *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_2, ((void*)0), 0) < 0)
  FUNC_0(VAR_0, "failed to create coredump\n");
}
