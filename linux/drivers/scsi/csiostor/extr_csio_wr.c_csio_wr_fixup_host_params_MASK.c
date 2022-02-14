
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
typedef int u16 ;
struct csio_sge {int csio_fl_align; } ;
struct csio_wrm {struct csio_sge sge; } ;
struct csio_hw {int flags; TYPE_1__* pdev; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_11 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct csio_wrm* FUNC_13 (struct csio_hw*) ;
 int FUNC_14 (struct csio_hw*,int ,int ,int ) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct csio_hw*,int ) ;
 int FUNC_17 (struct csio_hw*,int ,int,int) ;
 int FUNC_18 (struct csio_hw*,int,int ) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*,int ,int*) ;

__attribute__((used)) static void
FUNC_22(struct csio_hw *VAR_26)
{
 struct csio_wrm *VAR_27 = FUNC_13(VAR_26);
 struct csio_sge *VAR_28 = &VAR_27->sge;
 uint32_t VAR_29 = VAR_11;
 uint32_t VAR_30 = VAR_12 - 10;
 uint32_t VAR_31 = VAR_29 > 64 ? 128 : 64;
 u32 VAR_32 = VAR_29 < 32 ? 32 : VAR_29;
 u32 VAR_33;
 u32 VAR_34, VAR_35;

 FUNC_18(VAR_26, FUNC_1(VAR_30) | FUNC_2(VAR_30) |
        FUNC_3(VAR_30) | FUNC_4(VAR_30) |
        FUNC_5(VAR_30) | FUNC_6(VAR_30) |
        FUNC_7(VAR_30) | FUNC_8(VAR_30),
        VAR_22);
 VAR_33 = VAR_32;
 if (FUNC_20(VAR_26->pdev)) {
  u32 VAR_36, VAR_37;
  u16 VAR_38;





  FUNC_21(VAR_26->pdev, VAR_14, &VAR_38);
  VAR_37 = ((VAR_38 & VAR_15) >> 5) + 7;
  VAR_36 = 1 << VAR_37;
  if (VAR_36 > VAR_33)
   VAR_33 = VAR_36;
 }





 if (VAR_33 <= 16) {
  VAR_35 = VAR_5;
  VAR_32 = 16;
 } else if (VAR_33 == 32) {
  VAR_35 = VAR_6;
  VAR_32 = 64;
 } else {
  u32 VAR_39 = FUNC_19(VAR_33) - 1;

  VAR_35 = VAR_39 - VAR_8;
  VAR_32 = VAR_33;
 }






 if (FUNC_15(VAR_26->pdev->device & VAR_1))
  VAR_34 = VAR_9;
 else
  VAR_34 = VAR_23;

 FUNC_17(VAR_26, VAR_18,
      FUNC_11(VAR_10) |
      VAR_4,
      FUNC_11(VAR_34) |
      FUNC_0(VAR_31 != 64));
 FUNC_17(VAR_26, VAR_17,
      FUNC_10(VAR_7),
      FUNC_10(VAR_35));


 FUNC_18(VAR_26, VAR_13, VAR_19);





 if (VAR_26->flags & VAR_0) {
  FUNC_18(VAR_26,
   (FUNC_16(VAR_26, VAR_20) +
   VAR_32 - 1) & ~(VAR_32 - 1),
   VAR_20);
  FUNC_18(VAR_26,
   (FUNC_16(VAR_26, VAR_21) +
   VAR_32 - 1) & ~(VAR_32 - 1),
   VAR_21);
 }

 VAR_28->csio_fl_align = VAR_32;

 FUNC_18(VAR_26, FUNC_9(VAR_12 - 12), VAR_25);


 FUNC_17(VAR_26, VAR_18,
      FUNC_12(VAR_16),
      FUNC_12(VAR_2));

 FUNC_14(VAR_26, VAR_24,
        VAR_3, 0);
}
