
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct urb {int dummy; } ;
struct dln2_rx_context {int in_use; int done; struct urb* urb; } ;
struct dln2_mod_rx_slots {int wq; int lock; struct dln2_rx_context* slots; int bmap; } ;
struct dln2_dev {TYPE_1__* interface; struct dln2_mod_rx_slots* mod_rx_slots; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct urb*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct dln2_dev *VAR_1, u16 VAR_2, int VAR_3)
{
 struct dln2_mod_rx_slots *VAR_4;
 struct urb *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 struct dln2_rx_context *VAR_7;

 VAR_4 = &VAR_1->mod_rx_slots[VAR_2];

 FUNC_3(&VAR_4->lock, VAR_6);

 FUNC_0(VAR_3, VAR_4->bmap);

 VAR_7 = &VAR_4->slots[VAR_3];
 VAR_7->in_use = 0;
 VAR_5 = VAR_7->urb;
 VAR_7->urb = ((void*)0);
 FUNC_2(&VAR_7->done);

 FUNC_4(&VAR_4->lock, VAR_6);

 if (VAR_5) {
  int VAR_8;
  struct device *VAR_9 = &VAR_1->interface->dev;

  VAR_8 = FUNC_5(VAR_5, VAR_0);
  if (VAR_8 < 0)
   FUNC_1(VAR_9, "failed to resubmit RX URB: %d\n", VAR_8);
 }

 FUNC_6(&VAR_4->wq);
}
