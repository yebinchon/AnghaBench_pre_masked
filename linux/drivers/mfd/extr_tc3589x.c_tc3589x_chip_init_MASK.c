
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc3589x {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct tc3589x*,int ) ;
 int FUNC_3 (struct tc3589x*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct tc3589x *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_2(VAR_9, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = FUNC_2(VAR_9, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_10 != VAR_2) {
  FUNC_0(VAR_9->dev, "unknown manufacturer: %#x\n", VAR_10);
  return -VAR_0;
 }

 FUNC_1(VAR_9->dev, "manufacturer: %#x, version: %#x\n", VAR_10, VAR_11);






 VAR_12 = FUNC_3(VAR_9, VAR_3,
    VAR_6
    | VAR_5
    | VAR_4);
 if (VAR_12 < 0)
  return VAR_12;


 return FUNC_3(VAR_9, VAR_7, 0x1);
}
