
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int dummy; } ;
struct device {int parent; } ;


 int FUNC_0 (struct enclosure_device*) ;
 int FUNC_1 (int ) ;
 struct enclosure_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct enclosure_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0->parent);
 FUNC_0(VAR_1);
}
