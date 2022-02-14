
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct max17042_chip {int battery; TYPE_1__* client; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct max17042_chip*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct max17042_chip *VAR_6 = VAR_5;
 u32 VAR_7;

 FUNC_3(VAR_6->regmap, VAR_1, &VAR_7);
 if ((VAR_7 & VAR_3) ||
  (VAR_7 & VAR_2)) {
  FUNC_0(&VAR_6->client->dev, "SOC threshold INTR\n");
  FUNC_1(VAR_6, 1);
 }

 FUNC_2(VAR_6->battery);
 return VAR_0;
}
