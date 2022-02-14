
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;
struct csio_hw {scalar_t__ intr_mode; int flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct csio_hw*) ;
 scalar_t__ FUNC_6 (struct csio_hw*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct csio_hw*) ;
 int FUNC_9 (struct csio_hw*,int ) ;
 int FUNC_10 (struct csio_hw*,int ,int ,int) ;
 int FUNC_11 (struct csio_hw*,int,int ) ;

__attribute__((used)) static void
FUNC_12(struct csio_hw *VAR_27)
{
 uint16_t VAR_28 = (uint16_t)FUNC_4(FUNC_5(VAR_27));
 u32 VAR_29 = 0;
 uint32_t VAR_30 = FUNC_9(VAR_27, VAR_21);

 if (FUNC_7(VAR_27->pdev->device & VAR_2))
  VAR_29 = FUNC_2(FUNC_9(VAR_27, VAR_24));
 else
  VAR_29 = FUNC_3(FUNC_9(VAR_27, VAR_24));





 if (VAR_27->intr_mode == VAR_4)
  FUNC_10(VAR_27, FUNC_1(VAR_19),
       FUNC_0(VAR_0), VAR_28);
 else if (VAR_27->intr_mode == VAR_3)
  FUNC_10(VAR_27, FUNC_1(VAR_19),
       FUNC_0(VAR_0), 0);

 FUNC_11(VAR_27, VAR_20, FUNC_1(VAR_23));


 FUNC_8(VAR_27);


 if (FUNC_6(VAR_27)) {



  VAR_30 &= (~VAR_25);
  FUNC_11(VAR_27, VAR_30, VAR_21);

  FUNC_11(VAR_27, VAR_10 |
         VAR_5 | VAR_17 |
         VAR_11 | VAR_14 |
         VAR_13 |
         VAR_12 | VAR_9 |
         VAR_8 | VAR_7 |
         VAR_6 | VAR_16 |
         VAR_15 | VAR_18,
         VAR_26);
  FUNC_10(VAR_27, VAR_22, 0, 1 << VAR_29);
 }

 VAR_27->flags |= VAR_1;

}
