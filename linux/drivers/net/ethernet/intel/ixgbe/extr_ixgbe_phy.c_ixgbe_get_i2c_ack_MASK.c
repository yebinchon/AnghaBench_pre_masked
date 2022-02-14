
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,char*) ;
 int FUNC_7 (struct ixgbe_hw*,int*) ;
 int FUNC_8 (struct ixgbe_hw*,int*) ;
 int FUNC_9 (struct ixgbe_hw*,int*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static s32 FUNC_11(struct ixgbe_hw *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);
 s32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = FUNC_3(VAR_3, FUNC_0(VAR_3));
 u32 VAR_8 = 10;
 bool VAR_9 = 1;

 if (VAR_4) {
  VAR_7 |= FUNC_2(VAR_3);
  VAR_7 |= VAR_4;
  FUNC_5(VAR_3, FUNC_0(VAR_3), VAR_7);
  FUNC_4(VAR_3);
 }
 FUNC_9(VAR_3, &VAR_7);


 FUNC_10(VAR_1);



 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = FUNC_3(VAR_3, FUNC_0(VAR_3));
  VAR_9 = FUNC_7(VAR_3, &VAR_7);

  FUNC_10(1);
  if (VAR_9 == 0)
   break;
 }

 if (VAR_9 == 1) {
  FUNC_6(VAR_3, "I2C ack was not received.\n");
  VAR_5 = VAR_0;
 }

 FUNC_8(VAR_3, &VAR_7);


 FUNC_10(VAR_2);

 return VAR_5;
}
