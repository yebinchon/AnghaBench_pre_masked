
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 int FUNC_0 (TYPE_1__* const,int ) ;
 int FUNC_1 (TYPE_1__* const,int ,int) ;
 int FUNC_2 (TYPE_1__* const) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

unsigned FUNC_5 (lmc_softc_t * const VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    int VAR_4;
    int VAR_5 = (0xf6 << 10) | (VAR_2 << 5) | VAR_3;
    int VAR_6 = 0;

    FUNC_4(VAR_1->lmc_device, "lmc_mii_readreg in");

    FUNC_2 (VAR_1);

    FUNC_4(VAR_1->lmc_device, "lmc_mii_readreg: done sync");

    for (VAR_4 = 15; VAR_4 >= 0; VAR_4--)
    {
        int VAR_7 = (VAR_5 & (1 << VAR_4)) ? 0x20000 : 0;

        FUNC_1 (VAR_1, VAR_0, VAR_7);
        FUNC_3 ();

        FUNC_1 (VAR_1, VAR_0, VAR_7 | 0x10000);
        FUNC_3 ();

    }

    FUNC_4(VAR_1->lmc_device, "lmc_mii_readreg: done1");

    for (VAR_4 = 19; VAR_4 > 0; VAR_4--)
    {
        FUNC_1 (VAR_1, VAR_0, 0x40000);
        FUNC_3 ();

        VAR_6 = (VAR_6 << 1) | ((FUNC_0 (VAR_1, VAR_0) & 0x80000) ? 1 : 0);
        FUNC_1 (VAR_1, VAR_0, 0x40000 | 0x10000);
        FUNC_3 ();

    }

    FUNC_4(VAR_1->lmc_device, "lmc_mii_readreg out");

    return (VAR_6 >> 1) & 0xffff;
}
