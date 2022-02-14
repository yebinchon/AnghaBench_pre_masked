
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_vpd {int valid; scalar_t__ len; int busy; int lock; scalar_t__ flag; scalar_t__ cap; } ;
struct pci_dev {struct pci_vpd* vpd; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct pci_dev*,scalar_t__) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static ssize_t FUNC_6(struct pci_dev *VAR_6, loff_t VAR_7, size_t VAR_8,
        const void *VAR_9)
{
 struct pci_vpd *VAR_10 = VAR_6->vpd;
 const u8 *VAR_11 = VAR_9;
 loff_t VAR_12 = VAR_7 + VAR_8;
 int VAR_13 = 0;

 if (VAR_7 < 0 || (VAR_7 & 3) || (VAR_8 & 3))
  return -VAR_1;

 if (!VAR_10->valid) {
  VAR_10->valid = 1;
  VAR_10->len = FUNC_4(VAR_6, VAR_10->len);
 }

 if (VAR_10->len == 0)
  return -VAR_2;

 if (VAR_12 > VAR_10->len)
  return -VAR_1;

 if (FUNC_0(&VAR_10->lock))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_6);
 if (VAR_13 < 0)
  goto out;

 while (VAR_7 < VAR_12) {
  u32 VAR_14;

  VAR_14 = *VAR_11++;
  VAR_14 |= *VAR_11++ << 8;
  VAR_14 |= *VAR_11++ << 16;
  VAR_14 |= *VAR_11++ << 24;

  VAR_13 = FUNC_2(VAR_6, VAR_10->cap + VAR_5, VAR_14);
  if (VAR_13 < 0)
   break;
  VAR_13 = FUNC_3(VAR_6, VAR_10->cap + VAR_3,
       VAR_7 | VAR_4);
  if (VAR_13 < 0)
   break;

  VAR_10->busy = 1;
  VAR_10->flag = 0;
  VAR_13 = FUNC_5(VAR_6);
  if (VAR_13 < 0)
   break;

  VAR_7 += sizeof(u32);
 }
out:
 FUNC_1(&VAR_10->lock);
 return VAR_13 ? VAR_13 : VAR_8;
}
