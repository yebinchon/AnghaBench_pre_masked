
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ data; } ;
struct pci_cap_saved_state {TYPE_1__ cap; } ;


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
 int VAR_10 ;
 scalar_t__ VAR_11 ;
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
 int FUNC_0 (struct pci_dev*,char*,int) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 int FUNC_6 (struct pci_dev*,int,int*,int,int) ;
 int FUNC_7 (struct pci_dev*,int,int) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_22, int VAR_23,
     struct pci_cap_saved_state *VAR_24,
     bool VAR_25)
{
 u32 VAR_26;
 char VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31 = 0;
 u8 *VAR_32 = VAR_24 ? (u8 *)VAR_24->cap.data : ((void*)0);


 if (VAR_32 && VAR_24->cap.size !=
     FUNC_9(VAR_22, VAR_23, ((void*)0), VAR_25)) {
  FUNC_0(VAR_22, "VC save buffer size does not match @0x%x\n", VAR_23);
  return -VAR_0;
 }

 FUNC_1(VAR_22, VAR_23 + VAR_9, &VAR_26);

 VAR_27 = VAR_26 & VAR_3;

 VAR_28 = (VAR_26 & VAR_4) >> 4;

 VAR_29 = 1 << ((VAR_26 & VAR_2) >> 10);







 if (VAR_32) {
  if (VAR_25)
   FUNC_2(VAR_22, VAR_23 + VAR_11,
          (u16 *)VAR_32);
  else
   FUNC_8(VAR_22, VAR_23 + VAR_11,
           *(u16 *)VAR_32);
  VAR_32 += 4;
 }
 VAR_31 += 4;





 if (VAR_28) {
  u32 VAR_33;
  int VAR_34;

  FUNC_1(VAR_22, VAR_23 + VAR_10, &VAR_33);
  VAR_34 = ((VAR_33 & VAR_8) >> 24) * 16;

  if (VAR_34) {
   int VAR_35, VAR_36 = 0;

   if (VAR_33 & VAR_5)
    VAR_36 = 128;
   else if (VAR_33 & VAR_7)
    VAR_36 = 64;
   else if (VAR_33 & VAR_6)
    VAR_36 = 32;


   VAR_35 = ((VAR_28 + 1) * VAR_36 * 4) / 8;

   if (VAR_35 && VAR_32) {
    FUNC_6(VAR_22,
          VAR_23 + VAR_34,
          (u32 *)VAR_32,
          VAR_35 / 4, VAR_25);




    if (!VAR_25)
     FUNC_4(VAR_22, VAR_23);

    VAR_32 += VAR_35;
   }
   VAR_31 += VAR_35;
  }
 }
 for (VAR_30 = 0; VAR_30 < VAR_27 + 1; VAR_30++) {
  u32 VAR_37;
  int VAR_38;

  FUNC_1(VAR_22, VAR_23 + VAR_12 +
          (VAR_30 * VAR_1), &VAR_37);
  VAR_38 = ((VAR_37 & VAR_18) >> 24) * 16;
  if (VAR_38) {
   int VAR_39, VAR_40 = 0;

   if (VAR_37 & VAR_15)
    VAR_40 = 256;
   else if (VAR_37 & (VAR_13 |
     VAR_14))
    VAR_40 = 128;
   else if (VAR_37 & VAR_17)
    VAR_40 = 64;
   else if (VAR_37 & VAR_16)
    VAR_40 = 32;

   VAR_39 = (VAR_29 * VAR_40) / 8;

   if (VAR_39 && VAR_32) {
    FUNC_6(VAR_22,
          VAR_23 + VAR_38,
          (u32 *)VAR_32,
          VAR_39 / 4, VAR_25);
    VAR_32 += VAR_39;
   }
   VAR_31 += VAR_39;
  }


  if (VAR_32) {
   int VAR_41 = VAR_23 + VAR_19 +
      (VAR_30 * VAR_1);
   if (VAR_25)
    FUNC_1(VAR_22, VAR_41,
            (u32 *)VAR_32);
   else {
    u32 VAR_42, VAR_43 = *(u32 *)VAR_32;




    FUNC_1(VAR_22, VAR_41, &VAR_42);
    VAR_42 &= VAR_21;
    VAR_42 |= VAR_43 & ~VAR_21;
    FUNC_7(VAR_22, VAR_41, VAR_42);

    if (VAR_43 & VAR_20)
     FUNC_5(VAR_22, VAR_23, VAR_30);

    if ((VAR_43 ^ VAR_42) & VAR_21)
     FUNC_3(VAR_22, VAR_23, VAR_30);
   }
   VAR_32 += 4;
  }
  VAR_31 += 4;
 }

 return VAR_32 ? 0 : VAR_31;
}
