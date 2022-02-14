
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {scalar_t__ cfg_size; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_6 (int ) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct file *VAR_1, struct kobject *VAR_2,
    struct bin_attribute *VAR_3, char *VAR_4,
    loff_t VAR_5, size_t VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_7(FUNC_0(VAR_2));
 unsigned int VAR_8 = VAR_6;
 loff_t VAR_9 = VAR_5;
 u8 *VAR_10 = (u8 *) VAR_4;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_0);
 if (VAR_11)
  return VAR_11;

 if (VAR_5 > VAR_7->cfg_size)
  return 0;
 if (VAR_5 + VAR_6 > VAR_7->cfg_size) {
  VAR_8 = VAR_7->cfg_size - VAR_5;
  VAR_6 = VAR_8;
 }

 FUNC_1(VAR_7);

 if ((VAR_5 & 1) && VAR_8) {
  FUNC_3(VAR_7, VAR_5, VAR_10[VAR_5 - VAR_9]);
  VAR_5++;
  VAR_8--;
 }

 if ((VAR_5 & 3) && VAR_8 > 2) {
  u16 VAR_12 = VAR_10[VAR_5 - VAR_9];
  VAR_12 |= (u16) VAR_10[VAR_5 - VAR_9 + 1] << 8;
  FUNC_5(VAR_7, VAR_5, VAR_12);
  VAR_5 += 2;
  VAR_8 -= 2;
 }

 while (VAR_8 > 3) {
  u32 VAR_13 = VAR_10[VAR_5 - VAR_9];
  VAR_13 |= (u32) VAR_10[VAR_5 - VAR_9 + 1] << 8;
  VAR_13 |= (u32) VAR_10[VAR_5 - VAR_9 + 2] << 16;
  VAR_13 |= (u32) VAR_10[VAR_5 - VAR_9 + 3] << 24;
  FUNC_4(VAR_7, VAR_5, VAR_13);
  VAR_5 += 4;
  VAR_8 -= 4;
 }

 if (VAR_8 >= 2) {
  u16 VAR_14 = VAR_10[VAR_5 - VAR_9];
  VAR_14 |= (u16) VAR_10[VAR_5 - VAR_9 + 1] << 8;
  FUNC_5(VAR_7, VAR_5, VAR_14);
  VAR_5 += 2;
  VAR_8 -= 2;
 }

 if (VAR_8) {
  FUNC_3(VAR_7, VAR_5, VAR_10[VAR_5 - VAR_9]);
  VAR_5++;
  --VAR_8;
 }

 FUNC_2(VAR_7);

 return VAR_6;
}
