
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_8)
{
 s32 VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11, VAR_12, VAR_13;


 VAR_13 = FUNC_0(VAR_8, VAR_3);
 if (VAR_13 & VAR_4) {
  VAR_13 &= ~VAR_4;
  FUNC_2(VAR_8, VAR_3, VAR_13);
  FUNC_1(VAR_8);
 }

 VAR_12 = FUNC_0(VAR_8, VAR_2);
 VAR_12 |= VAR_5;


 FUNC_2(VAR_8, VAR_2,
   VAR_12 ^ (0x4 << VAR_6));


 for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
  FUNC_4(4000, 8000);
  VAR_10 = FUNC_0(VAR_8, VAR_0);
  if (VAR_10 & VAR_1)
   break;
 }

 if (!(VAR_10 & VAR_1)) {
  FUNC_3(VAR_8, "auto negotiation not completed\n");
  VAR_9 = VAR_7;
  goto reset_pipeline_out;
 }

 VAR_9 = 0;

reset_pipeline_out:

 FUNC_2(VAR_8, VAR_2, VAR_12);
 FUNC_1(VAR_8);

 return VAR_9;
}
