
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
 int FUNC_0 (struct device*,unsigned int) ;

__attribute__((used)) static bool
FUNC_1(struct device *VAR_0, unsigned int VAR_1)
{
 bool VAR_2;


 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;


 switch (VAR_1) {
 case 132:
 case 138:
 case 137:
 case 136:
 case 135:
 case 130:
 case 129:
 case 128:
 case 131:
 case 134:
 case 133:
  return 1;
 default:
  return 0;
 }
}
