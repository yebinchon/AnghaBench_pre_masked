
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int mc; } ;
struct cpsw_priv {int emac_port; struct cpsw_common* cpsw; } ;
struct TYPE_2__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int ale; TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct net_device*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*,int) ;
 struct cpsw_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct cpsw_priv *VAR_5 = FUNC_3(VAR_4);
 struct cpsw_common *VAR_6 = VAR_5->cpsw;
 int VAR_7 = -1;

 if (VAR_6->data.dual_emac)
  VAR_7 = VAR_5->emac_port + 1;

 if (VAR_4->flags & VAR_1) {

  FUNC_2(VAR_4, 1);
  FUNC_1(VAR_6->ale, VAR_0, VAR_7);
  return;
 } else {

  FUNC_2(VAR_4, 0);
 }


 FUNC_1(VAR_6->ale,
         VAR_4->flags & VAR_0, VAR_7);


 FUNC_0(&VAR_4->mc, VAR_4, VAR_2,
          VAR_3);
}
