
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
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct rio_dev*,scalar_t__,int) ;
 int FUNC_2 (struct rio_dev*,scalar_t__,int) ;
 int FUNC_3 (struct rio_dev*,scalar_t__,int) ;
 struct rio_dev* FUNC_4 (int ) ;

__attribute__((used)) static ssize_t
FUNC_5(struct file *VAR_1, struct kobject *VAR_2,
   struct bin_attribute *VAR_3,
   char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct rio_dev *VAR_7 = FUNC_4(FUNC_0(VAR_2));
 unsigned int VAR_8 = VAR_6;
 loff_t VAR_9 = VAR_5;
 u8 *VAR_10 = (u8 *) VAR_4;

 if (VAR_5 >= VAR_0)
  return 0;
 if (VAR_5 + VAR_6 > VAR_0) {
  VAR_8 = VAR_0 - VAR_5;
  VAR_6 = VAR_8;
 }

 if ((VAR_5 & 1) && VAR_8) {
  FUNC_3(VAR_7, VAR_5, VAR_10[VAR_5 - VAR_9]);
  VAR_5++;
  VAR_8--;
 }

 if ((VAR_5 & 3) && (VAR_8 > 2)) {
  u16 VAR_11 = VAR_10[VAR_5 - VAR_9 + 1];
  VAR_11 |= (u16) VAR_10[VAR_5 - VAR_9] << 8;
  FUNC_1(VAR_7, VAR_5, VAR_11);
  VAR_5 += 2;
  VAR_8 -= 2;
 }

 while (VAR_8 > 3) {
  u32 VAR_12 = VAR_10[VAR_5 - VAR_9 + 3];
  VAR_12 |= (u32) VAR_10[VAR_5 - VAR_9 + 2] << 8;
  VAR_12 |= (u32) VAR_10[VAR_5 - VAR_9 + 1] << 16;
  VAR_12 |= (u32) VAR_10[VAR_5 - VAR_9] << 24;
  FUNC_2(VAR_7, VAR_5, VAR_12);
  VAR_5 += 4;
  VAR_8 -= 4;
 }

 if (VAR_8 >= 2) {
  u16 VAR_13 = VAR_10[VAR_5 - VAR_9 + 1];
  VAR_13 |= (u16) VAR_10[VAR_5 - VAR_9] << 8;
  FUNC_1(VAR_7, VAR_5, VAR_13);
  VAR_5 += 2;
  VAR_8 -= 2;
 }

 if (VAR_8) {
  FUNC_3(VAR_7, VAR_5, VAR_10[VAR_5 - VAR_9]);
  VAR_5++;
  --VAR_8;
 }

 return VAR_6;
}
