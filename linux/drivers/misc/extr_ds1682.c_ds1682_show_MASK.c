
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sensor_device_attribute_2 {scalar_t__ index; int nr; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,int,int *) ;
 unsigned long long FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,unsigned long long) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2, struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_5(VAR_3);
 struct i2c_client *VAR_6 = FUNC_4(VAR_2);
 unsigned long long VAR_7, VAR_8;
 __le32 VAR_9 = 0;
 int VAR_10;

 FUNC_0(VAR_2, "ds1682_show() called on %s\n", VAR_3->attr.name);


 VAR_10 = FUNC_1(VAR_6, VAR_5->index, VAR_5->nr,
        (u8 *)&VAR_9);
 if (VAR_10 < 0)
  return -VAR_1;

 VAR_7 = FUNC_2(VAR_9);

 if (VAR_5->index == VAR_0) {
  int VAR_11 = 5;


  do {
   VAR_10 = FUNC_1(VAR_6, VAR_5->index,
          VAR_5->nr,
          (u8 *)&VAR_9);
   if (VAR_10 < 0 || VAR_11 <= 0)
    return -VAR_1;

   VAR_8 = VAR_7;
   VAR_7 = FUNC_2(VAR_9);
   VAR_11--;
  } while (VAR_7 != VAR_8 && VAR_7 != (VAR_8 + 1));
 }





 return FUNC_3(VAR_4, "%llu\n", (VAR_5->nr == 4) ? (VAR_7 * 250) : VAR_7);
}
