
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int* low_water; int* high_water; int pause_time; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ixgbe_hw*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int VAR_9 ;

s32 FUNC_6(struct ixgbe_hw *VAR_10, u8 VAR_11)
{
 u32 VAR_12, VAR_13;
 u8 VAR_14;


 VAR_13 = FUNC_4(VAR_10, VAR_6);
 VAR_13 &= ~VAR_7;
 VAR_13 |= VAR_8;
 FUNC_5(VAR_10, VAR_6, VAR_13);


 VAR_13 = FUNC_4(VAR_10, VAR_3);
 VAR_13 &= ~(VAR_5 | VAR_4);

 if (VAR_11)
  VAR_13 |= VAR_5;

 FUNC_5(VAR_10, VAR_3, VAR_13);


 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  if (!(VAR_11 & FUNC_0(VAR_14))) {
   FUNC_5(VAR_10, FUNC_2(VAR_14), 0);
   FUNC_5(VAR_10, FUNC_1(VAR_14), 0);
   continue;
  }

  VAR_12 = (VAR_10->fc.low_water[VAR_14] << 10) | VAR_1;
  VAR_13 = (VAR_10->fc.high_water[VAR_14] << 10) | VAR_0;
  FUNC_5(VAR_10, FUNC_2(VAR_14), VAR_12);
  FUNC_5(VAR_10, FUNC_1(VAR_14), VAR_13);
 }


 VAR_13 = VAR_10->fc.pause_time * 0x00010001;
 for (VAR_14 = 0; VAR_14 < (VAR_9 / 2); VAR_14++)
  FUNC_5(VAR_10, FUNC_3(VAR_14), VAR_13);


 FUNC_5(VAR_10, VAR_2, VAR_10->fc.pause_time / 2);


 return 0;
}
