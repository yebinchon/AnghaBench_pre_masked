
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vfio_pci_device {int virq_disabled; int bardirty; int * vconfig; struct pci_dev* pdev; } ;
struct perm_bits {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;
typedef int __le16 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*,size_t,int*) ;
 int FUNC_5 (struct vfio_pci_device*) ;
 int FUNC_6 (struct vfio_pci_device*,int,int,struct perm_bits*,int,int ) ;
 scalar_t__ FUNC_7 (struct vfio_pci_device*) ;
 int FUNC_8 (struct vfio_pci_device*) ;
 int FUNC_9 (struct vfio_pci_device*) ;

__attribute__((used)) static int FUNC_10(struct vfio_pci_device *VAR_4, int VAR_5,
       int VAR_6, struct perm_bits *VAR_7,
       int VAR_8, __le32 VAR_9)
{
 struct pci_dev *VAR_10 = VAR_4->pdev;
 __le16 *VAR_11;
 u16 VAR_12 = 0;
 int VAR_13;

 VAR_11 = (__le16 *)&VAR_4->vconfig[VAR_0];

 if (VAR_8 == VAR_0) {
  bool VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
  u16 VAR_20;

  VAR_13 = FUNC_4(VAR_10, VAR_0, &VAR_20);
  if (VAR_13)
   return VAR_13;

  VAR_12 = FUNC_3(VAR_9);

  VAR_14 = !!(VAR_20 & VAR_3);
  VAR_15 = !!(FUNC_2(*VAR_11) & VAR_3);
  VAR_16 = !!(VAR_12 & VAR_3);

  VAR_17 = !!(VAR_20 & VAR_2);
  VAR_18 = !!(FUNC_2(*VAR_11) & VAR_2);
  VAR_19 = !!(VAR_12 & VAR_2);
  if ((VAR_16 && VAR_15 && !VAR_14) ||
      (VAR_19 && VAR_18 && !VAR_17) ||
      FUNC_7(VAR_4))
   FUNC_5(VAR_4);
 }

 VAR_6 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_6 < 0)
  return VAR_6;





 if (VAR_8 == VAR_0) {
  u16 VAR_21 = VAR_3 | VAR_2;

  *VAR_11 &= FUNC_0(~VAR_21);
  *VAR_11 |= FUNC_0(VAR_12 & VAR_21);
 }


 if (VAR_8 >= VAR_0 && VAR_8 <= VAR_0 + 1) {
  bool VAR_22;

  VAR_22 = !!(FUNC_2(*VAR_11) &
           VAR_1);

  if (VAR_22 && !VAR_4->virq_disabled) {
   VAR_4->virq_disabled = 1;
   FUNC_8(VAR_4);
  } else if (!VAR_22 && VAR_4->virq_disabled) {
   VAR_4->virq_disabled = 0;
   FUNC_9(VAR_4);
  }
 }

 if (FUNC_1(VAR_8))
  VAR_4->bardirty = 1;

 return VAR_6;
}
