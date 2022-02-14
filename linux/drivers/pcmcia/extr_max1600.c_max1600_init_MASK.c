
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1600 {unsigned int code; int * gpio; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;


 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char const*,int ) ;
 int FUNC_3 (struct device*,char const*,int ) ;
 struct max1600* FUNC_4 (struct device*,int,int ) ;
 char*** VAR_8 ;

int FUNC_5(struct device *VAR_9, struct max1600 **VAR_10,
 unsigned int VAR_11, unsigned int VAR_12)
{
 struct max1600 *VAR_13;
 int VAR_14;
 int VAR_15;

 switch (VAR_11) {
 case 129:
  VAR_14 = 0;
  break;
 case 128:
  VAR_14 = 1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_12 != VAR_5 && VAR_12 != VAR_4)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_9, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->dev = VAR_9;
 VAR_13->code = VAR_12;

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  const char *VAR_16;

  VAR_16 = VAR_8[VAR_14][VAR_15];
  if (VAR_15 != VAR_6) {
   VAR_13->gpio[VAR_15] = FUNC_2(VAR_9, VAR_16, VAR_3);
  } else {
   VAR_13->gpio[VAR_15] = FUNC_3(VAR_9, VAR_16,
            VAR_3);
   if (!VAR_13->gpio[VAR_15])
    break;
  }
  if (FUNC_0(VAR_13->gpio[VAR_15]))
   return FUNC_1(VAR_13->gpio[VAR_15]);
 }

 *VAR_10 = VAR_13;

 return 0;
}
