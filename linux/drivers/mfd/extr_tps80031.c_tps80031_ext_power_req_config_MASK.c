
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 int FUNC_3 (struct device*,int ,int,int ) ;
 int FUNC_4 (struct device*,int ,int,int,int ) ;

int FUNC_5(struct device *VAR_12,
  unsigned long VAR_13, int VAR_14,
  int VAR_15, int VAR_16)
{
 u8 VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19;

 if (!(VAR_13 & VAR_0))
  return 0;

 if (VAR_13 & VAR_5) {
  VAR_17 = VAR_2 + (VAR_14 >> 3);
  VAR_18 = 5;
 } else if (VAR_13 & VAR_6) {
  VAR_17 = VAR_3 + (VAR_14 >> 3);
  VAR_18 = 6;
 } else if (VAR_13 & VAR_7) {
  VAR_17 = VAR_4 + (VAR_14 >> 3);
  VAR_18 = 7;
 }


 VAR_19 = FUNC_3(VAR_12, VAR_8, VAR_17,
     FUNC_0(VAR_14 & 0x7));
 if (VAR_19 < 0) {
  FUNC_1(VAR_12, "reg 0x%02x setbit failed, err = %d\n",
    VAR_17, VAR_19);
  return VAR_19;
 }


 VAR_19 = FUNC_2(VAR_12, VAR_8,
   VAR_1, FUNC_0(VAR_18));
 if (VAR_19 < 0) {
  FUNC_1(VAR_12, "reg 0x%02x clrbit failed, err = %d\n",
   VAR_1, VAR_19);
  return VAR_19;
 }


 if (VAR_13 & (VAR_6 |
     VAR_7)) {
  VAR_19 = FUNC_4(VAR_12, VAR_8, VAR_15,
      0x0, VAR_9);
  if (VAR_19 < 0)
   FUNC_1(VAR_12, "reg 0x%02x update failed, err = %d\n",
    VAR_15, VAR_19);
 } else {
  VAR_19 = FUNC_4(VAR_12, VAR_8, VAR_16,
    VAR_11,
    VAR_10);
  if (VAR_19 < 0)
   FUNC_1(VAR_12, "reg 0x%02x update failed, err = %d\n",
    VAR_16, VAR_19);
 }
 return VAR_19;
}
