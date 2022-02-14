
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rcar_pcie*,int ) ;
 int FUNC_5 (struct rcar_pcie*,int,int ) ;
 int FUNC_6 (struct rcar_pcie*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct rcar_pcie *VAR_13)
{
 struct device *VAR_14 = VAR_13->dev;
 unsigned int VAR_15 = 1000;
 u32 VAR_16;

 if ((FUNC_4(VAR_13, VAR_4) & VAR_0) != VAR_1)
  return;

 if (FUNC_4(VAR_13, VAR_3) & VAR_12) {
  FUNC_1(VAR_14, "Speed change already in progress\n");
  return;
 }

 VAR_16 = FUNC_4(VAR_13, VAR_5);
 if ((VAR_16 & VAR_0) == VAR_1)
  goto done;


 FUNC_6(VAR_13, FUNC_0(12), VAR_6,
     VAR_7);


 FUNC_6(VAR_13, VAR_2, VAR_11, 0);


 if (VAR_16 & (VAR_9 | VAR_10 | VAR_8))
  FUNC_5(VAR_13, VAR_16, VAR_5);


 FUNC_6(VAR_13, VAR_3, VAR_12, VAR_12);

 while (VAR_15--) {
  VAR_16 = FUNC_4(VAR_13, VAR_5);
  if (VAR_16 & VAR_9) {

   FUNC_5(VAR_13, VAR_16, VAR_5);

   if (VAR_16 & VAR_8)
    FUNC_1(VAR_14, "Speed change failed\n");

   goto done;
  }

  FUNC_3(1);
 }

 FUNC_1(VAR_14, "Speed change timed out\n");

done:
 FUNC_2(VAR_14, "Current link speed is %s GT/s\n",
   (VAR_16 & VAR_0) == VAR_1 ? "5" : "2.5");
}
