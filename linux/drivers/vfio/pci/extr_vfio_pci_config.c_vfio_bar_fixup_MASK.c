
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vfio_pci_device {int bardirty; int * vconfig; struct pci_dev* pdev; } ;
struct pci_dev {TYPE_1__* resource; } ;
typedef int __le32 ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,size_t) ;
 scalar_t__ FUNC_2 (struct pci_dev*,size_t) ;
 int FUNC_3 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_4(struct vfio_pci_device *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->pdev;
 int VAR_10;
 __le32 *VAR_11;
 u64 VAR_12;

 VAR_11 = (__le32 *)&VAR_8->vconfig[VAR_1];

 for (VAR_10 = VAR_6; VAR_10 <= VAR_7; VAR_10++, VAR_11++) {
  if (!FUNC_2(VAR_9, VAR_10)) {
   *VAR_11 = 0;
   continue;
  }

  VAR_12 = ~(FUNC_1(VAR_9, VAR_10) - 1);

  *VAR_11 &= FUNC_0((u32)VAR_12);
  *VAR_11 |= FUNC_3(VAR_9, VAR_10);

  if (*VAR_11 & FUNC_0(VAR_2)) {
   VAR_11++;
   *VAR_11 &= FUNC_0((u32)(VAR_12 >> 32));
   VAR_10++;
  }
 }

 VAR_11 = (__le32 *)&VAR_8->vconfig[VAR_3];






 if (FUNC_2(VAR_9, VAR_5)) {
  VAR_12 = ~(FUNC_1(VAR_9, VAR_5) - 1);
  VAR_12 |= VAR_4;
  *VAR_11 &= FUNC_0((u32)VAR_12);
 } else if (VAR_9->resource[VAR_5].flags &
     VAR_0) {
  VAR_12 = ~(0x20000 - 1);
  VAR_12 |= VAR_4;
  *VAR_11 &= FUNC_0((u32)VAR_12);
 } else
  *VAR_11 = 0;

 VAR_8->bardirty = 0;
}
