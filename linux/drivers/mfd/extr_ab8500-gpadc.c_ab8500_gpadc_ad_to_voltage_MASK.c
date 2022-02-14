
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ab8500_gpadc {int dev; TYPE_1__* cal_data; } ;
struct TYPE_2__ {int gain; int offset; } ;






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
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;



 int VAR_21 ;
 int VAR_22 ;

 int VAR_23 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(struct ab8500_gpadc *VAR_24, u8 VAR_25,
 int VAR_26)
{
 int VAR_27;

 switch (VAR_25) {
 case 132:

  if (!VAR_24->cal_data[VAR_19].gain) {
   VAR_27 = VAR_9 + (VAR_8 -
    VAR_9) * VAR_26 /
    VAR_20;
   break;
  }

  VAR_27 = (int) (VAR_26 * VAR_24->cal_data[VAR_19].gain +
   VAR_24->cal_data[VAR_19].offset) / VAR_21;
  break;

 case 128:
 case 139:
 case 137:
 case 143:
 case 141:
 case 140:

  if (!VAR_24->cal_data[VAR_16].gain) {
   VAR_27 = VAR_5 + (VAR_4 -
    VAR_5) * VAR_26 /
    VAR_20;
   break;
  }

  VAR_27 = (int) (VAR_26 * VAR_24->cal_data[VAR_16].gain +
   VAR_24->cal_data[VAR_16].offset) / VAR_21;
  break;

 case 134:
 case 130:

  if (!VAR_24->cal_data[VAR_18].gain) {
   VAR_27 = VAR_15 + (VAR_14 -
    VAR_15) * VAR_26 /
    VAR_20;
   break;
  }

  VAR_27 = (int) (VAR_26 * VAR_24->cal_data[VAR_18].gain +
   VAR_24->cal_data[VAR_18].offset) / VAR_21;
  break;

 case 136:
  VAR_27 = VAR_11 +
   (VAR_10 - VAR_11) * VAR_26 /
   VAR_20;
  break;

 case 142:
  VAR_27 = VAR_1 +
   (VAR_0 - VAR_1) * VAR_26 /
   VAR_20;
  break;

 case 129:
  VAR_27 = VAR_9 +
   (VAR_8 - VAR_9) * VAR_26 /
   VAR_20;
  break;

 case 133:
 case 131:
  VAR_27 = VAR_7 +
   (VAR_6 - VAR_7) * VAR_26 /
   VAR_20;
  break;

 case 138:
  VAR_27 = VAR_3 +
   (VAR_2 - VAR_3) * VAR_26 /
   VAR_20;
  break;

 case 135:

  if (!VAR_24->cal_data[VAR_17].gain) {
   VAR_27 = VAR_13 + (VAR_12 -
    VAR_13) * VAR_26 /
    VAR_20;
   break;
  }

  VAR_27 = (int) (VAR_26 * VAR_24->cal_data[VAR_17].gain +
    VAR_24->cal_data[VAR_17].offset)
    >> VAR_22;
  break;

 default:
  FUNC_0(VAR_24->dev,
   "unknown channel, not possible to convert\n");
  VAR_27 = -VAR_23;
  break;

 }
 return VAR_27;
}
