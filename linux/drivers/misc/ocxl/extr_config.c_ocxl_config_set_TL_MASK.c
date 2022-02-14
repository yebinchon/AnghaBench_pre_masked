
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef long u32 ;
struct pci_dev {int devfn; } ;
typedef int __be32 ;


 int VAR_0 ;
 long FUNC_0 (int,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 long FUNC_3 (int ) ;
 int FUNC_4 (long) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (struct pci_dev*,scalar_t__,long*) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_9 (struct pci_dev*,scalar_t__,long) ;
 int FUNC_10 (struct pci_dev*,long*,char*,int) ;
 int FUNC_11 (struct pci_dev*,long,int ,int) ;

int FUNC_12(struct pci_dev *VAR_8, int VAR_9)
{
 u32 VAR_10;
 __be32 *VAR_11;
 u8 VAR_12;
 int VAR_13, VAR_14;
 long VAR_15;
 char *VAR_16;




 if (FUNC_1(VAR_8->devfn) != 0)
  return 0;

 VAR_16 = FUNC_6(VAR_7, VAR_1);
 if (!VAR_16)
  return -VAR_0;
 VAR_14 = FUNC_10(VAR_8, &VAR_15, VAR_16,
    VAR_7);
 if (VAR_14)
  goto out;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13 += 4) {
  VAR_11 = (__be32 *) &VAR_16[VAR_13];
  FUNC_9(VAR_8,
    VAR_9 + VAR_6 + VAR_13,
    FUNC_3(*VAR_11));
 }
 VAR_10 = VAR_15 >> 32;
 FUNC_9(VAR_8, VAR_9 + VAR_5, VAR_10);
 VAR_10 = VAR_15 & FUNC_0(31, 0);
 FUNC_9(VAR_8, VAR_9 + VAR_5 + 4, VAR_10);




 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13 += 4) {
  FUNC_7(VAR_8,
    VAR_9 + VAR_4 + VAR_13,
    &VAR_10);
  VAR_11 = (__be32 *) &VAR_16[VAR_13];
  *VAR_11 = FUNC_4(VAR_10);
 }
 FUNC_7(VAR_8, VAR_9 + VAR_3, &VAR_10);
 VAR_15 = (long) VAR_10 << 32;
 FUNC_7(VAR_8, VAR_9 + VAR_3 + 4, &VAR_10);
 VAR_15 |= VAR_10;

 VAR_14 = FUNC_11(VAR_8, VAR_15, FUNC_2(VAR_16),
    VAR_7);
 if (VAR_14)
  goto out;
 VAR_12 = 0x2 << 4;
 FUNC_8(VAR_8, VAR_9 + VAR_2,
   VAR_12);

 VAR_14 = 0;
out:
 FUNC_5(VAR_16);
 return VAR_14;
}
