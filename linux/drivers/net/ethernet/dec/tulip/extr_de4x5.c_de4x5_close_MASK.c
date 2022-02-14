
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct net_device {int irq; int name; int base_addr; } ;
struct de4x5_private {int state; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (int ) ;
 struct de4x5_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct net_device*,int ) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_7)
{
    struct de4x5_private *VAR_8 = FUNC_5(VAR_7);
    u_long VAR_9 = VAR_7->base_addr;
    s32 VAR_10, VAR_11;

    FUNC_2(VAR_7);

    FUNC_6(VAR_7);

    if (VAR_6 & VAR_2) {
 FUNC_7("%s: Shutting down ethercard, status was %8.8x.\n",
        VAR_7->name, FUNC_4(VAR_1));
    }




    VAR_3;
    VAR_5;


    FUNC_3(VAR_7->irq, VAR_7);
    VAR_8->state = VAR_0;


    FUNC_0(VAR_7);
    FUNC_1(VAR_7);


    FUNC_8(VAR_7, VAR_4);

    return 0;
}
