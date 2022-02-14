
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int * dev_addr; } ;
struct neighbour {TYPE_3__* dev; scalar_t__ primary_key; TYPE_1__* tbl; } ;
struct l2t_entry {int ifindex; scalar_t__ lport; int hash; int v6; int lock; struct l2t_entry* next; int vlan; int refcnt; int addr; int dmac; int state; } ;
struct l2t_data {int lock; TYPE_2__* l2tab; } ;
struct TYPE_10__ {scalar_t__ tx_chan; scalar_t__ lport; } ;
struct TYPE_9__ {int ifindex; int flags; } ;
struct TYPE_8__ {struct l2t_entry* first; } ;
struct TYPE_7__ {unsigned int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct l2t_data*,int *,unsigned int,int) ;
 int FUNC_1 (struct l2t_entry*,int *) ;
 struct l2t_entry* FUNC_2 (struct l2t_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct l2t_data*,struct l2t_entry*) ;
 int FUNC_7 (int ,int *,unsigned int) ;
 int FUNC_8 (struct l2t_entry*,struct neighbour*) ;
 TYPE_5__* FUNC_9 (struct net_device const*) ;
 int FUNC_10 (struct l2t_entry*,struct neighbour*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*,unsigned int) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

struct l2t_entry *FUNC_17(struct l2t_data *VAR_3, struct neighbour *VAR_4,
    const struct net_device *VAR_5,
    unsigned int VAR_6)
{
 u8 VAR_7;
 u16 VAR_8;
 struct l2t_entry *VAR_9;
 unsigned int VAR_10 = VAR_4->tbl->key_len;
 u32 *VAR_11 = (u32 *)VAR_4->primary_key;
 int VAR_12 = VAR_4->dev->ifindex;
 int VAR_13 = FUNC_0(VAR_3, VAR_11, VAR_10, VAR_12);

 if (VAR_4->dev->flags & VAR_0)
  VAR_7 = FUNC_9(VAR_5)->tx_chan + 4;
 else
  VAR_7 = FUNC_9(VAR_5)->lport;

 if (FUNC_5(VAR_4->dev)) {
  VAR_8 = FUNC_14(VAR_4->dev);
  VAR_8 |= FUNC_13(VAR_4->dev, VAR_6);
 } else {
  VAR_8 = VAR_2;
 }

 FUNC_15(&VAR_3->lock);
 for (VAR_9 = VAR_3->l2tab[VAR_13].first; VAR_9; VAR_9 = VAR_9->next)
  if (!FUNC_1(VAR_9, VAR_11) && VAR_9->ifindex == VAR_12 &&
      VAR_9->vlan == VAR_8 && VAR_9->lport == VAR_7) {
   FUNC_6(VAR_3, VAR_9);
   if (FUNC_3(&VAR_9->refcnt) == 1)
    FUNC_10(VAR_9, VAR_4);
   goto done;
  }


 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9) {
  FUNC_11(&VAR_9->lock);
  VAR_9->state = VAR_1;
  if (VAR_4->dev->flags & VAR_0)
   FUNC_7(VAR_9->dmac, VAR_5->dev_addr, sizeof(VAR_9->dmac));
  FUNC_7(VAR_9->addr, VAR_11, VAR_10);
  VAR_9->ifindex = VAR_12;
  VAR_9->hash = VAR_13;
  VAR_9->lport = VAR_7;
  VAR_9->v6 = VAR_10 == 16;
  FUNC_4(&VAR_9->refcnt, 1);
  FUNC_8(VAR_9, VAR_4);
  VAR_9->vlan = VAR_8;
  VAR_9->next = VAR_3->l2tab[VAR_13].first;
  VAR_3->l2tab[VAR_13].first = VAR_9;
  FUNC_12(&VAR_9->lock);
 }
done:
 FUNC_16(&VAR_3->lock);
 return VAR_9;
}
