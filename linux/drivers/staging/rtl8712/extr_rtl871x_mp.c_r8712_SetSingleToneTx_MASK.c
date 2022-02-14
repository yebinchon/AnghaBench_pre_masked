
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int antenna_tx; } ;
struct _adapter {TYPE_1__ mppriv; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (struct _adapter*,int ,int ,int ) ;
 int FUNC_2 (struct _adapter*,scalar_t__,int ,int ,int) ;

void FUNC_3(struct _adapter *VAR_10, u8 VAR_11)
{
 u8 VAR_12;

 switch (VAR_10->mppriv.antenna_tx) {
 case 128:
  VAR_12 = VAR_2;
  break;
 case 129:
 default:
  VAR_12 = VAR_1;
  break;
 }
 if (VAR_11) {
  FUNC_1(VAR_10, VAR_9, VAR_4, VAR_5);
  FUNC_1(VAR_10, VAR_9, VAR_7, VAR_5);
  FUNC_2(VAR_10, VAR_12, VAR_3, VAR_8,
      0xd4000);
  FUNC_0(100);

  FUNC_2(VAR_10, VAR_12, VAR_0, VAR_8, 0x2001f);
  FUNC_0(100);
 } else {
  FUNC_1(VAR_10, VAR_9, VAR_4, VAR_6);
  FUNC_1(VAR_10, VAR_9, VAR_7, VAR_6);
  FUNC_2(VAR_10, VAR_12, VAR_3, VAR_8,
      0x54000);
  FUNC_0(100);

  FUNC_2(VAR_10, VAR_12, VAR_0, VAR_8, 0x30000);
  FUNC_0(100);
 }
}
