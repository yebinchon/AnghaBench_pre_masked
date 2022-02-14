
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct iudma_ch_cfg {int max_pkt_hs; int max_pkt_fs; int ep_num; int dir; int ep_type; } ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct bcm63xx_udc {int cfg; int iface; int alt_iface; TYPE_3__* bep; TYPE_2__* iudma; TYPE_1__ gadget; } ;
struct TYPE_6__ {int ep; } ;
struct TYPE_5__ {int max_pkt; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct iudma_ch_cfg* VAR_11 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct bcm63xx_udc*,size_t,int ) ;

__attribute__((used)) static void FUNC_3(struct bcm63xx_udc *VAR_12)
{
 u32 VAR_13, VAR_14;

 FUNC_2(VAR_12, VAR_8, VAR_9);

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  const struct iudma_ch_cfg *VAR_15 = &VAR_11[VAR_14];
  int VAR_16 = VAR_12->gadget.speed == VAR_10 ?
         VAR_15->max_pkt_hs : VAR_15->max_pkt_fs;
  int VAR_17 = VAR_15->ep_num;

  VAR_12->iudma[VAR_14].max_pkt = VAR_16;

  if (VAR_17 < 0)
   continue;
  FUNC_1(&VAR_12->bep[VAR_17].ep, VAR_16);

  VAR_13 = (VAR_17 << VAR_5) |
        (VAR_15->dir << VAR_3) |
        (VAR_15->ep_type << VAR_7) |
        (VAR_12->cfg << VAR_2) |
        (VAR_12->iface << VAR_4) |
        (VAR_12->alt_iface << VAR_1) |
        (VAR_16 << VAR_6);
  FUNC_2(VAR_12, VAR_13, FUNC_0(VAR_17));
 }
}
