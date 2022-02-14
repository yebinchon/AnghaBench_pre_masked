
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq2415x_device {int dummy; } ;
typedef enum bq2415x_command { ____Placeholder_bq2415x_command } bq2415x_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;





 int VAR_24 ;
 int FUNC_0 (struct bq2415x_device*,int ,int ) ;
 int FUNC_1 (struct bq2415x_device*,int ,int ,int ) ;
 int FUNC_2 (struct bq2415x_device*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bq2415x_device *VAR_25,
    enum bq2415x_command VAR_26)
{
 int VAR_27;

 switch (VAR_26) {
 case 129:
  return FUNC_2(VAR_25, VAR_16,
    1, VAR_9);
 case 135:
  return FUNC_0(VAR_25, VAR_16,
    VAR_5);
 case 130:
  return FUNC_0(VAR_25, VAR_16,
    VAR_2);
 case 131:
  return FUNC_2(VAR_25, VAR_16, 1,
    VAR_2);
 case 132:
  return FUNC_2(VAR_25, VAR_16, 0,
    VAR_2);
 case 149:
  return FUNC_1(VAR_25, VAR_16,
    VAR_13, VAR_22);
 case 153:
  return FUNC_0(VAR_25, VAR_16,
    VAR_0);
 case 145:
  return FUNC_1(VAR_25, VAR_16,
   VAR_10, VAR_19);

 case 146:
  return FUNC_0(VAR_25, VAR_15,
    VAR_8);
 case 147:
  return FUNC_2(VAR_25, VAR_15,
    1, VAR_8);
 case 148:
  return FUNC_2(VAR_25, VAR_15,
    0, VAR_8);
 case 150:
  VAR_27 = FUNC_0(VAR_25, VAR_15,
   VAR_1);
  if (VAR_27 < 0)
   return VAR_27;
  return VAR_27 > 0 ? 0 : 1;
 case 151:
  return FUNC_2(VAR_25, VAR_15,
    0, VAR_1);
 case 152:
  return FUNC_2(VAR_25, VAR_15,
    1, VAR_1);
 case 142:
  return FUNC_0(VAR_25, VAR_15,
    VAR_3);
 case 143:
  return FUNC_2(VAR_25, VAR_15,
    1, VAR_3);
 case 144:
  return FUNC_2(VAR_25, VAR_15,
    0, VAR_3);
 case 154:
  return FUNC_0(VAR_25, VAR_15,
    VAR_4);
 case 155:
  return FUNC_2(VAR_25, VAR_15,
    1, VAR_4);
 case 156:
  return FUNC_2(VAR_25, VAR_15,
    0, VAR_4);

 case 139:
  return FUNC_0(VAR_25, VAR_18,
    VAR_7);
 case 141:
  return FUNC_2(VAR_25, VAR_18,
    1, VAR_7);
 case 140:
  return FUNC_2(VAR_25, VAR_18,
    0, VAR_7);
 case 136:
  return FUNC_0(VAR_25, VAR_18,
    VAR_6);
 case 137:
  return FUNC_2(VAR_25, VAR_18,
    1, VAR_6);
 case 138:
  return FUNC_2(VAR_25, VAR_18,
    0, VAR_6);

 case 128:
  return FUNC_1(VAR_25, VAR_17,
   VAR_14, VAR_23);
 case 134:
  return FUNC_1(VAR_25, VAR_17,
    VAR_11, VAR_20);
 case 133:
  return FUNC_1(VAR_25, VAR_17,
   VAR_12, VAR_21);
 }
 return -VAR_24;
}
