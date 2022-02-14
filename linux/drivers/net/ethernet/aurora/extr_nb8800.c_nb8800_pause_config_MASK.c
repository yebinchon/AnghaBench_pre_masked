
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int pause; int asym_pause; int link; } ;
struct net_device {struct phy_device* phydev; } ;
struct nb8800_priv {int pause_rx; int pause_tx; int napi; scalar_t__ pause_aneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct nb8800_priv*,int ,int ,int) ;
 int FUNC_4 (struct nb8800_priv*,int ,int,int) ;
 int FUNC_5 (struct nb8800_priv*,int ) ;
 int FUNC_6 (struct net_device*) ;
 struct nb8800_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_4)
{
 struct nb8800_priv *VAR_5 = FUNC_7(VAR_4);
 struct phy_device *VAR_6 = VAR_4->phydev;
 u32 VAR_7;

 if (VAR_5->pause_aneg) {
  if (!VAR_6 || !VAR_6->link)
   return;

  VAR_5->pause_rx = VAR_6->pause;
  VAR_5->pause_tx = VAR_6->pause ^ VAR_6->asym_pause;
 }

 FUNC_3(VAR_5, VAR_1, VAR_3, VAR_5->pause_rx);

 VAR_7 = FUNC_5(VAR_5, VAR_0);
 if (!!(VAR_7 & VAR_2) == VAR_5->pause_tx)
  return;

 if (FUNC_8(VAR_4)) {
  FUNC_0(&VAR_5->napi);
  FUNC_9(VAR_4);
  FUNC_2(VAR_4);
  FUNC_4(VAR_5, VAR_0, VAR_2, VAR_5->pause_tx);
  FUNC_6(VAR_4);
  FUNC_10(VAR_4);
  FUNC_1(&VAR_5->napi);
 } else {
  FUNC_4(VAR_5, VAR_0, VAR_2, VAR_5->pause_tx);
 }
}
