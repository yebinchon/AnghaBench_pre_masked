
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stmfx {int map; int dev; } ;


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
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(struct stmfx *VAR_9, u32 VAR_10)
{
 u32 VAR_11;
 u8 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_9->map, VAR_5, &VAR_11);
 if (VAR_13)
  return VAR_13;







 if (((VAR_10 & VAR_3) || (VAR_10 & VAR_4)) &&
     (VAR_11 & VAR_6)) {
  FUNC_0(VAR_9->dev, "ALTGPIO function already enabled\n");
  return -VAR_0;
 }


 if ((VAR_10 & VAR_2) &&
     (VAR_11 & VAR_8)) {
  FUNC_0(VAR_9->dev, "TS in use, aGPIO[3:0] unavailable\n");
  return -VAR_0;
 }


 if ((VAR_10 & VAR_1) &&
     (VAR_11 & VAR_7)) {
  FUNC_0(VAR_9->dev, "IDD in use, aGPIO[7:4] unavailable\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_3(VAR_10);

 return FUNC_2(VAR_9->map, VAR_5, VAR_12, VAR_12);
}
