
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclgevf_misc_vector {int vector_irq; scalar_t__ addr; } ;
struct TYPE_2__ {scalar_t__ io_base; } ;
struct hclgevf_dev {int num_msi_left; int num_msi_used; int * vector_irq; scalar_t__* vector_status; TYPE_1__ hw; int pdev; struct hclgevf_misc_vector misc_vector; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t) ;

__attribute__((used)) static void FUNC_1(struct hclgevf_dev *VAR_2)
{
 struct hclgevf_misc_vector *VAR_3 = &VAR_2->misc_vector;

 VAR_3->vector_irq = FUNC_0(VAR_2->pdev,
         VAR_0);
 VAR_3->addr = VAR_2->hw.io_base + VAR_1;

 VAR_2->vector_status[VAR_0] = 0;
 VAR_2->vector_irq[VAR_0] = VAR_3->vector_irq;

 VAR_2->num_msi_left -= 1;
 VAR_2->num_msi_used += 1;
}
