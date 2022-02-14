
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int smp_lock; } ;
typedef TYPE_1__ gdth_ha_str ;
struct TYPE_9__ {scalar_t__ event_source; int application; } ;
typedef TYPE_2__ gdth_evt_str ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(gdth_ha_str *VAR_6,
                               u8 VAR_7, gdth_evt_str *VAR_8)
{
    gdth_evt_str *VAR_9;
    int VAR_10;
    unsigned long VAR_11;
    u8 VAR_12 = VAR_0;

    FUNC_0(("gdth_readapp_event() app. %d\n", VAR_7));
    FUNC_2(&VAR_6->smp_lock, VAR_11);
    VAR_10 = VAR_5;
    for (;;) {
        VAR_9 = &VAR_3[VAR_10];
        if (VAR_9->event_source == 0)
            break;
        if ((VAR_9->application & VAR_7) == 0) {
            VAR_9->application |= VAR_7;
            VAR_12 = VAR_2;
            break;
        }
        if (VAR_10 == VAR_4)
            break;
        if (++VAR_10 == VAR_1)
            VAR_10 = 0;
    }
    if (VAR_12)
        FUNC_1(VAR_8, VAR_9, sizeof(gdth_evt_str));
    else
        VAR_8->event_source = 0;
    FUNC_3(&VAR_6->smp_lock, VAR_11);
}
