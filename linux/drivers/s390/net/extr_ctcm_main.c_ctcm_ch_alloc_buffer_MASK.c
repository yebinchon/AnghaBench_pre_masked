
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct channel {int flags; TYPE_2__* trans_skb; int trans_skb_data; TYPE_1__* ccw; int id; scalar_t__ max_bufsize; } ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {scalar_t__ count; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*,int ,int ,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;

int FUNC_6(struct channel *VAR_8)
{
 FUNC_3(&VAR_8->ccw[1]);
 VAR_8->trans_skb = FUNC_2(VAR_8->max_bufsize, VAR_6 | VAR_7);
 if (VAR_8->trans_skb == ((void*)0)) {
  FUNC_1(VAR_5, VAR_3,
   "%s(%s): %s trans_skb allocation error",
   VAR_1, VAR_8->id,
   (FUNC_0(VAR_8->flags) == VAR_2) ?
    "RX" : "TX");
  return -VAR_4;
 }

 VAR_8->ccw[1].count = VAR_8->max_bufsize;
 if (FUNC_5(&VAR_8->ccw[1], VAR_8->trans_skb->data)) {
  FUNC_4(VAR_8->trans_skb);
  VAR_8->trans_skb = ((void*)0);
  FUNC_1(VAR_5, VAR_3,
   "%s(%s): %s set norm_cda failed",
   VAR_1, VAR_8->id,
   (FUNC_0(VAR_8->flags) == VAR_2) ?
    "RX" : "TX");
  return -VAR_4;
 }

 VAR_8->ccw[1].count = 0;
 VAR_8->trans_skb_data = VAR_8->trans_skb->data;
 VAR_8->flags &= ~VAR_0;
 return 0;
}
