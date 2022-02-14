
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct i2c_client {int dummy; } ;
struct file {int dummy; } ;
struct device {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_client*,char*,int,size_t) ;
 int FUNC_3 () ;
 int * VAR_5 ;
 int FUNC_4 (int ,int) ;
 struct device* FUNC_5 (struct kobject*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static ssize_t FUNC_10(struct file *VAR_6, struct kobject *VAR_7,
      struct bin_attribute *VAR_8,
      char *VAR_9, loff_t VAR_10, size_t VAR_11)
{
 struct device *VAR_12 = FUNC_5(VAR_7);
 struct i2c_client *VAR_13 = FUNC_8(VAR_12);
 size_t VAR_14 = VAR_11;
 int VAR_15;

 if (FUNC_9(!VAR_11))
  return VAR_11;

 VAR_15 = VAR_10 >> VAR_0;
 if (FUNC_9(VAR_15 > 1))
  return 0;
 VAR_10 &= (1 << VAR_0) - 1;





 FUNC_6(&VAR_3);

 while (VAR_11) {
  int VAR_16;


  if (VAR_15 != VAR_4) {

   VAR_16 = FUNC_4(VAR_5[VAR_15],
            0x00);
   if (VAR_16 == -VAR_2) {






    if (FUNC_3() == VAR_15)
     VAR_16 = 0;
   }
   if (VAR_16 < 0) {
    FUNC_1(VAR_12, "Failed to select page %d (%d)\n",
     VAR_15, VAR_16);
    FUNC_7(&VAR_3);
    return VAR_16;
   }
   FUNC_0(VAR_12, "Selected page %d\n", VAR_15);
   VAR_4 = VAR_15;
  }

  VAR_16 = FUNC_2(VAR_13, VAR_9, VAR_10, VAR_11);
  if (VAR_16 < 0) {
   FUNC_7(&VAR_3);
   return VAR_16;
  }
  VAR_9 += VAR_16;
  VAR_10 += VAR_16;
  VAR_11 -= VAR_16;

  if (VAR_10 == VAR_1) {
   VAR_15++;
   VAR_10 = 0;
  }
 }

 FUNC_7(&VAR_3);

 return VAR_14;
}
