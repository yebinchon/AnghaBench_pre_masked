
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_3__ {int pcie_waen; } ;
struct TYPE_4__ {scalar_t__ ia_rows; } ;
struct ath_hw {TYPE_1__ config; TYPE_2__ iniPcieSerdes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*,int ,int ) ;
 int FUNC_10 (struct ath_hw*,int) ;
 int FUNC_11 (struct ath_hw*,int ,int ) ;
 int FUNC_12 (struct ath_hw*,int,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct ath_hw *VAR_13,
      bool VAR_14)
{
 u8 VAR_15;
 u32 VAR_16;


 if (!VAR_14 ) {
  if (FUNC_2(VAR_13)) {





   for (VAR_15 = 0; VAR_15 < VAR_13->iniPcieSerdes.ia_rows; VAR_15++) {
    FUNC_12(VAR_13, FUNC_7(&VAR_13->iniPcieSerdes, VAR_15, 0),
       FUNC_7(&VAR_13->iniPcieSerdes, VAR_15, 1));
   }
  } else {
   FUNC_6(VAR_13);

   FUNC_12(VAR_13, VAR_4, 0x9248fc00);
   FUNC_12(VAR_13, VAR_4, 0x24924924);


   FUNC_12(VAR_13, VAR_4, 0x28000039);
   FUNC_12(VAR_13, VAR_4, 0x53160824);
   FUNC_12(VAR_13, VAR_4, 0xe5980579);





   FUNC_12(VAR_13, VAR_4, 0x001defff);

   FUNC_12(VAR_13, VAR_4, 0x1aaabe40);
   FUNC_12(VAR_13, VAR_4, 0xbe105554);
   FUNC_12(VAR_13, VAR_4, 0x000e3007);


   FUNC_12(VAR_13, VAR_5, 0x00000000);

   FUNC_8(VAR_13);
  }

  FUNC_13(1000);
 }

 if (VAR_14) {

  FUNC_9(VAR_13, VAR_2, VAR_3);

  VAR_16 = FUNC_10(VAR_13, VAR_6);







  if (VAR_13->config.pcie_waen) {
   if (VAR_13->config.pcie_waen & VAR_11)
    VAR_16 |= VAR_11;
  } else {
   if (FUNC_3(VAR_13) || FUNC_0(VAR_13) || FUNC_5(VAR_13)) {
    if (VAR_1 & VAR_11)
     VAR_16 |= VAR_11;
   } else if (FUNC_1(VAR_13)) {
    if (VAR_0 & VAR_11)
     VAR_16 |= VAR_11;
   }
  }

  if (FUNC_1(VAR_13) || FUNC_3(VAR_13) || FUNC_5(VAR_13)) {




   VAR_16 &= ~(VAR_9 | VAR_10);
  }

  if (FUNC_1(VAR_13))
   VAR_16 |= VAR_7;

  if (FUNC_4(VAR_13))
   VAR_16 |= VAR_8;

  FUNC_12(VAR_13, VAR_6, VAR_16);
 } else {
  if (VAR_13->config.pcie_waen) {
   VAR_16 = VAR_13->config.pcie_waen;
   VAR_16 &= (~VAR_11);
  } else {
   if (FUNC_3(VAR_13) || FUNC_0(VAR_13) || FUNC_5(VAR_13)) {
    VAR_16 = VAR_1;
    VAR_16 &= (~VAR_11);
   } else if (FUNC_1(VAR_13)) {




    VAR_16 = VAR_0;
    VAR_16 &= (~VAR_11);
   } else {
    VAR_16 = VAR_12;
   }
  }


  if (FUNC_3(VAR_13) || FUNC_5(VAR_13))
   VAR_16 |= (VAR_9 | VAR_10);

  if (FUNC_4(VAR_13))
   VAR_16 |= VAR_8;

  FUNC_12(VAR_13, VAR_6, VAR_16);


  FUNC_11(VAR_13, VAR_2, VAR_3);
 }
}
