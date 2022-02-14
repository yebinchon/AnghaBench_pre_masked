
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iudma_ch_cfg {int n_fifo_slots; int max_pkt_hs; int max_pkt_fs; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct bcm63xx_udc {TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct bcm63xx_udc*,int) ;
 struct iudma_ch_cfg* VAR_10 ;
 int FUNC_1 (struct bcm63xx_udc*,int ) ;
 int FUNC_2 (struct bcm63xx_udc*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct bcm63xx_udc *VAR_11)
{
 int VAR_12 = VAR_11->gadget.speed == VAR_9;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;


 VAR_15 = VAR_16 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13 += 2) {
  const struct iudma_ch_cfg *VAR_17 = &VAR_10[VAR_13];
  const struct iudma_ch_cfg *VAR_18 = &VAR_10[VAR_13 + 1];

  FUNC_0(VAR_11, VAR_13 >> 1);

  VAR_14 = (VAR_15 << VAR_3) |
   ((VAR_15 + VAR_17->n_fifo_slots - 1) <<
    VAR_1);
  VAR_15 += VAR_17->n_fifo_slots;
  FUNC_2(VAR_11, VAR_14, VAR_2);
  FUNC_2(VAR_11,
       VAR_12 ? VAR_17->max_pkt_hs : VAR_17->max_pkt_fs,
       VAR_4);

  VAR_14 = (VAR_16 << VAR_7) |
   ((VAR_16 + VAR_18->n_fifo_slots - 1) <<
    VAR_5);
  VAR_16 += VAR_18->n_fifo_slots;
  FUNC_2(VAR_11, VAR_14, VAR_6);
  FUNC_2(VAR_11,
       VAR_12 ? VAR_18->max_pkt_hs : VAR_18->max_pkt_fs,
       VAR_8);

  FUNC_1(VAR_11, VAR_8);
 }
}
