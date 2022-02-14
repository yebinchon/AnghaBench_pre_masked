
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int group; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct tun_struct* FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct tun_struct *VAR_3 = FUNC_3(FUNC_5(VAR_0));
 return FUNC_2(VAR_3->group) ?
  FUNC_4(VAR_2, "%u\n",
   FUNC_1(FUNC_0(), VAR_3->group)):
  FUNC_4(VAR_2, "-1\n");
}
