
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_rx_le {int opcode; scalar_t__ ctrl; int addr; } ;
struct sky2_port {size_t port; TYPE_1__* netdev; int hw; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int * VAR_7 ;
 struct sky2_rx_le* FUNC_2 (struct sky2_port*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sky2_port *VAR_8)
{
 struct sky2_rx_le *VAR_9 = FUNC_2(VAR_8);

 VAR_9->addr = FUNC_1((VAR_2 << 16) | VAR_2);
 VAR_9->ctrl = 0;
 VAR_9->opcode = VAR_5 | VAR_3;

 FUNC_3(VAR_8->hw,
       FUNC_0(VAR_7[VAR_8->port], VAR_6),
       (VAR_8->netdev->features & VAR_4)
       ? VAR_1 : VAR_0);
}
