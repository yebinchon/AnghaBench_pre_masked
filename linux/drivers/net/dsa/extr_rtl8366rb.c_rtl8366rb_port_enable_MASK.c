
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int map; int dev; } ;
struct phy_device {int dummy; } ;
struct dsa_switch {struct realtek_smi* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct realtek_smi*,int,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct dsa_switch *VAR_1, int VAR_2,
        struct phy_device *VAR_3)
{
 struct realtek_smi *VAR_4 = VAR_1->priv;
 int VAR_5;

 FUNC_1(VAR_4->dev, "enable port %d\n", VAR_2);
 VAR_5 = FUNC_3(VAR_4->map, VAR_0, FUNC_0(VAR_2),
     0);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_4, VAR_2, 1);
 return 0;
}
