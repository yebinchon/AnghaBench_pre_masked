
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct wilc_vif {TYPE_1__ ack_filter; struct wilc* wilc; } ;
struct wilc {int txq_entries; scalar_t__ quit; } ;
struct txq_entry_t {void (* tx_complete_func ) (void*,int) ;int ack_idx; struct wilc_vif* vif; void* priv; int buffer_size; int * buffer; int type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct txq_entry_t* FUNC_0 (int,int ) ;
 struct wilc_vif* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct txq_entry_t*) ;
 int FUNC_3 (struct net_device*,struct txq_entry_t*) ;

int FUNC_4(struct net_device *VAR_3, void *VAR_4, u8 *VAR_5,
         u32 VAR_6,
         void (*VAR_7)(void *, int))
{
 struct txq_entry_t *VAR_8;
 struct wilc_vif *VAR_9 = FUNC_1(VAR_3);
 struct wilc *VAR_10;

 VAR_10 = VAR_9->wilc;

 if (VAR_10->quit)
  return 0;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_0);

 if (!VAR_8)
  return 0;
 VAR_8->type = VAR_2;
 VAR_8->buffer = VAR_5;
 VAR_8->buffer_size = VAR_6;
 VAR_8->tx_complete_func = VAR_7;
 VAR_8->priv = VAR_4;
 VAR_8->vif = VAR_9;

 VAR_8->ack_idx = VAR_1;
 if (VAR_9->ack_filter.enabled)
  FUNC_2(VAR_3, VAR_8);
 FUNC_3(VAR_3, VAR_8);
 return VAR_10->txq_entries;
}
