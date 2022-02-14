
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct csio_hw {TYPE_1__* chip_ops; } ;
struct TYPE_2__ {int (* chip_pcie_intr_handler ) (struct csio_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (struct csio_hw*) ;
 int FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,char*,int) ;
 int FUNC_4 (struct csio_hw*) ;
 int FUNC_5 (struct csio_hw*) ;
 int FUNC_6 (struct csio_hw*,int ) ;
 int FUNC_7 (struct csio_hw*) ;
 int FUNC_8 (struct csio_hw*) ;
 int FUNC_9 (struct csio_hw*) ;
 int FUNC_10 (struct csio_hw*) ;
 int FUNC_11 (struct csio_hw*) ;
 int FUNC_12 (struct csio_hw*,int ) ;
 int FUNC_13 (struct csio_hw*) ;
 int FUNC_14 (struct csio_hw*) ;
 int FUNC_15 (struct csio_hw*) ;
 int FUNC_16 (struct csio_hw*) ;
 int FUNC_17 (struct csio_hw*) ;
 int FUNC_18 (struct csio_hw*,int,int ) ;
 int FUNC_19 (struct csio_hw*,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_20 (struct csio_hw*) ;

int
FUNC_21(struct csio_hw *VAR_29)
{
 uint32_t VAR_30 = FUNC_12(VAR_29, VAR_15);

 if (!(VAR_30 & VAR_2)) {
  FUNC_0(VAR_29, VAR_28);
  return 0;
 }

 FUNC_3(VAR_29, "Slow interrupt! cause: 0x%x\n", VAR_30);

 FUNC_0(VAR_29, VAR_27);

 if (VAR_30 & VAR_0)
  FUNC_1(VAR_29);

 if (VAR_30 & VAR_11)
  FUNC_7(VAR_29);

 if (VAR_30 & VAR_12)
  FUNC_8(VAR_29);

 if (VAR_30 & VAR_14)
  FUNC_9(VAR_29);

 if (VAR_30 & VAR_19)
  FUNC_14(VAR_29);

 if (VAR_30 & VAR_23)
  FUNC_19(VAR_29, 0);

 if (VAR_30 & VAR_24)
  FUNC_19(VAR_29, 1);

 if (VAR_30 & VAR_25)
  FUNC_19(VAR_29, 2);

 if (VAR_30 & VAR_26)
  FUNC_19(VAR_29, 3);

 if (VAR_30 & VAR_13)
  VAR_29->chip_ops->chip_pcie_intr_handler(VAR_29);

 if (VAR_30 & VAR_7)
  FUNC_6(VAR_29, VAR_10);

 if (VAR_30 & VAR_3)
  FUNC_6(VAR_29, VAR_8);

 if (VAR_30 & VAR_4)
  FUNC_6(VAR_29, VAR_9);

 if (VAR_30 & VAR_5)
  FUNC_4(VAR_29);

 if (VAR_30 & VAR_20)
  FUNC_15(VAR_29);

 if (VAR_30 & VAR_6)
  FUNC_5(VAR_29);

 if (VAR_30 & VAR_17)
  FUNC_11(VAR_29);

 if (VAR_30 & VAR_16)
  FUNC_10(VAR_29);

 if (VAR_30 & VAR_21)
  FUNC_16(VAR_29);

 if (VAR_30 & VAR_1)
  FUNC_2(VAR_29);

 if (VAR_30 & VAR_18)
  FUNC_13(VAR_29);

 if (VAR_30 & VAR_22)
  FUNC_17(VAR_29);


 FUNC_18(VAR_29, VAR_30 & VAR_2, VAR_15);
 FUNC_12(VAR_29, VAR_15);

 return 1;
}
