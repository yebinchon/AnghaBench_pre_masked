
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ mdic_wa_enable; } ;
struct TYPE_4__ {TYPE_1__ e80003es2lan; } ;
struct e1000_hw {TYPE_2__ dev_spec; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_6,
         u32 VAR_7, u16 VAR_8)
{
 s32 VAR_9;
 u32 VAR_10;
 u16 VAR_11;

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_9)
  return VAR_9;


 if ((VAR_7 & VAR_5) < VAR_1) {
  VAR_10 = VAR_3;
 } else {



  VAR_10 = VAR_4;
 }

 VAR_11 = (u16)((u16)VAR_7 >> VAR_2);
 VAR_9 = FUNC_3(VAR_6, VAR_10, VAR_11);
 if (VAR_9) {
  FUNC_1(VAR_6);
  return VAR_9;
 }

 if (VAR_6->dev_spec.e80003es2lan.mdic_wa_enable) {




  FUNC_4(200, 400);


  VAR_9 = FUNC_2(VAR_6, VAR_10, &VAR_11);

  if (((u16)VAR_7 >> VAR_2) != VAR_11) {
   FUNC_1(VAR_6);
   return -VAR_0;
  }

  FUNC_4(200, 400);

  VAR_9 = FUNC_3(VAR_6,
          VAR_5 &
          VAR_7, VAR_8);

  FUNC_4(200, 400);
 } else {
  VAR_9 = FUNC_3(VAR_6,
          VAR_5 &
          VAR_7, VAR_8);
 }

 FUNC_1(VAR_6);

 return VAR_9;
}
