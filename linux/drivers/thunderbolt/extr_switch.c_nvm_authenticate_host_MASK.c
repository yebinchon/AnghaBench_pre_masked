
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int dma_port; int tb; int safe_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tb_switch *VAR_1)
{
 int VAR_2;






 if (!VAR_1->safe_mode) {
  VAR_2 = FUNC_2(VAR_1->tb);
  if (VAR_2)
   return VAR_2;




  VAR_2 = FUNC_0(VAR_1->dma_port);
  return VAR_2 == -VAR_0 ? 0 : VAR_2;
 }





 FUNC_1(VAR_1->dma_port);
 return 0;
}
