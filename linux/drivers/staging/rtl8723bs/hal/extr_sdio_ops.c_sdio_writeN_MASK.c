
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct intf_hdl {struct adapter* padapter; } ;
struct adapter {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {scalar_t__ bFwCurrentInPSMode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__*,int*) ;
 TYPE_1__* FUNC_1 (struct adapter*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (struct adapter*,int ,scalar_t__*) ;
 scalar_t__* FUNC_5 (int) ;
 int FUNC_6 (struct intf_hdl*,int,int,scalar_t__*) ;
 int FUNC_7 (struct intf_hdl*,int,int,scalar_t__*) ;
 int FUNC_8 (struct intf_hdl*,int,int,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_9(struct intf_hdl *VAR_2, u32 VAR_3, u32 VAR_4, u8 *VAR_5)
{
 struct adapter *VAR_6;
 u8 VAR_7;
 u8 VAR_8;
 u16 VAR_9;
 u32 VAR_10;
 u8 VAR_11;
 s32 VAR_12;

 VAR_6 = VAR_2->padapter;
 VAR_12 = 0;

 VAR_10 = FUNC_0(VAR_3, &VAR_8, &VAR_9);

 FUNC_4(VAR_6, VAR_0, &VAR_7);
 if (
  ((VAR_8 == VAR_1) && (VAR_9 < 0x100)) ||
  (!VAR_7) ||
  (FUNC_1(VAR_6)->bFwCurrentInPSMode)
 )
  return FUNC_6(VAR_2, VAR_10, VAR_4, VAR_5);

 VAR_11 = VAR_10 & 0x3;
 if (VAR_11 == 0) {
  VAR_12 = FUNC_8(VAR_2, VAR_10, VAR_4, VAR_5);
 } else {
  u8 *VAR_13;
  u32 VAR_14;

  VAR_10 &= ~(u16)0x3;
  VAR_14 = VAR_4 + VAR_11;
  VAR_13 = FUNC_5(VAR_14);
  if (!VAR_13)
   return -1;
  VAR_12 = FUNC_7(VAR_2, VAR_10, 4, VAR_13);
  if (VAR_12) {
   FUNC_2(VAR_13);
   return VAR_12;
  }
  FUNC_3(VAR_13 + VAR_11, VAR_5, VAR_4);
  VAR_12 = FUNC_8(VAR_2, VAR_10, VAR_14, VAR_13);
  FUNC_2(VAR_13);
 }
 return VAR_12;
}
