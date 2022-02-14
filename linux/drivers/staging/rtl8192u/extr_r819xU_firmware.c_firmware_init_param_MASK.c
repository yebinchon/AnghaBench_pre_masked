
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {TYPE_1__* pFirmware; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int cmdpacket_frag_threshold; } ;
typedef TYPE_1__ rt_firmware ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_1(VAR_1);
 rt_firmware *VAR_3 = VAR_2->pFirmware;

 VAR_3->cmdpacket_frag_threshold = FUNC_0(VAR_0);
}
