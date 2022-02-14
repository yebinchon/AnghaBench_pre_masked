
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_dev {unsigned int cfg_size; scalar_t__ hdr_type; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct file*,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_5 (struct pci_dev*,unsigned int,int*) ;
 int FUNC_6 (struct pci_dev*,unsigned int,int*) ;
 struct pci_dev* FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct file *VAR_3, struct kobject *VAR_4,
          struct bin_attribute *VAR_5, char *VAR_6,
          loff_t VAR_7, size_t VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_7(FUNC_1(VAR_4));
 unsigned int VAR_10 = 64;
 loff_t VAR_11 = VAR_7;
 u8 *VAR_12 = (u8 *) VAR_6;


 if (FUNC_0(VAR_3, &VAR_2, VAR_0))
  VAR_10 = VAR_9->cfg_size;
 else if (VAR_9->hdr_type == VAR_1)
  VAR_10 = 128;

 if (VAR_7 > VAR_10)
  return 0;
 if (VAR_7 + VAR_8 > VAR_10) {
  VAR_10 -= VAR_7;
  VAR_8 = VAR_10;
 } else {
  VAR_10 = VAR_8;
 }

 FUNC_2(VAR_9);

 if ((VAR_7 & 1) && VAR_10) {
  u8 VAR_13;
  FUNC_4(VAR_9, VAR_7, &VAR_13);
  VAR_12[VAR_7 - VAR_11] = VAR_13;
  VAR_7++;
  VAR_10--;
 }

 if ((VAR_7 & 3) && VAR_10 > 2) {
  u16 VAR_14;
  FUNC_6(VAR_9, VAR_7, &VAR_14);
  VAR_12[VAR_7 - VAR_11] = VAR_14 & 0xff;
  VAR_12[VAR_7 - VAR_11 + 1] = (VAR_14 >> 8) & 0xff;
  VAR_7 += 2;
  VAR_10 -= 2;
 }

 while (VAR_10 > 3) {
  u32 VAR_15;
  FUNC_5(VAR_9, VAR_7, &VAR_15);
  VAR_12[VAR_7 - VAR_11] = VAR_15 & 0xff;
  VAR_12[VAR_7 - VAR_11 + 1] = (VAR_15 >> 8) & 0xff;
  VAR_12[VAR_7 - VAR_11 + 2] = (VAR_15 >> 16) & 0xff;
  VAR_12[VAR_7 - VAR_11 + 3] = (VAR_15 >> 24) & 0xff;
  VAR_7 += 4;
  VAR_10 -= 4;
 }

 if (VAR_10 >= 2) {
  u16 VAR_16;
  FUNC_6(VAR_9, VAR_7, &VAR_16);
  VAR_12[VAR_7 - VAR_11] = VAR_16 & 0xff;
  VAR_12[VAR_7 - VAR_11 + 1] = (VAR_16 >> 8) & 0xff;
  VAR_7 += 2;
  VAR_10 -= 2;
 }

 if (VAR_10 > 0) {
  u8 VAR_17;
  FUNC_4(VAR_9, VAR_7, &VAR_17);
  VAR_12[VAR_7 - VAR_11] = VAR_17;
  VAR_7++;
  --VAR_10;
 }

 FUNC_3(VAR_9);

 return VAR_8;
}
