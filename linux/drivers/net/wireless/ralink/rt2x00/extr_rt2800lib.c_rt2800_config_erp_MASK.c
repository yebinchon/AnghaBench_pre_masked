
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_erp {int basic_rates; int slot_time; int eifs; int beacon_int; scalar_t__ cts_protection; int short_preamble; } ;
struct rt2x00_dev {int dummy; } ;


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
 int FUNC_0 (struct rt2x00_dev*,struct rt2x00lib_erp*) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int) ;
 int FUNC_3 (int*,int ,int) ;

void FUNC_4(struct rt2x00_dev *VAR_18, struct rt2x00lib_erp *VAR_19,
         u32 VAR_20)
{
 u32 VAR_21;

 if (VAR_20 & VAR_9) {
  VAR_21 = FUNC_1(VAR_18, VAR_0);
  FUNC_3(&VAR_21, VAR_1,
       !!VAR_19->short_preamble);
  FUNC_2(VAR_18, VAR_0, VAR_21);
 }

 if (VAR_20 & VAR_8) {
  VAR_21 = FUNC_1(VAR_18, VAR_14);
  FUNC_3(&VAR_21, VAR_15,
       VAR_19->cts_protection ? 2 : 0);
  FUNC_2(VAR_18, VAR_14, VAR_21);
 }

 if (VAR_20 & VAR_6) {
  FUNC_2(VAR_18, VAR_13,
          0xff0 | VAR_19->basic_rates);
  FUNC_2(VAR_18, VAR_12, 0x00008003);
 }

 if (VAR_20 & VAR_10) {
  VAR_21 = FUNC_1(VAR_18, VAR_4);
  FUNC_3(&VAR_21, VAR_5,
       VAR_19->slot_time);
  FUNC_2(VAR_18, VAR_4, VAR_21);

  VAR_21 = FUNC_1(VAR_18, VAR_16);
  FUNC_3(&VAR_21, VAR_17, VAR_19->eifs);
  FUNC_2(VAR_18, VAR_16, VAR_21);
 }

 if (VAR_20 & VAR_7) {
  VAR_21 = FUNC_1(VAR_18, VAR_2);
  FUNC_3(&VAR_21, VAR_3,
       VAR_19->beacon_int * 16);
  FUNC_2(VAR_18, VAR_2, VAR_21);
 }

 if (VAR_20 & VAR_11)
  FUNC_0(VAR_18, VAR_19);
}
