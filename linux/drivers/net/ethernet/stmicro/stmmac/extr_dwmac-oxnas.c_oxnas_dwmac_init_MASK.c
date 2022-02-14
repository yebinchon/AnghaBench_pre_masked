
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct oxnas_dwmac {int regmap; int clk; int dev; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int VAR_8 ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 int FUNC_9 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11, void *VAR_12)
{
 struct oxnas_dwmac *VAR_13 = VAR_12;
 unsigned int VAR_14;
 int VAR_15;


 VAR_15 = FUNC_7(VAR_13->dev);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_6(VAR_13->clk);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_8(VAR_13->regmap, VAR_9, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_5(VAR_13->clk);
  return VAR_15;
 }


 VAR_14 |= FUNC_0(VAR_1) |

   FUNC_0(VAR_8) |

   FUNC_0(VAR_0) |

   FUNC_0(VAR_7) |
   FUNC_0(VAR_5) |
   FUNC_0(VAR_6) |
   FUNC_0(VAR_4) |
   FUNC_0(VAR_2) |
   FUNC_0(VAR_3);
 FUNC_9(VAR_13->regmap, VAR_9, VAR_14);


 VAR_14 = FUNC_4(4) |
  FUNC_3(2) |
  FUNC_2(10) |
  FUNC_1(8);
 FUNC_9(VAR_13->regmap, VAR_10, VAR_14);

 return 0;
}
