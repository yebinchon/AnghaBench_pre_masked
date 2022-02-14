
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int aer_cap; } ;


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
 int VAR_11 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_12, int VAR_13,
    u32 *VAR_14, u32 *VAR_15, u32 *VAR_16)
{
 u32 VAR_17 = 0, VAR_18;
 u16 VAR_19;
 if (VAR_13 & (VAR_4 | VAR_3 |
      VAR_1)) {
  FUNC_4(VAR_12, VAR_9, &VAR_19);
  *VAR_14 = (VAR_19 & VAR_10) >> 9;
  VAR_17 = *VAR_14 + 1;
 }
 if (VAR_13 & VAR_2) {
  VAR_18 = FUNC_1(VAR_12, VAR_11);
  if (VAR_18) {
   FUNC_3(VAR_12, VAR_18 + VAR_7,
          &VAR_19);
   *VAR_16 = VAR_19 & VAR_8;
   VAR_17 = FUNC_0(VAR_17, *VAR_16 + 1);
  }
 }

 return VAR_17;
}
