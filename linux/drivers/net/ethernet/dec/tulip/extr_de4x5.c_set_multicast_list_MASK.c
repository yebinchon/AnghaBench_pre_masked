
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int flags; int base_addr; } ;
struct de4x5_private {scalar_t__ state; int tx_new; int txRingSize; int setup_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ,int,struct sk_buff*) ;
 struct de4x5_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_10)
{
    struct de4x5_private *VAR_11 = FUNC_3(VAR_10);
    u_long VAR_12 = VAR_10->base_addr;


    if (VAR_11->state == VAR_4) {
 if (VAR_10->flags & VAR_2) {
     u32 VAR_13;
     VAR_13 = FUNC_1(VAR_0);
     VAR_13 |= VAR_3;
     FUNC_5(VAR_13, VAR_0);
 } else {
     FUNC_0(VAR_10);
     FUNC_2(VAR_10, VAR_11->setup_frame, VAR_8 | VAR_5 | VAR_9 |
                                   VAR_7, (struct sk_buff *)1);

     VAR_11->tx_new = (VAR_11->tx_new + 1) % VAR_11->txRingSize;
     FUNC_5(VAR_6, VAR_1);
     FUNC_4(VAR_10);
 }
    }
}
