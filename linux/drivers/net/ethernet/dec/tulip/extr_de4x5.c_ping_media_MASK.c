
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct sk_buff {int dummy; } ;
struct net_device {int base_addr; } ;
struct de4x5_private {int timeout; size_t tmp; size_t tx_new; int txRingSize; TYPE_1__* tx_ring; int frame; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ,int,struct sk_buff*) ;
 struct de4x5_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_9, int VAR_10)
{
    struct de4x5_private *VAR_11 = FUNC_3(VAR_9);
    u_long VAR_12 = VAR_9->base_addr;
    int VAR_13;

    if (VAR_11->timeout < 0) {
 VAR_11->timeout = VAR_10/100;

 VAR_11->tmp = VAR_11->tx_new;
 FUNC_2(VAR_9, VAR_11->frame, VAR_6 | VAR_5 | sizeof(VAR_11->frame), (struct sk_buff *)1);
 VAR_11->tx_new = (VAR_11->tx_new + 1) % VAR_11->txRingSize;
 FUNC_4(VAR_2, VAR_1);
    }

    VAR_13 = FUNC_0(VAR_0);

    if ((!(VAR_13 & VAR_3)) &&
 ((s32)FUNC_1(VAR_11->tx_ring[VAR_11->tmp].status) < 0) &&
  (--VAR_11->timeout)) {
 VAR_13 = 100 | VAR_7;
    } else {
 if ((!(VAR_13 & VAR_3)) &&
     !(FUNC_1(VAR_11->tx_ring[VAR_11->tmp].status) & (VAR_8 | VAR_4)) &&
     VAR_11->timeout) {
     VAR_13 = 0;
 } else {
     VAR_13 = 1;
 }
 VAR_11->timeout = -1;
    }

    return VAR_13;
}
