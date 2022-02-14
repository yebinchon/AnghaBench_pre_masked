
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6040 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct twl6040*,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct twl6040 *VAR_9)
{
 u8 VAR_10, VAR_11, VAR_12;
 int VAR_13;


 VAR_10 = VAR_0 | VAR_5 | VAR_4;
 VAR_13 = FUNC_1(VAR_9, VAR_6, VAR_10);
 if (VAR_13)
  return VAR_13;
 FUNC_2(10000, 10500);


 VAR_11 = VAR_3;
 VAR_13 = FUNC_1(VAR_9, VAR_8, VAR_11);
 if (VAR_13)
  goto ncp_err;
 FUNC_2(1000, 1500);


 VAR_10 |= VAR_2;
 VAR_13 = FUNC_1(VAR_9, VAR_6, VAR_10);
 if (VAR_13)
  goto lsldo_err;
 FUNC_2(1000, 1500);


 VAR_12 = VAR_1;
 VAR_13 = FUNC_1(VAR_9, VAR_7, VAR_12);
 if (VAR_13)
  goto lppll_err;
 FUNC_2(5000, 5500);


 VAR_10 &= ~VAR_4;
 VAR_13 = FUNC_1(VAR_9, VAR_6, VAR_10);
 if (VAR_13)
  goto osc_err;

 return 0;

osc_err:
 VAR_12 &= ~VAR_1;
 FUNC_1(VAR_9, VAR_7, VAR_12);
lppll_err:
 VAR_10 &= ~VAR_2;
 FUNC_1(VAR_9, VAR_6, VAR_10);
lsldo_err:
 VAR_11 &= ~VAR_3;
 FUNC_1(VAR_9, VAR_8, VAR_11);
ncp_err:
 VAR_10 &= ~(VAR_0 | VAR_5 | VAR_4);
 FUNC_1(VAR_9, VAR_6, VAR_10);

 FUNC_0(VAR_9->dev, "manual power-up failed\n");
 return VAR_13;
}
