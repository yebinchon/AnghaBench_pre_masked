
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int base_addr; } ;
struct TYPE_2__ {scalar_t__ dmaing; scalar_t__ txing; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_8)
{
    unsigned int VAR_9 = VAR_8->base_addr;
    int VAR_10;

    VAR_7.txing = VAR_7.dmaing = 0;

    FUNC_4(VAR_1+VAR_2+VAR_3, VAR_9 + VAR_0);

    FUNC_3(FUNC_0(VAR_9 + VAR_6), VAR_9 + VAR_6);

    for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
 if ((FUNC_1(VAR_9+VAR_4) & VAR_5) != 0)
     break;
 FUNC_6(100);
    }
    FUNC_4(VAR_5, VAR_9 + VAR_4);

    if (VAR_10 == 100)
 FUNC_2(VAR_8, "pcnet_reset_8390() did not complete.\n");

    FUNC_5(VAR_8);

}
