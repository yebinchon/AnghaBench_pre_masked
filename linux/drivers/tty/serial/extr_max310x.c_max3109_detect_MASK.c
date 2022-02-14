
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max310x_port {TYPE_1__* devtype; int regmap; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct device*,char*,int ,unsigned int) ;
 struct max310x_port* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7)
{
 struct max310x_port *VAR_8 = FUNC_1(VAR_7);
 unsigned int VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_8->regmap, VAR_4,
      VAR_3);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_8->regmap, VAR_5, &VAR_9);
 FUNC_3(VAR_8->regmap, VAR_4, VAR_2);
 if (((VAR_9 & VAR_6) != VAR_1)) {
  FUNC_0(VAR_7,
   "%s ID 0x%02x does not match\n", VAR_8->devtype->name, VAR_9);
  return -VAR_0;
 }

 return 0;
}
