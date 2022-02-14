
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int channel; } ;
struct rt2x00lib_conf {TYPE_1__ rf; } ;
struct rt2x00_dev {short lna_gain; } ;


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
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 short FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_12,
       struct rt2x00lib_conf *VAR_13)
{
 u16 VAR_14;
 short VAR_15;

 if (VAR_13->rf.channel <= 14) {
  VAR_14 = FUNC_0(VAR_12, VAR_3);
  VAR_15 = FUNC_1(VAR_14, VAR_5);
 } else if (VAR_13->rf.channel <= 64) {
  VAR_14 = FUNC_0(VAR_12, VAR_3);
  VAR_15 = FUNC_1(VAR_14, VAR_4);
 } else if (VAR_13->rf.channel <= 128) {
  if (FUNC_2(VAR_12, VAR_10) ||
      FUNC_2(VAR_12, VAR_11)) {
   VAR_14 = FUNC_0(VAR_12, VAR_0);
   VAR_15 = FUNC_1(VAR_14,
            VAR_1);
  } else {
   VAR_14 = FUNC_0(VAR_12, VAR_8);
   VAR_15 = FUNC_1(VAR_14,
            VAR_9);
  }
 } else {
  if (FUNC_2(VAR_12, VAR_10) ||
      FUNC_2(VAR_12, VAR_11)) {
   VAR_14 = FUNC_0(VAR_12, VAR_0);
   VAR_15 = FUNC_1(VAR_14,
            VAR_2);
  } else {
   VAR_14 = FUNC_0(VAR_12, VAR_6);
   VAR_15 = FUNC_1(VAR_14,
            VAR_7);
  }
 }

 VAR_12->lna_gain = VAR_15;
}
