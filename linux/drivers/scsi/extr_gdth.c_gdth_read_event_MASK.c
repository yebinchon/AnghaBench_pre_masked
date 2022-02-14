
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int smp_lock; } ;
typedef TYPE_1__ gdth_ha_str ;
struct TYPE_9__ {scalar_t__ event_source; } ;
typedef TYPE_2__ gdth_evt_str ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(gdth_ha_str *VAR_4, int VAR_5, gdth_evt_str *VAR_6)
{
    gdth_evt_str *VAR_7;
    int VAR_8;
    unsigned long VAR_9;

    FUNC_0(("gdth_read_event() handle %d\n", VAR_5));
    FUNC_2(&VAR_4->smp_lock, VAR_9);
    if (VAR_5 == -1)
        VAR_8 = VAR_3;
    else
        VAR_8 = VAR_5;
    VAR_6->event_source = 0;

    if (VAR_8 < 0 || VAR_8 >= VAR_0) {
        FUNC_3(&VAR_4->smp_lock, VAR_9);
        return VAR_8;
    }
    VAR_7 = &VAR_1[VAR_8];
    if (VAR_7->event_source != 0) {
        if (VAR_8 != VAR_2) {
            if (++VAR_8 == VAR_0)
                VAR_8 = 0;
        } else {
            VAR_8 = -1;
        }
        FUNC_1(VAR_6, VAR_7, sizeof(gdth_evt_str));
    }
    FUNC_3(&VAR_4->smp_lock, VAR_9);
    return VAR_8;
}
