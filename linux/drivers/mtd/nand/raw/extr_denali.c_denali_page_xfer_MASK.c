
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int cur_cs; } ;
struct denali_controller {scalar_t__ dma_avail; } ;


 int FUNC_0 (struct denali_controller*,void*,size_t,int,int) ;
 int FUNC_1 (struct denali_controller*,void*,size_t,int,int) ;
 int FUNC_2 (struct nand_chip*,int ) ;
 struct denali_controller* FUNC_3 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_0, void *VAR_1, size_t VAR_2,
       int VAR_3, bool VAR_4)
{
 struct denali_controller *VAR_5 = FUNC_3(VAR_0);

 FUNC_2(VAR_0, VAR_0->cur_cs);

 if (VAR_5->dma_avail)
  return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
