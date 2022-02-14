
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6586x {int version; } ;
struct device {int dummy; } ;


 struct tps6586x* FUNC_0 (struct device*) ;

int FUNC_1(struct device *VAR_0)
{
 struct tps6586x *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->version;
}
