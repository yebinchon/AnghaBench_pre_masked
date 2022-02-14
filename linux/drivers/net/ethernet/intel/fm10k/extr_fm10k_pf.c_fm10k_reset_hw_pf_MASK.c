
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int reset_while_pending; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_4 (struct fm10k_hw*,int ) ;
 int FUNC_5 (struct fm10k_hw*,int ) ;
 int FUNC_6 (struct fm10k_hw*) ;
 int FUNC_7 (struct fm10k_hw*,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static s32 FUNC_9(struct fm10k_hw *VAR_15)
{
 s32 VAR_16;
 u32 VAR_17;
 u16 VAR_18;


 FUNC_7(VAR_15, VAR_5, FUNC_0(VAR_0));


 FUNC_7(VAR_15, FUNC_1(0), 0);
 FUNC_7(VAR_15, VAR_9, 0);




 for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++) {
  FUNC_7(VAR_15, FUNC_3(VAR_18), 0);
  FUNC_7(VAR_15, FUNC_2(VAR_18), 0);
 }


 VAR_16 = FUNC_4(VAR_15, VAR_12);
 if (VAR_16 == VAR_7) {
  VAR_15->mac.reset_while_pending++;
  goto force_reset;
 } else if (VAR_16) {
  return VAR_16;
 }


 VAR_17 = FUNC_5(VAR_15, VAR_1);
 if (VAR_17 & (VAR_4 | VAR_3))
  return VAR_6;

force_reset:

 VAR_17 = VAR_2;
 FUNC_7(VAR_15, VAR_1, VAR_17);


 FUNC_6(VAR_15);
 FUNC_8(VAR_13);


 VAR_17 = FUNC_5(VAR_15, VAR_10);
 if (!(VAR_17 & VAR_11))
  return VAR_8;

 return 0;
}
