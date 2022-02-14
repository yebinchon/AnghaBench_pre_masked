
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct device {int dummy; } ;
struct TYPE_2__ {unsigned int ds_pos_bit; int reg_add; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,int,int*) ;
 int FUNC_3 (struct device*,int,int) ;
 int FUNC_4 (struct device*,int,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6,
 int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 uint8_t VAR_11 = 0;
 unsigned int VAR_12;
 unsigned int VAR_13;

 if (VAR_7 == VAR_1) {
  FUNC_1(VAR_6, "PWRREQ1 is invalid control for rail %d\n", VAR_7);
  return -VAR_0;
 }

 VAR_12 = VAR_5[VAR_7].ds_pos_bit;
 VAR_13 = VAR_12 + 1;
 VAR_10 = FUNC_2(VAR_6, VAR_5[VAR_7].reg_add, &VAR_11);
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, "Error in reading reg 0x%x\n",
    VAR_5[VAR_7].reg_add);
  return VAR_10;
 }

 VAR_11 &= ~(0xF << VAR_12);
 VAR_11 |= FUNC_0(VAR_12);
 VAR_11 |= ((VAR_9 & 0x7) << VAR_13);
 VAR_10 = FUNC_3(VAR_6, VAR_3, FUNC_0(1));
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, "Error in updating the 0x%02x register\n",
    VAR_3);
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_6, VAR_5[VAR_7].reg_add, VAR_11);
 if (VAR_10 < 0) {
  FUNC_1(VAR_6, "Error in writing reg 0x%x\n",
    VAR_5[VAR_7].reg_add);
  return VAR_10;
 }

 if (VAR_7 == VAR_2) {
  VAR_10 = FUNC_4(VAR_6, VAR_4, 0x1);
  if (VAR_10 < 0)
   FUNC_1(VAR_6, "Error in writing reg 0x%x\n",
    VAR_4);
 }
 return VAR_10;
}
