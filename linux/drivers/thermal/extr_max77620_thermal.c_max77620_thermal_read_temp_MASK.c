
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_therm_info {int dev; int rmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_6, int *VAR_7)
{
 struct max77620_therm_info *VAR_8 = VAR_6;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_8->rmap, VAR_3, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_8->dev, "Failed to read STATLBT: %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_9 & VAR_1)
  *VAR_7 = VAR_5;
 else if (VAR_9 & VAR_0)
  *VAR_7 = VAR_4;
 else
  *VAR_7 = VAR_2;

 return 0;
}
