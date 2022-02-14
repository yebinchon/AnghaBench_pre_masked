
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms_info {int check_ms_flow; int ms_type; } ;
struct rtsx_chip {int card_wp; struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int ,int) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int,int ) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_13, int VAR_14)
{
 struct ms_info *VAR_15 = &VAR_13->ms_card;
 int VAR_16, VAR_17;
 u8 VAR_18;

 VAR_16 = FUNC_1(VAR_13, VAR_6, 6, VAR_10, 1);
 if (VAR_16 != VAR_9)
  return VAR_8;

 for (VAR_17 = 0; VAR_17 < VAR_2; VAR_17++) {
  VAR_16 = FUNC_2(VAR_13, VAR_3, VAR_7,
      6, VAR_4);
  if (VAR_16 == VAR_9)
   break;
 }
 if (VAR_17 == VAR_2)
  return VAR_8;

 VAR_16 = FUNC_4(VAR_13, VAR_5 + 2, &VAR_18);
 if (VAR_16)
  return VAR_16;

 FUNC_0(FUNC_3(VAR_13), "Type register: 0x%x\n", VAR_18);
 if (VAR_18 != 0x01) {
  if (VAR_18 != 0x02)
   VAR_15->check_ms_flow = 1;

  return VAR_8;
 }

 VAR_16 = FUNC_4(VAR_13, VAR_5 + 4, &VAR_18);
 if (VAR_16)
  return VAR_16;

 FUNC_0(FUNC_3(VAR_13), "Category register: 0x%x\n", VAR_18);
 if (VAR_18 != 0) {
  VAR_15->check_ms_flow = 1;
  return VAR_8;
 }

 VAR_16 = FUNC_4(VAR_13, VAR_5 + 5, &VAR_18);
 if (VAR_16)
  return VAR_16;

 FUNC_0(FUNC_3(VAR_13), "Class register: 0x%x\n", VAR_18);
 if (VAR_18 == 0) {
  VAR_16 = FUNC_4(VAR_13, VAR_5, &VAR_18);
  if (VAR_16)
   return VAR_16;

  if (VAR_18 & VAR_12)
   VAR_13->card_wp |= VAR_0;
  else
   VAR_13->card_wp &= ~VAR_0;

 } else if ((VAR_18 == 0x01) || (VAR_18 == 0x02) || (VAR_18 == 0x03)) {
  VAR_13->card_wp |= VAR_0;
 } else {
  VAR_15->check_ms_flow = 1;
  return VAR_8;
 }

 VAR_15->ms_type |= VAR_11;

 VAR_16 = FUNC_4(VAR_13, VAR_5 + 3, &VAR_18);
 if (VAR_16)
  return VAR_16;

 FUNC_0(FUNC_3(VAR_13), "IF Mode register: 0x%x\n", VAR_18);
 if (VAR_18 == 0) {
  VAR_15->ms_type &= 0x0F;
 } else if (VAR_18 == 7) {
  if (VAR_14)
   VAR_15->ms_type |= VAR_1;
  else
   VAR_15->ms_type &= 0x0F;

 } else {
  return VAR_8;
 }

 return VAR_9;
}
