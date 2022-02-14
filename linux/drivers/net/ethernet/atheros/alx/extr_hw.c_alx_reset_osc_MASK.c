
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct alx_hw {int dummy; } ;


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
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct alx_hw*,int ) ;
 int FUNC_3 (struct alx_hw*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct alx_hw *VAR_11, u8 VAR_12)
{
 u32 VAR_13, VAR_14;


 VAR_13 = FUNC_2(VAR_11, VAR_1);
 FUNC_3(VAR_11, VAR_1,
   (VAR_13 & ~VAR_2) |
   VAR_3);




 VAR_13 = FUNC_2(VAR_11, VAR_0);
 if (VAR_12 >= VAR_10) {



  FUNC_0(VAR_13, VAR_6, VAR_7);

  VAR_13 &= ~VAR_4;
  FUNC_3(VAR_11, VAR_0, VAR_13);
  FUNC_3(VAR_11, VAR_0, VAR_13 | VAR_4);

  VAR_14 = FUNC_2(VAR_11, VAR_8);
  VAR_14 &= ~VAR_9;
  FUNC_3(VAR_11, VAR_8, VAR_14);
  FUNC_3(VAR_11, VAR_8, VAR_14 | VAR_9);
 } else {
  VAR_13 &= ~VAR_4;

  if (FUNC_1(VAR_12))
   VAR_13 &= ~VAR_5;

  FUNC_3(VAR_11, VAR_0, VAR_13 | VAR_4);
  FUNC_3(VAR_11, VAR_0, VAR_13);
 }

 FUNC_4(20);
}
