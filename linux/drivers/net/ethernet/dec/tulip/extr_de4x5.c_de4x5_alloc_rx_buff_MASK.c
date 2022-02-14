
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct de4x5_private {scalar_t__ state; int rx_old; short rxRingSize; scalar_t__ rx_bufs; struct sk_buff** rx_skb; TYPE_1__* rx_ring; } ;
struct TYPE_2__ {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 short VAR_3 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct net_device*,int) ;
 struct de4x5_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct net_device *VAR_4, int VAR_5, int VAR_6)
{
    struct de4x5_private *VAR_7 = FUNC_2(VAR_4);
    struct sk_buff *VAR_8;


    struct sk_buff *VAR_9;
    u_long VAR_10=0, VAR_11;

    VAR_8 = FUNC_1(VAR_4, VAR_1 + VAR_0 + 2);
    if (!VAR_8) return ((void*)0);

    VAR_11 = FUNC_6(VAR_8->data);
    VAR_10 = ((VAR_11 + VAR_0) & ~VAR_0) - VAR_11;
    FUNC_5(VAR_8, VAR_10);
    VAR_7->rx_ring[VAR_5].buf = FUNC_0(VAR_11 + VAR_10);

    VAR_9 = VAR_7->rx_skb[VAR_5];
    VAR_7->rx_skb[VAR_5] = VAR_8;

    if ((u_long) VAR_9 > 1) {
 FUNC_3(VAR_9, VAR_6);
    }

    return VAR_9;
}
