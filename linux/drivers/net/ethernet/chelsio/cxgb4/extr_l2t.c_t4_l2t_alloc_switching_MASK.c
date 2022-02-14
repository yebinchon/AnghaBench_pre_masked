
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2t_entry {int lock; int refcnt; int dmac; int lport; int vlan; int state; } ;
struct l2t_data {int lock; } ;
struct adapter {struct l2t_data* l2t; } ;


 int VAR_0 ;
 int FUNC_0 (struct l2t_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int *) ;
 struct l2t_entry* FUNC_5 (struct l2t_data*,int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct adapter*,struct l2t_entry*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct l2t_entry *FUNC_11(struct adapter *VAR_1, u16 VAR_2,
      u8 VAR_3, u8 *VAR_4)
{
 struct l2t_data *VAR_5 = VAR_1->l2t;
 struct l2t_entry *VAR_6;
 int VAR_7;

 FUNC_9(&VAR_5->lock);
 VAR_6 = FUNC_5(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_6(&VAR_6->lock);
  if (!FUNC_2(&VAR_6->refcnt)) {
   VAR_6->state = VAR_0;
   VAR_6->vlan = VAR_2;
   VAR_6->lport = VAR_3;
   FUNC_4(VAR_6->dmac, VAR_4);
   FUNC_3(&VAR_6->refcnt, 1);
   VAR_7 = FUNC_8(VAR_1, VAR_6, 0);
   if (VAR_7 < 0) {
    FUNC_0(VAR_6);
    FUNC_7(&VAR_6->lock);
    FUNC_10(&VAR_5->lock);
    return ((void*)0);
   }
  } else {
   FUNC_1(&VAR_6->refcnt);
  }

  FUNC_7(&VAR_6->lock);
 }
 FUNC_10(&VAR_5->lock);
 return VAR_6;
}
