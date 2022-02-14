
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {size_t prox_rate; } ;
typedef int ssize_t ;


 struct bh1770_chip* FUNC_0 (struct device*) ;
 int* VAR_0 ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct bh1770_chip *VAR_4 = FUNC_0(VAR_1);
 return FUNC_1(VAR_3, "%d\n", VAR_0[VAR_4->prox_rate]);
}
