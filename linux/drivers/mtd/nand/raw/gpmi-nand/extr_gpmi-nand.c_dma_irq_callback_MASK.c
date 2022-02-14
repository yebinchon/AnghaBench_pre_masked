
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int dummy; } ;
struct gpmi_nand_data {struct completion dma_done; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct gpmi_nand_data *VAR_1 = VAR_0;
 struct completion *VAR_2 = &VAR_1->dma_done;

 FUNC_0(VAR_2);
}
