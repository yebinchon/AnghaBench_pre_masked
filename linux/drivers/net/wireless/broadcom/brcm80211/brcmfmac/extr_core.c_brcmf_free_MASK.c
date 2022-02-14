
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_pub {int wiphy; int ops; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 struct brcmf_bus* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct device *VAR_0)
{
 struct brcmf_bus *VAR_1 = FUNC_0(VAR_0);
 struct brcmf_pub *VAR_2 = VAR_1->drvr;

 if (!VAR_2)
  return;

 VAR_1->drvr = ((void*)0);

 FUNC_1(VAR_2->ops);

 FUNC_2(VAR_2->wiphy);
}
