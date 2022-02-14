
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
typedef scalar_t__ s32 ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ bFwCurrentInPSMode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__*,int*) ;
 TYPE_1__* FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct adapter*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct intf_hdl*,int,int,scalar_t__*) ;
 int FUNC_5 (struct intf_hdl*,int,int,scalar_t__*) ;

__attribute__((used)) static s32 FUNC_6(struct intf_hdl *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct adapter *VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 u16 VAR_8;
 u32 VAR_9;
 u8 VAR_10;
 s32 VAR_11;
 __le32 VAR_12;

 VAR_5 = VAR_2->padapter;
 VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_3, &VAR_7, &VAR_8);

 FUNC_3(VAR_5, VAR_0, &VAR_6);
 if (
  ((VAR_7 == VAR_1) && (VAR_8 < 0x100)) ||
  (!VAR_6) ||
  (FUNC_1(VAR_5)->bFwCurrentInPSMode)
 ) {
  VAR_12 = FUNC_2(VAR_4);

  return FUNC_4(VAR_2, VAR_9, 4, (u8 *)&VAR_12);
 }


 VAR_10 = VAR_9 & 0x3;
 if (VAR_10 == 0) {
  FUNC_5(VAR_2, VAR_9, VAR_4, &VAR_11);
 } else {
  VAR_12 = FUNC_2(VAR_4);
  VAR_11 = FUNC_4(VAR_2, VAR_9, 4, (u8 *)&VAR_12);
 }
 return VAR_11;
}
