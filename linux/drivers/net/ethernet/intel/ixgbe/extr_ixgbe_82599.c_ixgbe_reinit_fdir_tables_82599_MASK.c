
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int*) ;
 int FUNC_5 (int,int) ;

s32 FUNC_6(struct ixgbe_hw *VAR_13)
{
 int VAR_14;
 u32 VAR_15 = FUNC_0(VAR_13, VAR_3);
 u32 VAR_16;
 s32 VAR_17;

 VAR_15 &= ~VAR_4;





 VAR_17 = FUNC_4(VAR_13, &VAR_16);
 if (VAR_17) {
  FUNC_3(VAR_13, "Flow Director previous command did not complete, aborting table re-initialization.\n");
  return VAR_17;
 }

 FUNC_2(VAR_13, VAR_5, 0);
 FUNC_1(VAR_13);







 FUNC_2(VAR_13, VAR_1,
   (FUNC_0(VAR_13, VAR_1) |
    VAR_2));
 FUNC_1(VAR_13);
 FUNC_2(VAR_13, VAR_1,
   (FUNC_0(VAR_13, VAR_1) &
    ~VAR_2));
 FUNC_1(VAR_13);




 FUNC_2(VAR_13, VAR_7, 0x00);
 FUNC_1(VAR_13);

 FUNC_2(VAR_13, VAR_3, VAR_15);
 FUNC_1(VAR_13);


 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  if (FUNC_0(VAR_13, VAR_3) &
       VAR_4)
   break;
  FUNC_5(1000, 2000);
 }
 if (VAR_14 >= VAR_12) {
  FUNC_3(VAR_13, "Flow Director Signature poll time exceeded!\n");
  return VAR_0;
 }


 FUNC_0(VAR_13, VAR_11);
 FUNC_0(VAR_13, VAR_6);
 FUNC_0(VAR_13, VAR_9);
 FUNC_0(VAR_13, VAR_10);
 FUNC_0(VAR_13, VAR_8);

 return 0;
}
