
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclgevf_dev {int num_msi; int* vector_irq; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hclgevf_dev *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_msi; VAR_3++)
  if (VAR_2 == VAR_1->vector_irq[VAR_3])
   return VAR_3;

 return -VAR_0;
}
