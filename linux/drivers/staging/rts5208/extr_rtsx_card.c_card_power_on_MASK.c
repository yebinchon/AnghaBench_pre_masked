
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtsx_chip {int pmos_pwr_on_interval; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct rtsx_chip *VAR_12, u8 VAR_13)
{
 int VAR_14;
 u8 VAR_15, VAR_16, VAR_17;

 if (FUNC_0(VAR_12, VAR_5) && (VAR_13 == VAR_1)) {
  VAR_15 = VAR_3;
  VAR_16 = VAR_2;
  VAR_17 = VAR_4;
 } else {
  VAR_15 = VAR_7;
  VAR_16 = VAR_6;
  VAR_17 = VAR_8;
 }

 FUNC_2(VAR_12);
 FUNC_1(VAR_12, VAR_11, VAR_0, VAR_15, VAR_16);

 VAR_14 = FUNC_3(VAR_12, 0, 100);
 if (VAR_14 != VAR_10)
  return VAR_9;

 FUNC_4(VAR_12->pmos_pwr_on_interval);

 FUNC_2(VAR_12);
 FUNC_1(VAR_12, VAR_11, VAR_0, VAR_15, VAR_17);

 VAR_14 = FUNC_3(VAR_12, 0, 100);
 if (VAR_14 != VAR_10)
  return VAR_9;

 return VAR_10;
}
