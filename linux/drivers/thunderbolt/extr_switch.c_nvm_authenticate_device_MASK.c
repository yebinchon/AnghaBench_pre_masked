
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tb_switch {int dma_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct tb_switch*,scalar_t__) ;
 int FUNC_5 (struct tb_switch*,char*) ;
 int FUNC_6 (struct tb_switch*,char*) ;

__attribute__((used)) static int FUNC_7(struct tb_switch *VAR_1)
{
 int VAR_2, VAR_3 = 10;

 VAR_2 = FUNC_0(VAR_1->dma_port);
 if (VAR_2 && VAR_2 != -VAR_0)
  return VAR_2;







 do {
  u32 VAR_4;

  VAR_2 = FUNC_1(VAR_1->dma_port, &VAR_4);
  if (VAR_2 < 0 && VAR_2 != -VAR_0)
   return VAR_2;
  if (VAR_2 > 0) {
   if (VAR_4) {
    FUNC_6(VAR_1, "failed to authenticate NVM\n");
    FUNC_4(VAR_1, VAR_4);
   }

   FUNC_5(VAR_1, "power cycling the switch now\n");
   FUNC_2(VAR_1->dma_port);
   return 0;
  }

  FUNC_3(500);
 } while (--VAR_3);

 return -VAR_0;
}
