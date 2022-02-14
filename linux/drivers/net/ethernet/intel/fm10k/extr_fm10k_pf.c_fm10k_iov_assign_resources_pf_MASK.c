
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int total_vfs; int num_vfs; int num_pools; } ;
struct TYPE_3__ {int default_vid; } ;
struct fm10k_hw {TYPE_2__ iov; TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_10 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (struct fm10k_hw*) ;
 int FUNC_13 (struct fm10k_hw*) ;
 int FUNC_14 (struct fm10k_hw*,int ) ;
 int FUNC_15 (struct fm10k_hw*,int) ;
 int FUNC_16 (struct fm10k_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_17(struct fm10k_hw *VAR_17, u16 VAR_18,
      u16 VAR_19)
{
 u16 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
 u32 VAR_26 = VAR_17->mac.default_vid << VAR_15;
 int VAR_27, VAR_28;


 if (VAR_19 > 64)
  return VAR_0;


 if ((VAR_18 > VAR_19) || (VAR_18 > VAR_17->iov.total_vfs))
  return VAR_0;


 VAR_17->iov.num_vfs = VAR_18;
 VAR_17->iov.num_pools = VAR_19;


 VAR_20 = (VAR_18 > 8) ? 32 : 256;
 VAR_21 = FUNC_12(VAR_17);
 VAR_22 = FUNC_13(VAR_17);


 VAR_23 = FUNC_14(VAR_17, 0);
 VAR_25 = 0;


 for (VAR_27 = 0; VAR_27 < VAR_18; VAR_27++) {
  FUNC_16(VAR_17, FUNC_7(VAR_27), 0);
  FUNC_16(VAR_17, FUNC_8(VAR_27), 0);
  FUNC_16(VAR_17, FUNC_6(VAR_27),
    VAR_9);
 }


 for (VAR_27 = VAR_16 * VAR_18; VAR_27--;)
  FUNC_16(VAR_17, FUNC_1(VAR_27), 0);


 FUNC_16(VAR_17, FUNC_2(0), ~0);
 FUNC_16(VAR_17, FUNC_2(1), ~0);


 for (VAR_27 = VAR_3; VAR_27 < VAR_23; VAR_27++) {
  FUNC_16(VAR_17, FUNC_10(VAR_27), 0);
  FUNC_16(VAR_17, FUNC_11(VAR_27), VAR_11 |
    VAR_13 | VAR_26);
  FUNC_16(VAR_17, FUNC_5(VAR_27), VAR_6);
 }




 for (VAR_27 = VAR_2 + 1; VAR_27 < VAR_1; VAR_27++) {
  if (!(VAR_27 & (VAR_22 - 1)))
   FUNC_16(VAR_17, FUNC_0(VAR_27), VAR_27 - VAR_22);
  else
   FUNC_16(VAR_17, FUNC_0(VAR_27), VAR_27 - 1);
 }


 FUNC_16(VAR_17, FUNC_0(0),
   FUNC_15(VAR_17, VAR_18 - 1));


 for (VAR_27 = 0; VAR_27 < VAR_18; VAR_27++) {

  VAR_24 = VAR_23;

  for (VAR_28 = 0; VAR_28 < VAR_21; VAR_28++, VAR_25++, VAR_23++) {

   FUNC_16(VAR_17, FUNC_10(VAR_23), 0);
   FUNC_16(VAR_17, FUNC_11(VAR_23),
     (VAR_27 << VAR_12) | VAR_27 |
     VAR_14 | VAR_26);
   FUNC_16(VAR_17, FUNC_4(VAR_23),
     VAR_5 |
     VAR_4);
   FUNC_16(VAR_17, FUNC_5(VAR_23),
     (VAR_27 << VAR_8) |
     VAR_7);


   FUNC_16(VAR_17, FUNC_9(VAR_25), VAR_23);
   FUNC_16(VAR_17, FUNC_3(VAR_25), VAR_23);
  }


  for (; VAR_28 < VAR_20; VAR_28++, VAR_25++) {
   FUNC_16(VAR_17, FUNC_9(VAR_25), VAR_24);
   FUNC_16(VAR_17, FUNC_3(VAR_25), VAR_24);
  }
 }


 while (VAR_25 < VAR_10) {
  FUNC_16(VAR_17, FUNC_9(VAR_25), 0);
  FUNC_16(VAR_17, FUNC_3(VAR_25), 0);
  VAR_25++;
 }

 return 0;
}
