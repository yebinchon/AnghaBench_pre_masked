
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_platform_data {int ono; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 struct max8997_platform_data* FUNC_0 (int ) ;
 int VAR_1 ;
 struct max8997_platform_data* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static struct max8997_platform_data *FUNC_3(
     struct device *VAR_2)
{
 struct max8997_platform_data *VAR_3;

 VAR_3 = FUNC_1(VAR_2, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_3->ono = FUNC_2(VAR_2->of_node, 1);

 return VAR_3;
}
