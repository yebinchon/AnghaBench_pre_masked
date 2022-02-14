
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl6040 {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct twl6040*,int) ;
 int FUNC_2 (struct twl6040*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct twl6040 *VAR_5 = VAR_4;
 u8 VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_1);
 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5->dev, "Thermal shutdown, powering-off");
  FUNC_1(VAR_5, 0);
 } else {
  FUNC_0(VAR_5->dev, "Leaving thermal shutdown, powering-on");
  FUNC_1(VAR_5, 1);
 }

 return VAR_0;
}
