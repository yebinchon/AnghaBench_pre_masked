
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dev; } ;


 int FUNC_0 (struct dsa_switch*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_2(struct dsa_switch *VAR_0, int VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  FUNC_1(VAR_0->dev, "Port %d is not Broadcom tag capable\n",
    VAR_1);
 return VAR_2;
}
