
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct ab3100 {scalar_t__ chip_id; } ;


 struct ab3100* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0)
{
 struct ab3100 *VAR_1 = FUNC_0(VAR_0->parent);

 return (int)VAR_1->chip_id;
}
