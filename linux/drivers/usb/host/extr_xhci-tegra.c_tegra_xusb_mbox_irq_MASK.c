
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tegra_xusb*,int ) ;
 int FUNC_2 (struct tegra_xusb*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct tegra_xusb *VAR_5 = VAR_4;
 u32 VAR_6;


 VAR_6 = FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_5, VAR_6, VAR_2);

 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5->dev, "controller firmware hang\n");

 return VAR_0;
}
