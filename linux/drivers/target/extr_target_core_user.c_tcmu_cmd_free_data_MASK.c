
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct tcmu_dev {int data_bitmap; } ;
struct tcmu_cmd {int * dbi; struct tcmu_dev* tcmu_dev; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tcmu_cmd *VAR_0, uint32_t VAR_1)
{
 struct tcmu_dev *VAR_2 = VAR_0->tcmu_dev;
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_0->dbi[VAR_3], VAR_2->data_bitmap);
}
