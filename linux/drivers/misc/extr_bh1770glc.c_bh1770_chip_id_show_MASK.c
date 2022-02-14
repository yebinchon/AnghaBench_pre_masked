
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {char* chipname; int revision; } ;
typedef int ssize_t ;


 struct bh1770_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1, char *VAR_2)
{
 struct bh1770_chip *VAR_3 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "%s rev %d\n", VAR_3->chipname, VAR_3->revision);
}
