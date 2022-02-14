
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
 unsigned int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ,unsigned int) ;
 struct max310x_port* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4)
{
 struct max310x_port *VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (((VAR_6 & VAR_3) != VAR_1)) {
  FUNC_0(VAR_4,
   "%s ID 0x%02x does not match\n", VAR_5->devtype->name, VAR_6);
  return -VAR_0;
 }

 return 0;
}
