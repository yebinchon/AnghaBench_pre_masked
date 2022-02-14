
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct sd {int* sensor_reg_cache; int bridge; } ;
 int FUNC_0 (struct sd*,size_t) ;
 int FUNC_1 (struct sd*,size_t) ;
 int FUNC_2 (struct sd*,size_t) ;
 int FUNC_3 (struct sd*,size_t) ;

__attribute__((used)) static int FUNC_4(struct sd *VAR_0, u8 VAR_1)
{
 int VAR_2 = -1;

 if (VAR_0->sensor_reg_cache[VAR_1] != -1)
  return VAR_0->sensor_reg_cache[VAR_1];

 switch (VAR_0->bridge) {
 case 134:
 case 133:
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  break;
 case 132:
 case 131:
 case 130:
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  break;
 case 129:
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  break;
 }

 if (VAR_2 >= 0)
  VAR_0->sensor_reg_cache[VAR_1] = VAR_2;

 return VAR_2;
}
