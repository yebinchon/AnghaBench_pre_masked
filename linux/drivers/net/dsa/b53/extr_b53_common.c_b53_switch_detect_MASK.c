
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct b53_device {int chip_id; int core_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (struct b53_device*,int ,int ,int*) ;
 int FUNC_1 (struct b53_device*,int ,int ,int*) ;
 int FUNC_2 (struct b53_device*,int ,int ,int*) ;
 int FUNC_3 (struct b53_device*,int ,int ,int) ;
 int FUNC_4 (char*,int,int) ;

int FUNC_5(struct b53_device *VAR_10)
{
 u32 VAR_11;
 u16 VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_10, VAR_1, VAR_0, &VAR_13);
 if (VAR_14)
  return VAR_14;

 switch (VAR_13) {
 case 0:







  FUNC_3(VAR_10, VAR_5, VAR_6, 0xf);
  FUNC_0(VAR_10, VAR_5, VAR_6, &VAR_12);

  if (VAR_12 == 0xf)
   VAR_10->chip_id = VAR_7;
  else
   VAR_10->chip_id = VAR_8;
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_10->chip_id = VAR_13;
  break;
 default:
  VAR_14 = FUNC_1(VAR_10, VAR_1, VAR_0, &VAR_11);
  if (VAR_14)
   return VAR_14;

  switch (VAR_11) {
  case 134:
  case 133:
  case 132:
  case 139:
  case 138:
  case 137:
  case 136:
  case 135:
   VAR_10->chip_id = VAR_11;
   break;
  default:
   FUNC_4("unsupported switch detected (BCM53%02x/BCM%x)\n",
          VAR_13, VAR_11);
   return -VAR_9;
  }
 }

 if (VAR_10->chip_id == VAR_7)
  return FUNC_2(VAR_10, VAR_4, VAR_3,
     &VAR_10->core_rev);
 else
  return FUNC_2(VAR_10, VAR_1, VAR_2,
     &VAR_10->core_rev);
}
