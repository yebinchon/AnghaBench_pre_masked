
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wilc_vif {int ndev; struct wilc* wilc; } ;
struct wilc {int cfg_event; scalar_t__ quit; } ;
struct txq_entry_t {struct wilc_vif* vif; int ack_idx; int * priv; int * tx_complete_func; int buffer_size; int * buffer; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct txq_entry_t* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wilc_vif*,struct txq_entry_t*) ;

__attribute__((used)) static int FUNC_4(struct wilc_vif *VAR_3, u8 *VAR_4,
         u32 VAR_5)
{
 struct txq_entry_t *VAR_6;
 struct wilc *VAR_7 = VAR_3->wilc;

 FUNC_2(VAR_3->ndev, "Adding config packet ...\n");
 if (VAR_7->quit) {
  FUNC_2(VAR_3->ndev, "Return due to clear function\n");
  FUNC_0(&VAR_7->cfg_event);
  return 0;
 }

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return 0;

 VAR_6->type = VAR_2;
 VAR_6->buffer = VAR_4;
 VAR_6->buffer_size = VAR_5;
 VAR_6->tx_complete_func = ((void*)0);
 VAR_6->priv = ((void*)0);
 VAR_6->ack_idx = VAR_1;
 VAR_6->vif = VAR_3;

 FUNC_3(VAR_3, VAR_6);

 return 1;
}
