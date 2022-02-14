
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_rx_pkt {int dummy; } ;
struct il_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ payload; } ;
struct il_device_cmd {TYPE_1__ cmd; } ;
struct il_addsta_cmd {int dummy; } ;


 int FUNC_0 (struct il_priv*,struct il_addsta_cmd*,struct il_rx_pkt*,int) ;

__attribute__((used)) static void
FUNC_1(struct il_priv *VAR_0, struct il_device_cmd *VAR_1,
      struct il_rx_pkt *VAR_2)
{
 struct il_addsta_cmd *VAR_3 = (struct il_addsta_cmd *)VAR_1->cmd.payload;

 FUNC_0(VAR_0, VAR_3, VAR_2, 0);

}
