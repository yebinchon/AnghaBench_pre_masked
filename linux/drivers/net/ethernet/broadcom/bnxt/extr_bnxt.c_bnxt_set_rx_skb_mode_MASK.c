
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt {int flags; int rx_skb_func; int rx_dir; int max_mtu; TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; int max_mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_9 ;

int FUNC_2(struct bnxt *VAR_10, bool VAR_11)
{
 if (VAR_11) {
  if (VAR_10->dev->mtu > VAR_3)
   return -VAR_6;
  VAR_10->dev->max_mtu =
   FUNC_0(VAR_9, VAR_10->max_mtu, VAR_3);
  VAR_10->flags &= ~VAR_0;
  VAR_10->flags |= VAR_1 | VAR_2;
  VAR_10->rx_dir = VAR_4;
  VAR_10->rx_skb_func = VAR_7;

  FUNC_1(VAR_10->dev);
 } else {
  VAR_10->dev->max_mtu = VAR_10->max_mtu;
  VAR_10->flags &= ~VAR_2;
  VAR_10->rx_dir = VAR_5;
  VAR_10->rx_skb_func = VAR_8;
 }
 return 0;
}
