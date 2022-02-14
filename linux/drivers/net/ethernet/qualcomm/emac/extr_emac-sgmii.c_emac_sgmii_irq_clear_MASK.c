
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct emac_sgmii {scalar_t__ base; } ;
struct emac_adapter {TYPE_1__* netdev; struct emac_sgmii phy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct emac_adapter *VAR_6, u8 VAR_7)
{
 struct emac_sgmii *VAR_8 = &VAR_6->phy;
 u8 VAR_9;

 FUNC_3(VAR_7, VAR_8->base + VAR_1);
 FUNC_3(VAR_4, VAR_8->base + VAR_3);

 FUNC_2();





 if (FUNC_1(VAR_8->base +
          VAR_2,
          VAR_9, !(VAR_9 & VAR_7), 1,
          VAR_5)) {
  FUNC_0("%s: failed to clear SGMII irq: status:0x%x bits:0x%x\n",
        VAR_6->netdev->name, VAR_9, VAR_7);
  return -VAR_0;
 }


 FUNC_3(0, VAR_8->base + VAR_3);
 FUNC_3(0, VAR_8->base + VAR_1);


 FUNC_2();

 return 0;
}
