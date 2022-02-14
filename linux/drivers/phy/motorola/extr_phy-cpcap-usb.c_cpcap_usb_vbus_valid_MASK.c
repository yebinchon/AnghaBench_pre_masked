
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_phy_ddata {int dev; int vbus; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static bool FUNC_2(struct cpcap_phy_ddata *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0->vbus, &VAR_2);
 if (VAR_1 >= 0)
  return VAR_2 > 3900 ? 1 : 0;

 FUNC_0(VAR_0->dev, "error reading VBUS: %i\n", VAR_1);

 return 0;
}
