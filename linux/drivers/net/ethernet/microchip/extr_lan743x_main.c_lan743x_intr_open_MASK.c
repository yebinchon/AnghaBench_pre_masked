
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct msix_entry {int entry; int vector; } ;
struct lan743x_intr {int number_of_vectors; int using_vectors; int flags; TYPE_1__* vector_list; int irq; } ;
struct TYPE_6__ {int flags; } ;
struct lan743x_adapter {struct lan743x_adapter* rx; TYPE_2__ csr; struct lan743x_adapter* tx; int netdev; TYPE_3__* pdev; struct lan743x_intr intr; } ;
struct TYPE_7__ {int irq; } ;
struct TYPE_5__ {int int_mask; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (int,int) ;
 int VAR_23 ;
 int FUNC_5 (int,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_6 (struct lan743x_adapter*,int ,int) ;
 int FUNC_7 (struct lan743x_adapter*) ;
 int FUNC_8 (struct lan743x_adapter*,int,int,int,int ,struct lan743x_adapter*) ;
 int VAR_48 ;
 int FUNC_9 (struct lan743x_adapter*) ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_10 (struct msix_entry*,int ,int) ;
 int FUNC_11 (struct lan743x_adapter*,int ,int ,char*,...) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,struct msix_entry*,int,int) ;

__attribute__((used)) static int FUNC_14(struct lan743x_adapter *VAR_51)
{
 struct msix_entry VAR_52[VAR_28];
 struct lan743x_intr *VAR_53 = &VAR_51->intr;
 u32 VAR_54 = 0;
 u32 VAR_55 = 0;
 u32 VAR_56 = 0;
 int VAR_57 = -VAR_0;
 int VAR_58 = 0;
 u32 VAR_59 = 0;

 VAR_53->number_of_vectors = 0;


 FUNC_10(&VAR_52[0], 0,
        sizeof(struct msix_entry) * VAR_28);
 for (VAR_58 = 0; VAR_58 < VAR_28; VAR_58++)
  VAR_52[VAR_58].entry = VAR_58;
 VAR_57 = FUNC_13(VAR_51->pdev,
        VAR_52, 1,
        1 + VAR_30 +
        VAR_29);

 if (VAR_57 > 0) {
  VAR_53->flags |= VAR_1;
  VAR_53->number_of_vectors = VAR_57;
  VAR_53->using_vectors = 1;
  for (VAR_58 = 0; VAR_58 < VAR_53->number_of_vectors; VAR_58++)
   VAR_53->vector_list[VAR_58].irq = VAR_52
             [VAR_58].vector;
  FUNC_11(VAR_51, VAR_47, VAR_51->netdev,
      "using MSIX interrupts, number of vectors = %d\n",
      VAR_53->number_of_vectors);
 }


 if (!VAR_53->number_of_vectors) {
  if (!(VAR_51->csr.flags & VAR_25)) {
   if (!FUNC_12(VAR_51->pdev)) {
    VAR_53->flags |= VAR_2;
    VAR_53->number_of_vectors = 1;
    VAR_53->using_vectors = 1;
    VAR_53->vector_list[0].irq =
     VAR_51->pdev->irq;
    FUNC_11(VAR_51, VAR_47, VAR_51->netdev,
        "using MSI interrupts, number of vectors = %d\n",
        VAR_53->number_of_vectors);
   }
  }
 }


 if (!VAR_53->number_of_vectors) {
  VAR_53->number_of_vectors = 1;
  VAR_53->using_vectors = 0;
  VAR_53->vector_list[0].irq = VAR_53->irq;
  FUNC_11(VAR_51, VAR_47, VAR_51->netdev,
      "using legacy interrupts\n");
 }


 FUNC_6(VAR_51, VAR_20, 0xFFFFFFFF);


 FUNC_6(VAR_51, VAR_22, 0x00000000);
 FUNC_6(VAR_51, VAR_23, 0x00000000);
 FUNC_6(VAR_51, VAR_24, 0x00000000);
 VAR_59 = VAR_41 |
  VAR_42 |
  VAR_36 |
  VAR_37;

 if (VAR_53->using_vectors) {
  VAR_59 |= VAR_45 |
    VAR_46;
 } else {
  VAR_59 |= VAR_32 |
    VAR_33 |
    VAR_31;
 }

 if (VAR_51->csr.flags & VAR_26) {
  VAR_59 &= ~VAR_41;
  VAR_59 &= ~VAR_42;
  VAR_59 &= ~VAR_37;
  VAR_59 &= ~VAR_36;
  VAR_59 |= VAR_40;
  VAR_59 |= VAR_38;
 }

 VAR_57 = FUNC_8(VAR_51, 0, VAR_59,
     VAR_4 | VAR_5 |
     VAR_3,
     VAR_48, VAR_51);
 if (VAR_57)
  goto clean_up;
 VAR_53->flags |= FUNC_0(0);

 if (VAR_53->using_vectors)
  FUNC_6(VAR_51, VAR_21,
      FUNC_3(0));

 if (!(VAR_51->csr.flags & VAR_25)) {
  FUNC_6(VAR_51, VAR_8, VAR_27);
  FUNC_6(VAR_51, VAR_9, VAR_27);
  FUNC_6(VAR_51, VAR_10, VAR_27);
  FUNC_6(VAR_51, VAR_11, VAR_27);
  FUNC_6(VAR_51, VAR_12, VAR_27);
  FUNC_6(VAR_51, VAR_13, VAR_27);
  FUNC_6(VAR_51, VAR_14, VAR_27);
  FUNC_6(VAR_51, VAR_15, VAR_27);
  FUNC_6(VAR_51, VAR_16, 0x00005432);
  FUNC_6(VAR_51, VAR_17, 0x00000001);
  FUNC_6(VAR_51, VAR_18, 0x00FFFFFF);
 }


 FUNC_6(VAR_51, VAR_7, VAR_6);
 VAR_57 = FUNC_9(VAR_51);
 if (VAR_57)
  goto clean_up;

 if (VAR_53->number_of_vectors > 1) {
  int VAR_60 = VAR_53->number_of_vectors - 1;

  if (VAR_60 > VAR_30)
   VAR_60 = VAR_30;
  VAR_59 = VAR_41 |
   VAR_42 |
   VAR_36 |
   VAR_37 |
   VAR_45 |
   VAR_46;

  if (VAR_51->csr.flags &
     VAR_26) {
   VAR_59 = VAR_44 |
    VAR_35 |
    VAR_34 |
    VAR_39;
  }

  for (VAR_58 = 0; VAR_58 < VAR_60; VAR_58++) {
   u32 VAR_61 = FUNC_2(VAR_58);
   int VAR_62 = VAR_58 + 1;


   VAR_56 |= FUNC_5(VAR_58, VAR_62);
   FUNC_6(VAR_51, VAR_23, VAR_56);


   VAR_53->vector_list[0].int_mask &= ~VAR_61;
   VAR_57 = FUNC_8(VAR_51, VAR_62, VAR_59,
       VAR_61, VAR_50,
       &VAR_51->tx[VAR_58]);
   if (VAR_57)
    goto clean_up;
   VAR_53->flags |= FUNC_0(VAR_62);
   if (!(VAR_59 &
       VAR_44))
    FUNC_6(VAR_51, VAR_21,
        FUNC_3(VAR_62));
  }
 }
 if ((VAR_53->number_of_vectors - VAR_30) > 1) {
  int VAR_63 = VAR_53->number_of_vectors -
        VAR_30 - 1;

  if (VAR_63 > VAR_29)
   VAR_63 = VAR_29;

  VAR_59 = VAR_41 |
   VAR_42 |
   VAR_36 |
   VAR_37 |
   VAR_45 |
   VAR_46;

  if (VAR_51->csr.flags &
      VAR_26) {
   VAR_59 = VAR_43 |
    VAR_44 |
    VAR_35 |
    VAR_34 |
    VAR_39;
  }
  for (VAR_58 = 0; VAR_58 < VAR_63; VAR_58++) {
   int VAR_64 = VAR_58 + 1 + VAR_30;
   u32 VAR_65 = FUNC_1(VAR_58);


   VAR_55 |= FUNC_4(VAR_58, VAR_64);
   FUNC_6(VAR_51, VAR_22, VAR_55);
   if (VAR_59 &
       VAR_43) {
    VAR_54 |= FUNC_3(VAR_64);
    FUNC_6(VAR_51, VAR_19,
        VAR_54);
   }


   VAR_53->vector_list[0].int_mask &= ~VAR_65;
   VAR_57 = FUNC_8(VAR_51, VAR_64, VAR_59,
       VAR_65, VAR_49,
       &VAR_51->rx[VAR_58]);
   if (VAR_57)
    goto clean_up;
   VAR_53->flags |= FUNC_0(VAR_64);

   FUNC_6(VAR_51, VAR_21,
       FUNC_3(VAR_64));
  }
 }
 return 0;

clean_up:
 FUNC_7(VAR_51);
 return VAR_57;
}
