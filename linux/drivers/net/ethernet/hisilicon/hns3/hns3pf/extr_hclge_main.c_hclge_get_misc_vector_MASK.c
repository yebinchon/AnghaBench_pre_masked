
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_misc_vector {scalar_t__ addr; int vector_irq; } ;
struct TYPE_2__ {scalar_t__ io_base; } ;
struct hclge_dev {int num_msi_left; int num_msi_used; scalar_t__* vector_status; TYPE_1__ hw; int pdev; struct hclge_misc_vector misc_vector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hclge_dev *VAR_1)
{
 struct hclge_misc_vector *VAR_2 = &VAR_1->misc_vector;

 VAR_2->vector_irq = FUNC_0(VAR_1->pdev, 0);

 VAR_2->addr = VAR_1->hw.io_base + VAR_0;
 VAR_1->vector_status[0] = 0;

 VAR_1->num_msi_left -= 1;
 VAR_1->num_msi_used += 1;
}
