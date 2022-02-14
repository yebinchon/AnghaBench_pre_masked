
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_private {int irq_enabled; TYPE_1__* cd; scalar_t__ duplex; } ;
struct net_device {int mtu; int features; } ;
struct TYPE_2__ {int (* soft_reset ) (struct net_device*) ;int fdr_value; int trscer_err_mask; int fcftr_value; int eesipr_value; int ecsr_value; int ecsipr_value; scalar_t__ tpauser; scalar_t__ mpr; scalar_t__ apr; int (* set_rate ) (struct net_device*) ;int no_trimd; scalar_t__ bculr; scalar_t__ nbst; scalar_t__ hw_swap; scalar_t__ rpadir; scalar_t__ rmiimode; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_35)
{
 struct sh_eth_private *VAR_36 = FUNC_0(VAR_35);
 int VAR_37;


 VAR_37 = VAR_36->cd->soft_reset(VAR_35);
 if (VAR_37)
  return VAR_37;

 if (VAR_36->cd->rmiimode)
  FUNC_3(VAR_35, 0x1, VAR_27);


 FUNC_2(VAR_35);
 if (VAR_36->cd->rpadir)
  FUNC_3(VAR_35, VAR_23 << 16, VAR_28);


 FUNC_3(VAR_35, 0, VAR_15);






  FUNC_3(VAR_35, 0, VAR_10);


 FUNC_3(VAR_35, VAR_36->cd->fdr_value, VAR_20);
 FUNC_3(VAR_35, 0, VAR_29);


 FUNC_3(VAR_35, VAR_26, VAR_25);

 FUNC_3(VAR_35, VAR_36->cd->trscer_err_mask, VAR_33);


 if (VAR_36->cd->nbst)
  FUNC_1(VAR_35, VAR_10, VAR_12, VAR_12);


 if (VAR_36->cd->bculr)
  FUNC_3(VAR_35, 0x800, VAR_1);

 FUNC_3(VAR_35, VAR_36->cd->fcftr_value, VAR_19);

 if (!VAR_36->cd->no_trimd)
  FUNC_3(VAR_35, 0, VAR_32);


 FUNC_3(VAR_35, VAR_35->mtu + VAR_18 + VAR_34 + VAR_17,
       VAR_24);

 FUNC_1(VAR_35, VAR_16, 0, 0);
 VAR_36->irq_enabled = 1;
 FUNC_3(VAR_35, VAR_36->cd->eesipr_value, VAR_15);


 FUNC_3(VAR_35, VAR_7 | (VAR_36->duplex ? VAR_3 : 0) |
       (VAR_35->features & VAR_22 ? VAR_4 : 0) |
       VAR_6 | VAR_5, VAR_2);

 if (VAR_36->cd->set_rate)
  VAR_36->cd->set_rate(VAR_35);


 FUNC_3(VAR_35, VAR_36->cd->ecsr_value, VAR_9);


 FUNC_3(VAR_35, VAR_36->cd->ecsipr_value, VAR_8);


 FUNC_6(VAR_35);


 if (VAR_36->cd->apr)
  FUNC_3(VAR_35, 1, VAR_0);
 if (VAR_36->cd->mpr)
  FUNC_3(VAR_35, 1, VAR_21);
 if (VAR_36->cd->tpauser)
  FUNC_3(VAR_35, VAR_31, VAR_30);


 FUNC_3(VAR_35, VAR_14, VAR_13);

 return VAR_37;
}
