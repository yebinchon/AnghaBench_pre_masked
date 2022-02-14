
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct tb_switch {int generation; int dma_port; scalar_t__ no_nvm_upgrade; TYPE_1__ config; int safe_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct tb_switch*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tb_switch*) ;
 int FUNC_4 (struct tb_switch*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct tb_switch*) ;
 int FUNC_6 (struct tb_switch*,char*) ;
 int FUNC_7 (struct tb_switch*) ;

__attribute__((used)) static int FUNC_8(struct tb_switch *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 switch (VAR_1->generation) {
 case 3:
  break;

 case 2:

  if (FUNC_5(VAR_1))
   return 0;
  break;

 default:




  if (!VAR_1->safe_mode)
   return 0;
  break;
 }


 if (!FUNC_5(VAR_1) && VAR_1->config.enabled)
  return 0;

 VAR_1->dma_port = FUNC_0(VAR_1);
 if (!VAR_1->dma_port)
  return 0;

 if (VAR_1->no_nvm_upgrade)
  return 0;






 VAR_3 = FUNC_1(VAR_1->dma_port, &VAR_2);
 if (VAR_3 <= 0)
  return VAR_3;


 if (!FUNC_5(VAR_1))
  FUNC_3(VAR_1);

 if (VAR_2) {
  FUNC_6(VAR_1, "switch flash authentication failed\n");
  VAR_3 = FUNC_7(VAR_1);
  if (VAR_3)
   return VAR_3;
  FUNC_4(VAR_1, VAR_2);
 }

 FUNC_6(VAR_1, "power cycling the switch now\n");
 FUNC_2(VAR_1->dma_port);





 return -VAR_0;
}
