
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 int FUNC_0 (TYPE_1__* const,int ,int) ;
 int FUNC_1 (TYPE_1__* const) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

void FUNC_4 (lmc_softc_t * const VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
    int VAR_5 = 32;
    int VAR_6 = (0x5002 << 16) | (VAR_2 << 23) | (VAR_3 << 18) | VAR_4;

    FUNC_3(VAR_1->lmc_device, "lmc_mii_writereg in");

    FUNC_1 (VAR_1);

    VAR_5 = 31;
    while (VAR_5 >= 0)
    {
        int VAR_7;

        if (VAR_6 & (1 << VAR_5))
            VAR_7 = 0x20000;
        else
            VAR_7 = 0x00000;

        FUNC_0 (VAR_1, VAR_0, VAR_7);
        FUNC_2 ();

        FUNC_0 (VAR_1, VAR_0, (VAR_7 | 0x10000));
        FUNC_2 ();

        VAR_5--;
    }

    VAR_5 = 2;
    while (VAR_5 > 0)
    {
        FUNC_0 (VAR_1, VAR_0, 0x40000);
        FUNC_2 ();

        FUNC_0 (VAR_1, VAR_0, 0x50000);
        FUNC_2 ();

        VAR_5--;
    }

    FUNC_3(VAR_1->lmc_device, "lmc_mii_writereg out");
}
