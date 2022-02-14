
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct t3cdev {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct neighbour {int nud_state; int ha; TYPE_1__* dev; scalar_t__ primary_key; } ;
struct l2t_entry {scalar_t__ addr; int ifindex; scalar_t__ state; int lock; int dmac; int arpq; struct neighbour* neigh; int refcnt; struct l2t_entry* next; } ;
struct l2t_data {int lock; TYPE_2__* l2tab; } ;
struct TYPE_4__ {struct l2t_entry* first; } ;
struct TYPE_3__ {int ifindex; } ;


 struct l2t_data* FUNC_0 (struct t3cdev*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (scalar_t__,int,struct l2t_data*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct t3cdev*,struct sk_buff_head*) ;
 int FUNC_6 (struct l2t_entry*,struct neighbour*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct t3cdev*,int *,struct l2t_entry*) ;
 int FUNC_11 (struct sk_buff_head*) ;
 int FUNC_12 (int *,struct sk_buff_head*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

void FUNC_15(struct t3cdev *VAR_6, struct neighbour *VAR_7)
{
 struct sk_buff_head VAR_8;
 struct l2t_entry *VAR_9;
 struct l2t_data *VAR_10 = FUNC_0(VAR_6);
 u32 VAR_11 = *(u32 *) VAR_7->primary_key;
 int VAR_12 = VAR_7->dev->ifindex;
 int VAR_13 = FUNC_2(VAR_11, VAR_12, VAR_10);

 FUNC_7(&VAR_10->lock);
 for (VAR_9 = VAR_10->l2tab[VAR_13].first; VAR_9; VAR_9 = VAR_9->next)
  if (VAR_9->addr == VAR_11 && VAR_9->ifindex == VAR_12) {
   FUNC_13(&VAR_9->lock);
   goto found;
  }
 FUNC_9(&VAR_10->lock);
 return;

found:
 FUNC_1(&VAR_8);

 FUNC_8(&VAR_10->lock);
 if (FUNC_3(&VAR_9->refcnt)) {
  if (VAR_7 != VAR_9->neigh)
   FUNC_6(VAR_9, VAR_7);

  if (VAR_9->state == VAR_0) {
   if (VAR_7->nud_state & VAR_4) {
    FUNC_12(&VAR_9->arpq, &VAR_8);
   } else if (VAR_7->nud_state & (VAR_3|VAR_5))
    FUNC_10(VAR_6, ((void*)0), VAR_9);
  } else {
   VAR_9->state = VAR_7->nud_state & VAR_3 ?
       VAR_2 : VAR_1;
   if (!FUNC_4(VAR_9->dmac, VAR_7->ha))
    FUNC_10(VAR_6, ((void*)0), VAR_9);
  }
 }
 FUNC_14(&VAR_9->lock);

 if (!FUNC_11(&VAR_8))
  FUNC_5(VAR_6, &VAR_8);
}
