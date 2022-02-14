
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_dev {int dummy; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct rio_dev*,unsigned int,int*) ;
 int FUNC_3 (struct rio_dev*,unsigned int,int*) ;
 int FUNC_4 (struct rio_dev*,unsigned int,int*) ;
 struct rio_dev* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct file *VAR_2, struct kobject *VAR_3,
  struct bin_attribute *VAR_4,
  char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct rio_dev *VAR_8 = FUNC_5(FUNC_1(VAR_3));
 unsigned int VAR_9 = 0x100;
 loff_t VAR_10 = VAR_6;
 u8 *VAR_11 = (u8 *) VAR_5;


 if (FUNC_0(VAR_0))
  VAR_9 = VAR_1;

 if (VAR_6 >= VAR_9)
  return 0;
 if (VAR_6 + VAR_7 > VAR_9) {
  VAR_9 -= VAR_6;
  VAR_7 = VAR_9;
 } else {
  VAR_9 = VAR_7;
 }

 if ((VAR_6 & 1) && VAR_9) {
  u8 VAR_12;
  FUNC_4(VAR_8, VAR_6, &VAR_12);
  VAR_11[VAR_6 - VAR_10] = VAR_12;
  VAR_6++;
  VAR_9--;
 }

 if ((VAR_6 & 3) && VAR_9 > 2) {
  u16 VAR_13;
  FUNC_2(VAR_8, VAR_6, &VAR_13);
  VAR_11[VAR_6 - VAR_10] = (VAR_13 >> 8) & 0xff;
  VAR_11[VAR_6 - VAR_10 + 1] = VAR_13 & 0xff;
  VAR_6 += 2;
  VAR_9 -= 2;
 }

 while (VAR_9 > 3) {
  u32 VAR_14;
  FUNC_3(VAR_8, VAR_6, &VAR_14);
  VAR_11[VAR_6 - VAR_10] = (VAR_14 >> 24) & 0xff;
  VAR_11[VAR_6 - VAR_10 + 1] = (VAR_14 >> 16) & 0xff;
  VAR_11[VAR_6 - VAR_10 + 2] = (VAR_14 >> 8) & 0xff;
  VAR_11[VAR_6 - VAR_10 + 3] = VAR_14 & 0xff;
  VAR_6 += 4;
  VAR_9 -= 4;
 }

 if (VAR_9 >= 2) {
  u16 VAR_15;
  FUNC_2(VAR_8, VAR_6, &VAR_15);
  VAR_11[VAR_6 - VAR_10] = (VAR_15 >> 8) & 0xff;
  VAR_11[VAR_6 - VAR_10 + 1] = VAR_15 & 0xff;
  VAR_6 += 2;
  VAR_9 -= 2;
 }

 if (VAR_9 > 0) {
  u8 VAR_16;
  FUNC_4(VAR_8, VAR_6, &VAR_16);
  VAR_11[VAR_6 - VAR_10] = VAR_16;
  VAR_6++;
  --VAR_9;
 }

 return VAR_7;
}
