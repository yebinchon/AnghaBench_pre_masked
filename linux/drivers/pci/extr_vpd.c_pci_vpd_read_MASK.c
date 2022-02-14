
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_vpd {int valid; scalar_t__ len; int busy; int lock; scalar_t__ cap; int flag; } ;
struct pci_dev {struct pci_vpd* vpd; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct pci_dev*,scalar_t__) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static ssize_t FUNC_6(struct pci_dev *VAR_6, loff_t VAR_7, size_t VAR_8,
       void *VAR_9)
{
 struct pci_vpd *VAR_10 = VAR_6->vpd;
 int VAR_11;
 loff_t VAR_12 = VAR_7 + VAR_8;
 u8 *VAR_13 = VAR_9;

 if (VAR_7 < 0)
  return -VAR_1;

 if (!VAR_10->valid) {
  VAR_10->valid = 1;
  VAR_10->len = FUNC_4(VAR_6, VAR_10->len);
 }

 if (VAR_10->len == 0)
  return -VAR_2;

 if (VAR_7 > VAR_10->len)
  return 0;

 if (VAR_12 > VAR_10->len) {
  VAR_12 = VAR_10->len;
  VAR_8 = VAR_12 - VAR_7;
 }

 if (FUNC_0(&VAR_10->lock))
  return -VAR_0;

 VAR_11 = FUNC_5(VAR_6);
 if (VAR_11 < 0)
  goto out;

 while (VAR_7 < VAR_12) {
  u32 VAR_14;
  unsigned int VAR_15, VAR_16;

  VAR_11 = FUNC_3(VAR_6, VAR_10->cap + VAR_3,
       VAR_7 & ~3);
  if (VAR_11 < 0)
   break;
  VAR_10->busy = 1;
  VAR_10->flag = VAR_4;
  VAR_11 = FUNC_5(VAR_6);
  if (VAR_11 < 0)
   break;

  VAR_11 = FUNC_2(VAR_6, VAR_10->cap + VAR_5, &VAR_14);
  if (VAR_11 < 0)
   break;

  VAR_16 = VAR_7 & 3;
  for (VAR_15 = 0; VAR_15 < sizeof(u32); VAR_15++) {
   if (VAR_15 >= VAR_16) {
    *VAR_13++ = VAR_14;
    if (++VAR_7 == VAR_12)
     break;
   }
   VAR_14 >>= 8;
  }
 }
out:
 FUNC_1(&VAR_10->lock);
 return VAR_11 ? VAR_11 : VAR_8;
}
