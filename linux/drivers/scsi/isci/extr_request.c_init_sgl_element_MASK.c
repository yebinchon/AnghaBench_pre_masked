
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scu_sgl_element {scalar_t__ address_modifier; int address_lower; int address_upper; int length; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct scu_sgl_element *VAR_0, struct scatterlist *VAR_1)
{
 VAR_0->length = FUNC_2(VAR_1);
 VAR_0->address_upper = FUNC_3(FUNC_1(VAR_1));
 VAR_0->address_lower = FUNC_0(FUNC_1(VAR_1));
 VAR_0->address_modifier = 0;
}
