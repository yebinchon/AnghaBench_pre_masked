
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_handle_int {unsigned int irq; scalar_t__ handle; } ;


 struct intc_handle_int* FUNC_0 (struct intc_handle_int*,struct intc_handle_int*,unsigned int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct intc_handle_int *FUNC_1(struct intc_handle_int *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 struct intc_handle_int VAR_4;

 VAR_4.irq = VAR_3;
 VAR_4.handle = 0;

 return FUNC_0(&VAR_4, VAR_1, VAR_2, sizeof(*VAR_1), VAR_0);
}
