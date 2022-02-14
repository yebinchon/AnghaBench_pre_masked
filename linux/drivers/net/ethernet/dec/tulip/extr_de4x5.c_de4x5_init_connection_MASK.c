
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int base_addr; } ;
struct de4x5_private {scalar_t__ media; scalar_t__ c_media; int tx_enable; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct de4x5_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_2)
{
    struct de4x5_private *VAR_3 = FUNC_3(VAR_2);
    u_long VAR_4 = VAR_2->base_addr;
    u_long VAR_5 = 0;

    if (VAR_3->media != VAR_3->c_media) {
        FUNC_0(VAR_2);
 VAR_3->c_media = VAR_3->media;
    }

    FUNC_6(&VAR_3->lock, VAR_5);
    FUNC_1(VAR_2);
    FUNC_2(VAR_2);
    VAR_3->tx_enable = 1;
    FUNC_7(&VAR_3->lock, VAR_5);
    FUNC_5(VAR_1, VAR_0);

    FUNC_4(VAR_2);
}
