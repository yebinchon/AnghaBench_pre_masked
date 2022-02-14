
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxp_spifi {int memory_mode; int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nxp_spifi*) ;

__attribute__((used)) static int FUNC_2(struct nxp_spifi *VAR_0)
{
 int VAR_1;

 if (!VAR_0->memory_mode)
  return 0;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_0->dev, "unable to enter command mode\n");
 else
  VAR_0->memory_mode = 0;

 return VAR_1;
}
