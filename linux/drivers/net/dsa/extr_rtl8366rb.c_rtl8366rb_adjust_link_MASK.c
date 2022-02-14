
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int cpu_port; int map; int dev; } ;
struct phy_device {int dummy; } ;
struct dsa_switch {struct realtek_smi* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_4, int VAR_5,
      struct phy_device *VAR_6)
{
 struct realtek_smi *VAR_7 = VAR_4->priv;
 int VAR_8;

 if (VAR_5 != VAR_7->cpu_port)
  return;

 FUNC_1(VAR_7->dev, "adjust link on CPU port (%d)\n", VAR_5);


 VAR_8 = FUNC_2(VAR_7->map, VAR_0,
     FUNC_0(VAR_5), FUNC_0(VAR_5));
 if (VAR_8)
  return;

 VAR_8 = FUNC_2(VAR_7->map, VAR_1,
     0xFF00U,
     VAR_2 << 8);
 if (VAR_8)
  return;


 VAR_8 = FUNC_2(VAR_7->map, VAR_3, FUNC_0(VAR_5),
     0);
 if (VAR_8)
  return;
}
