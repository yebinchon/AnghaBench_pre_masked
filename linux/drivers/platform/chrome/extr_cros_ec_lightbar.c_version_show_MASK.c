
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cros_ec_dev {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cros_ec_dev*,int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,int ,int ) ;
 struct cros_ec_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 uint32_t VAR_5 = 0, VAR_6 = 0;
 struct cros_ec_dev *VAR_7 = FUNC_3(VAR_2);
 int VAR_8;

 VAR_8 = FUNC_1();
 if (VAR_8)
  return VAR_8;


 if (!FUNC_0(VAR_7, &VAR_5, &VAR_6))
  return -VAR_0;

 return FUNC_2(VAR_4, VAR_1, "%d %d\n", VAR_5, VAR_6);
}
