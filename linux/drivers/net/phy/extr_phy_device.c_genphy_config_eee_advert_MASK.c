
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int eee_broken_modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,int ,int ,int ,int ) ;

int FUNC_1(struct phy_device *VAR_2)
{
 int VAR_3;


 if (!VAR_2->eee_broken_modes)
  return 0;

 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0,
         VAR_2->eee_broken_modes, 0);

 return VAR_3 < 0 ? 0 : VAR_3;
}
