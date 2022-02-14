
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int owner; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 struct tun_struct* FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct tun_struct *VAR_3 = FUNC_2(FUNC_4(VAR_0));
 return FUNC_5(VAR_3->owner)?
  FUNC_3(VAR_2, "%u\n",
   FUNC_1(FUNC_0(), VAR_3->owner)):
  FUNC_3(VAR_2, "-1\n");
}
