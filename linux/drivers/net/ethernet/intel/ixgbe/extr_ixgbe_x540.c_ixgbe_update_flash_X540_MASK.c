
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {scalar_t__ revision_id; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_3)
{
 u32 VAR_4;
 s32 VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 == VAR_2) {
  FUNC_3(VAR_3, "Flash update time out\n");
  return VAR_5;
 }

 VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_3)) | VAR_0;
 FUNC_2(VAR_3, FUNC_0(VAR_3), VAR_4);

 VAR_5 = FUNC_4(VAR_3);
 if (VAR_5 == 0)
  FUNC_3(VAR_3, "Flash update complete\n");
 else
  FUNC_3(VAR_3, "Flash update time out\n");

 if (VAR_3->revision_id == 0) {
  VAR_4 = FUNC_1(VAR_3, FUNC_0(VAR_3));

  if (VAR_4 & VAR_1) {
   VAR_4 |= VAR_0;
   FUNC_2(VAR_3, FUNC_0(VAR_3), VAR_4);
  }

  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5 == 0)
   FUNC_3(VAR_3, "Flash update complete\n");
  else
   FUNC_3(VAR_3, "Flash update time out\n");
 }

 return VAR_5;
}
