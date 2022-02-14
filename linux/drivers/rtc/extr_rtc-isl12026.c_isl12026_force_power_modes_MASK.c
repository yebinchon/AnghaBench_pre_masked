
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int ,char*,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_3)
{
 int VAR_4;
 int VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 bool VAR_9, VAR_10;






 VAR_4 = FUNC_4(VAR_3->dev.of_node,
       "isil,pwr-bsw", &VAR_7);
 VAR_9 = (VAR_4 == 0);

 VAR_4 = FUNC_4(VAR_3->dev.of_node,
       "isil,pwr-sbib", &VAR_8);
 VAR_10 = (VAR_4 == 0);


 if (!VAR_9 && !VAR_10)
  return;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_3->dev, "Error: Failed to read PWR %d\n", VAR_5);
  return;
 }

 VAR_6 = VAR_5;

 if (VAR_9) {
  if (VAR_7)
   VAR_6 |= VAR_1;
  else
   VAR_6 &= ~VAR_1;
 }

 if (VAR_10) {
  if (VAR_8)
   VAR_6 |= VAR_2;
  else
   VAR_6 &= ~VAR_2;
 }

 if (VAR_5 >= 0 && VAR_5 != VAR_6) {
  FUNC_0(&VAR_3->dev, "PWR: %02x\n", VAR_5);
  FUNC_0(&VAR_3->dev, "Updating PWR to: %02x\n", VAR_6);
  FUNC_3(VAR_3, VAR_0, VAR_6);
 }
}
