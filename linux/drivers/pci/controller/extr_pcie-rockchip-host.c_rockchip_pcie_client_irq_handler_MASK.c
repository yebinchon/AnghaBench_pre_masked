
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rockchip_pcie*,int ) ;
 int FUNC_2 (struct rockchip_pcie*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_10, void *VAR_11)
{
 struct rockchip_pcie *VAR_12 = VAR_11;
 struct device *VAR_13 = VAR_12->dev;
 u32 VAR_14;

 VAR_14 = FUNC_1(VAR_12, VAR_9);
 if (VAR_14 & VAR_5)
  FUNC_0(VAR_13, "legacy done interrupt received\n");

 if (VAR_14 & VAR_6)
  FUNC_0(VAR_13, "message done interrupt received\n");

 if (VAR_14 & VAR_4)
  FUNC_0(VAR_13, "hot reset interrupt received\n");

 if (VAR_14 & VAR_2)
  FUNC_0(VAR_13, "dpa interrupt received\n");

 if (VAR_14 & VAR_3)
  FUNC_0(VAR_13, "fatal error interrupt received\n");

 if (VAR_14 & VAR_7)
  FUNC_0(VAR_13, "no fatal error interrupt received\n");

 if (VAR_14 & VAR_1)
  FUNC_0(VAR_13, "correctable error interrupt received\n");

 if (VAR_14 & VAR_8)
  FUNC_0(VAR_13, "phy interrupt received\n");

 FUNC_2(VAR_12, VAR_14 & (VAR_5 |
         VAR_6 | VAR_4 |
         VAR_2 | VAR_3 |
         VAR_7 |
         VAR_1 |
         VAR_8),
     VAR_9);

 return VAR_0;
}
