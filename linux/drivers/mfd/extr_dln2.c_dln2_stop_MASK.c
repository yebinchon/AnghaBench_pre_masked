
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dln2_rx_context {int done; scalar_t__ in_use; } ;
struct dln2_mod_rx_slots {int lock; struct dln2_rx_context* slots; } ;
struct dln2_dev {int disconnect; int active_transfers; int disconnect_wq; struct dln2_mod_rx_slots* mod_rx_slots; int disconnect_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dln2_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct dln2_dev *VAR_2)
{
 int VAR_3, VAR_4;


 FUNC_2(&VAR_2->disconnect_lock);
 VAR_2->disconnect = 1;
 FUNC_4(&VAR_2->disconnect_lock);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct dln2_mod_rx_slots *VAR_5 = &VAR_2->mod_rx_slots[VAR_3];
  unsigned long VAR_6;

  FUNC_3(&VAR_5->lock, VAR_6);


  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   struct dln2_rx_context *VAR_7 = &VAR_5->slots[VAR_4];

   if (VAR_7->in_use)
    FUNC_0(&VAR_7->done);
  }

  FUNC_5(&VAR_5->lock, VAR_6);
 }


 FUNC_6(VAR_2->disconnect_wq, !VAR_2->active_transfers);

 FUNC_1(VAR_2);
}
