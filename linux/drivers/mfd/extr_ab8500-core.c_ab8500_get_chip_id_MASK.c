
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int parent; } ;
struct ab8500 {scalar_t__ chip_id; } ;


 int VAR_0 ;
 struct ab8500* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1)
{
 struct ab8500 *VAR_2;

 if (!VAR_1)
  return -VAR_0;
 VAR_2 = FUNC_0(VAR_1->parent);
 return VAR_2 ? (int)VAR_2->chip_id : -VAR_0;
}
