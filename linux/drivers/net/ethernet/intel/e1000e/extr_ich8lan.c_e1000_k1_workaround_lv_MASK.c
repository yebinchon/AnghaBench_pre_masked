
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_11)
{
 s32 VAR_12 = 0;
 u16 VAR_13 = 0;

 if (VAR_11->mac.type != VAR_10)
  return 0;


 VAR_12 = FUNC_0(VAR_11, VAR_3, &VAR_13);
 if (VAR_12)
  return VAR_12;

 if ((VAR_13 & (VAR_5 | VAR_4))
     == (VAR_5 | VAR_4)) {
  if (VAR_13 &
      (VAR_7 | VAR_6)) {
   u16 VAR_14;


   VAR_12 = FUNC_0(VAR_11, VAR_8, &VAR_14);
   if (VAR_12)
    return VAR_12;
   VAR_14 &= ~VAR_9;
   VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_14);
   if (VAR_12)
    return VAR_12;
  } else {
   u32 VAR_15;

   VAR_15 = FUNC_2(VAR_2);
   VAR_15 &= ~VAR_1;
   VAR_15 |= VAR_0;
   FUNC_3(VAR_2, VAR_15);
  }
 }

 return VAR_12;
}
