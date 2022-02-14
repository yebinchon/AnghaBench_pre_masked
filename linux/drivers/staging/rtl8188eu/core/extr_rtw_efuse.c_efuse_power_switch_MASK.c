
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,scalar_t__) ;
 int FUNC_2 (struct adapter*,int ,int) ;
 int FUNC_3 (struct adapter*,scalar_t__,int) ;

void FUNC_4(struct adapter *VAR_12, u8 VAR_13, u8 VAR_14)
{
 u8 VAR_15;
 u16 VAR_16;

 if (VAR_14) {
  FUNC_3(VAR_12, VAR_7, VAR_2);


  VAR_16 = FUNC_0(VAR_12, VAR_10);
  if (!(VAR_16 & VAR_6)) {
   VAR_16 |= VAR_6;
   FUNC_2(VAR_12, VAR_10, VAR_16);
  }

  VAR_16 = FUNC_0(VAR_12, VAR_9);
  if (!(VAR_16 & VAR_4)) {
   VAR_16 |= VAR_4;
   FUNC_2(VAR_12, VAR_9, VAR_16);
  }


  VAR_16 = FUNC_0(VAR_12, VAR_8);
  if ((!(VAR_16 & VAR_5)) || (!(VAR_16 & VAR_0))) {
   VAR_16 |= (VAR_5 | VAR_0);
   FUNC_2(VAR_12, VAR_8, VAR_16);
  }

  if (VAR_13) {

   VAR_15 = FUNC_1(VAR_12, VAR_3 + 3);
   VAR_15 &= 0x0F;
   VAR_15 |= (VAR_11 << 4);
   FUNC_3(VAR_12, VAR_3 + 3, (VAR_15 | 0x80));
  }
 } else {
  FUNC_3(VAR_12, VAR_7, VAR_1);

  if (VAR_13) {

   VAR_15 = FUNC_1(VAR_12, VAR_3 + 3);
   FUNC_3(VAR_12, VAR_3 + 3, (VAR_15 & 0x7F));
  }
 }
}
