
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_dev {scalar_t__ type; int nr_chans; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct solo_dev*) ;
 int VAR_3 ;
 int FUNC_5 (struct solo_dev*) ;
 int FUNC_6 (struct solo_dev*) ;
 int FUNC_7 (struct solo_dev*) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int VAR_11 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_18 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_19(struct solo_dev *VAR_16)
{
 int VAR_17;
 u32 VAR_18;

 FUNC_18(VAR_16, VAR_5,
         FUNC_14(VAR_0) |
         FUNC_9(FUNC_7(VAR_16) >> 16) |
         FUNC_8(FUNC_6(VAR_16) >> 16));


 VAR_18 = FUNC_10(2) | VAR_10
  | FUNC_16(0);
 if (VAR_16->type != VAR_1) {
  VAR_18 |= FUNC_17(
   (FUNC_7(VAR_16) >> 24) & 0x0f);
  VAR_18 |= FUNC_15(
   (FUNC_5(VAR_16) >> 24) & 0x0f);
 }
 FUNC_18(VAR_16, VAR_6, VAR_18);

 FUNC_18(VAR_16, VAR_14, 0);
 FUNC_18(VAR_16, VAR_12, 0);
 FUNC_18(VAR_16, VAR_15, 0);
 if (VAR_16->type == VAR_2)
  FUNC_18(VAR_16, VAR_13, 0);
 FUNC_18(VAR_16, VAR_9, 0);
 FUNC_18(VAR_16, VAR_8, 0);

 FUNC_18(VAR_16, VAR_4,
         VAR_11 |
         FUNC_0(1) |
         FUNC_1(0) |
         FUNC_2(15) |
         FUNC_3(VAR_16->type == VAR_1 ? 9 : 10));

 for (VAR_17 = 0; VAR_17 < VAR_16->nr_chans; VAR_17++) {
  FUNC_18(VAR_16, FUNC_12(VAR_17),
          (FUNC_4(VAR_16) +
          (VAR_17 * VAR_3)) >> 16);
  FUNC_18(VAR_16, FUNC_13(VAR_17),
          (FUNC_4(VAR_16) +
          ((VAR_17 + 16) * VAR_3)) >> 16);
 }

 if (VAR_16->type == VAR_2) {
  FUNC_18(VAR_16, VAR_7, 0x00040008);
 } else {
  for (VAR_17 = 0; VAR_17 < VAR_16->nr_chans; VAR_17++)
   FUNC_18(VAR_16, FUNC_11(VAR_17), 0x100);
 }
}
