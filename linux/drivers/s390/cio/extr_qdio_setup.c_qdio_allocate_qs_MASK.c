
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_irq {int output_qs; int input_qs; } ;


 int FUNC_0 (int ,int) ;

int FUNC_1(struct qdio_irq *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->input_qs, VAR_1);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_0->output_qs, VAR_2);
 return VAR_3;
}
