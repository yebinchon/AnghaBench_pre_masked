
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct t3cdev {int dummy; } ;
struct port_info {int port_id; } ;
struct net_device {int ifindex; } ;
struct neighbour {struct net_device* dev; scalar_t__ primary_key; } ;
struct l2t_entry {scalar_t__ addr; int ifindex; int smt_idx; int lock; int vlan; int refcnt; int state; struct l2t_entry* next; } ;
struct l2t_data {int lock; TYPE_1__* l2tab; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {struct l2t_entry* first; } ;


 struct l2t_data* FUNC_0 (struct t3cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct l2t_entry* FUNC_1 (struct l2t_data*) ;
 int FUNC_2 (scalar_t__,int,struct l2t_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 struct neighbour* FUNC_5 (struct dst_entry*,void const*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct l2t_data*,struct l2t_entry*) ;
 int FUNC_8 (struct neighbour*) ;
 int FUNC_9 (struct l2t_entry*,struct neighbour*) ;
 struct port_info* FUNC_10 (struct net_device*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct l2t_entry*,struct neighbour*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

struct l2t_entry *FUNC_19(struct t3cdev *VAR_2, struct dst_entry *VAR_3,
        struct net_device *VAR_4, const void *VAR_5)
{
 struct l2t_entry *VAR_6 = ((void*)0);
 struct neighbour *VAR_7;
 struct port_info *VAR_8;
 struct l2t_data *VAR_9;
 int VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_11();
 VAR_7 = FUNC_5(VAR_3, VAR_5);
 if (!VAR_7)
  goto done_rcu;

 VAR_11 = *(u32 *) VAR_7->primary_key;
 VAR_12 = VAR_7->dev->ifindex;

 if (!VAR_4)
  VAR_4 = VAR_7->dev;
 VAR_8 = FUNC_10(VAR_4);
 VAR_13 = VAR_8->port_id;

 VAR_9 = FUNC_0(VAR_2);
 if (!VAR_9)
  goto done_rcu;

 VAR_10 = FUNC_2(VAR_11, VAR_12, VAR_9);

 FUNC_17(&VAR_9->lock);
 for (VAR_6 = VAR_9->l2tab[VAR_10].first; VAR_6; VAR_6 = VAR_6->next)
  if (VAR_6->addr == VAR_11 && VAR_6->ifindex == VAR_12 &&
      VAR_6->smt_idx == VAR_13) {
   FUNC_7(VAR_9, VAR_6);
   if (FUNC_3(&VAR_6->refcnt) == 1)
    FUNC_13(VAR_6, VAR_7);
   goto done_unlock;
  }


 VAR_6 = FUNC_1(VAR_9);
 if (VAR_6) {
  FUNC_14(&VAR_6->lock);
  VAR_6->next = VAR_9->l2tab[VAR_10].first;
  VAR_9->l2tab[VAR_10].first = VAR_6;
  VAR_6->state = VAR_0;
  VAR_6->addr = VAR_11;
  VAR_6->ifindex = VAR_12;
  VAR_6->smt_idx = VAR_13;
  FUNC_4(&VAR_6->refcnt, 1);
  FUNC_9(VAR_6, VAR_7);
  if (FUNC_6(VAR_7->dev))
   VAR_6->vlan = FUNC_16(VAR_7->dev);
  else
   VAR_6->vlan = VAR_1;
  FUNC_15(&VAR_6->lock);
 }
done_unlock:
 FUNC_18(&VAR_9->lock);
done_rcu:
 if (VAR_7)
  FUNC_8(VAR_7);
 FUNC_12();
 return VAR_6;
}
