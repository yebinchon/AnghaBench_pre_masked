
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_device {int dummy; } ;
typedef enum ipipeif_input_entity { ____Placeholder_ipipeif_input_entity } ipipeif_input_entity ;




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
 int FUNC_0 (struct iss_device*,int ,int ) ;
 int FUNC_1 (struct iss_device*,int ,int ,int) ;

void FUNC_2(struct iss_device *VAR_12,
          enum ipipeif_input_entity VAR_13)
{
 u32 VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_0(VAR_12, VAR_11, VAR_4);
 VAR_14 &= ~VAR_8;
 VAR_14 &= ~VAR_5;

 VAR_15 = FUNC_0(VAR_12, VAR_10, VAR_0);

 switch (VAR_13) {
 case 129:
  VAR_14 |= VAR_6;
  break;

 case 128:
  VAR_14 |= VAR_7;
  break;

 default:
  return;
 }

 VAR_14 |= VAR_9;

 VAR_15 |= VAR_3 | VAR_1 |
   VAR_2;

 FUNC_1(VAR_12, VAR_11, VAR_4, VAR_14);
 FUNC_1(VAR_12, VAR_10, VAR_0, VAR_15);
}
