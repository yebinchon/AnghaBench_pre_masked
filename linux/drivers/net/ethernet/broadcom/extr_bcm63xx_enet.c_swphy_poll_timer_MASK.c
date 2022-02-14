
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct bcm_enet_priv {unsigned int num_ports; int* sw_port_link; TYPE_2__ swphy_poll; TYPE_1__* pdev; struct bcm63xx_enetsw_port* used_ports; } ;
struct bcm63xx_enetsw_port {int name; int phy_id; scalar_t__ bypass_link; int used; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct bcm_enet_priv*,int,int ,int ) ;
 int FUNC_5 (int *,char*,int ,...) ;
 int FUNC_6 (struct bcm_enet_priv*,int,int ) ;
 struct bcm_enet_priv* FUNC_7 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_22 ;
 int FUNC_8 (int) ;
 struct bcm_enet_priv* VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_25)
{
 struct bcm_enet_priv *VAR_26 = FUNC_7(VAR_26, VAR_25, VAR_24);
 unsigned int VAR_27;

 for (VAR_27 = 0; VAR_27 < VAR_26->num_ports; VAR_27++) {
  struct bcm63xx_enetsw_port *VAR_28;
  int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
  int VAR_37 = FUNC_3(VAR_27);
  u8 VAR_38;

  VAR_28 = &VAR_26->used_ports[VAR_27];
  if (!VAR_28->used)
   continue;

  if (VAR_28->bypass_link)
   continue;


  for (VAR_30 = 0; VAR_30 < 2; VAR_30++)
   VAR_29 = FUNC_4(VAR_26, VAR_37,
         VAR_28->phy_id, VAR_18);

  if (VAR_29 == 0xffff)
   continue;

  VAR_31 = (VAR_29 & VAR_6) ? 1 : 0;
  if (!(VAR_31 ^ VAR_26->sw_port_link[VAR_27]))
   continue;

  VAR_26->sw_port_link[VAR_27] = VAR_31;


  if (!VAR_31) {
   FUNC_5(&VAR_26->pdev->dev, "link DOWN on %s\n",
     VAR_28->name);
   FUNC_6(VAR_26, VAR_10,
          FUNC_0(VAR_27));
   FUNC_6(VAR_26, VAR_12 |
          VAR_13,
          FUNC_1(VAR_27));
   continue;
  }

  VAR_32 = FUNC_4(VAR_26, VAR_37,
       VAR_28->phy_id, VAR_17);

  VAR_33 = FUNC_4(VAR_26, VAR_37, VAR_28->phy_id,
        VAR_20);


  VAR_36 = FUNC_8(VAR_33 & VAR_32);
  VAR_35 = (VAR_36 & VAR_4) ? 1 : 0;

  if (VAR_36 & (VAR_2 | VAR_3))
   VAR_34 = 100;
  else
   VAR_34 = 10;

  if (VAR_29 & VAR_5) {
   VAR_32 = FUNC_4(VAR_26, VAR_37,
      VAR_28->phy_id, VAR_19);

   VAR_33 = FUNC_4(VAR_26, VAR_37,
      VAR_28->phy_id, VAR_21);

   if (VAR_32 & (VAR_0 | VAR_1)
     && VAR_33 & (VAR_15 | VAR_16)) {
    VAR_34 = 1000;
    VAR_35 = (VAR_33 & VAR_15);
   }
  }

  FUNC_5(&VAR_26->pdev->dev,
    "link UP on %s, %dMbps, %s-duplex\n",
    VAR_28->name, VAR_34, VAR_35 ? "full" : "half");

  VAR_38 = VAR_10 |
   VAR_11;

  if (VAR_34 == 1000)
   VAR_38 |= VAR_7;
  else if (VAR_34 == 100)
   VAR_38 |= VAR_8;
  if (VAR_35)
   VAR_38 |= VAR_9;

  FUNC_6(VAR_26, VAR_38, FUNC_0(VAR_27));
  FUNC_6(VAR_26, 0, FUNC_1(VAR_27));
 }

 VAR_26->swphy_poll.expires = VAR_22 + VAR_14;
 FUNC_2(&VAR_26->swphy_poll);
}
