
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int code; int width; int height; } ;
struct mt9v111_dev {scalar_t__ sysclk; int ctrls; TYPE_1__ fmt; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 unsigned int VAR_0 ;




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
 unsigned int FUNC_1 (struct mt9v111_dev*) ;
 unsigned int FUNC_2 (struct mt9v111_dev*) ;
 unsigned int FUNC_3 (struct i2c_client*,int ,int ,int ,int) ;
 int FUNC_4 (struct i2c_client*,int ,int ,int) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mt9v111_dev *VAR_20)
{
 struct i2c_client *VAR_21 = VAR_20->client;
 unsigned int VAR_22;
 u16 VAR_23;


 VAR_22 = FUNC_1(VAR_20);
 if (VAR_22 == -VAR_0)
  VAR_22 = FUNC_2(VAR_20);
 if (VAR_22)
  return VAR_22;


 VAR_22 = VAR_20->sysclk < FUNC_0(VAR_15, 2) ?
    FUNC_3(VAR_21, VAR_18,
     VAR_1,
     VAR_2, 1) :
    FUNC_3(VAR_21, VAR_18,
     VAR_1,
     VAR_2, 0);
 if (VAR_22)
  return VAR_22;







 switch (VAR_20->fmt.code) {
 case 129:
   VAR_23 = VAR_8;
   break;
 case 130:
   VAR_23 = VAR_6;
   break;
 case 128:
   VAR_23 = VAR_8 |
          VAR_6;
   break;
 case 131:
 default:
   VAR_23 = 0;
   break;
 }

 VAR_22 = FUNC_3(VAR_21, VAR_19, VAR_5,
        VAR_7,
        VAR_23);
 if (VAR_22)
  return VAR_22;
 VAR_22 = FUNC_4(VAR_21, VAR_19, VAR_9,
       VAR_4);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_4(VAR_21, VAR_19, VAR_12,
       VAR_4);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_4(VAR_21, VAR_19, VAR_10,
       VAR_4 |
       VAR_17);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_4(VAR_21, VAR_19, VAR_13,
       VAR_4 |
       VAR_16);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_4(VAR_21, VAR_19, VAR_11,
       VAR_4 |
       VAR_20->fmt.width);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_4(VAR_21, VAR_19, VAR_14,
       VAR_20->fmt.height);
 if (VAR_22)
  return VAR_22;


 VAR_22 = FUNC_5(&VAR_20->ctrls);
 if (VAR_22)
  return VAR_22;







 return FUNC_4(VAR_21, VAR_18, VAR_3,
        VAR_16);
}
