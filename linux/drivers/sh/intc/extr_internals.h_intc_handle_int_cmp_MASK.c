
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_handle_int {int irq; } ;



__attribute__((used)) static inline int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct intc_handle_int *VAR_2 = VAR_0;
 const struct intc_handle_int *VAR_3 = VAR_1;

 return VAR_2->irq - VAR_3->irq;
}
