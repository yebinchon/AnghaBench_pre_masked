
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tx_pending_frames; } ;
union dpni_statistics {TYPE_1__ page_6; } ;
struct dpaa2_eth_priv {int mc_token; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dpaa2_eth_priv*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,union dpni_statistics*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct dpaa2_eth_priv *VAR_2)
{
 union dpni_statistics VAR_3;
 int VAR_4 = 10;
 int VAR_5;

 if (FUNC_0(VAR_2, VAR_0,
       VAR_1) < 0)
  goto out;

 do {
  VAR_5 = FUNC_1(VAR_2->mc_io, 0, VAR_2->mc_token, 6,
       &VAR_3);
  if (VAR_5)
   goto out;
  if (VAR_3.page_6.tx_pending_frames == 0)
   return;
 } while (--VAR_4);

out:
 FUNC_2(500);
}
