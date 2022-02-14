
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {int timer; TYPE_1__* lmc_media; scalar_t__ lmc_ok; } ;
typedef TYPE_2__ lmc_softc_t ;
struct TYPE_6__ {int (* set_link_status ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{

    lmc_softc_t *VAR_1 = FUNC_1(VAR_0);

    FUNC_4(VAR_0, "lmc_close in");

    VAR_1->lmc_ok = 0;
    VAR_1->lmc_media->set_link_status (VAR_1, 0);
    FUNC_0 (&VAR_1->timer);
    FUNC_3(VAR_1);
    FUNC_2 (VAR_0);

    FUNC_4(VAR_0, "lmc_close out");

    return 0;
}
