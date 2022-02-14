
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zorro_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,unsigned long,unsigned long,int ) ;
 struct zorro_dev* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct zorro_dev*) ;
 int FUNC_3 (struct zorro_dev*) ;
 scalar_t__ FUNC_4 (struct zorro_dev*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct zorro_dev *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "0x%08lx 0x%08lx 0x%08lx\n",
         (unsigned long)FUNC_4(VAR_3),
         (unsigned long)FUNC_2(VAR_3),
         FUNC_3(VAR_3));
}
