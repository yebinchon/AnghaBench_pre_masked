
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
typedef scalar_t__ u16 ;
typedef int gdth_ha_str ;
struct TYPE_7__ {scalar_t__ size; int event_string; int eu; } ;
struct TYPE_6__ {scalar_t__ event_source; scalar_t__ event_idx; int same_count; scalar_t__ application; TYPE_2__ event_data; void* last_stamp; void* first_stamp; } ;
typedef TYPE_1__ gdth_evt_str ;
typedef TYPE_2__ gdth_evt_data ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static gdth_evt_str *FUNC_4(gdth_ha_str *VAR_4, u16 VAR_5,
                                      u16 VAR_6, gdth_evt_data *VAR_7)
{
    gdth_evt_str *VAR_8;


    FUNC_0(("gdth_store_event() source %d idx %d\n", VAR_5, VAR_6));
    if (VAR_5 == 0)
        return ((void*)0);

    if (VAR_1[VAR_2].event_source == VAR_5 &&
        VAR_1[VAR_2].event_idx == VAR_6 &&
        ((VAR_7->size != 0 && VAR_1[VAR_2].event_data.size != 0 &&
            !FUNC_2((char *)&VAR_1[VAR_2].event_data.eu,
            (char *)&VAR_7->eu, VAR_7->size)) ||
        (VAR_7->size == 0 && VAR_1[VAR_2].event_data.size == 0 &&
            !FUNC_3((char *)&VAR_1[VAR_2].event_data.event_string,
            (char *)&VAR_7->event_string)))) {
        VAR_8 = &VAR_1[VAR_2];
 VAR_8->last_stamp = (u32)FUNC_1();
        ++VAR_8->same_count;
    } else {
        if (VAR_1[VAR_2].event_source != 0) {
            ++VAR_2;
            if (VAR_2 == VAR_0)
                VAR_2 = 0;
            if (VAR_2 == VAR_3) {
                ++VAR_3;
                if (VAR_3 == VAR_0)
                    VAR_3 = 0;
            }
        }
        VAR_8 = &VAR_1[VAR_2];
        VAR_8->event_source = VAR_5;
        VAR_8->event_idx = VAR_6;
 VAR_8->first_stamp = VAR_8->last_stamp = (u32)FUNC_1();
        VAR_8->same_count = 1;
        VAR_8->event_data = *VAR_7;
        VAR_8->application = 0;
    }
    return VAR_8;
}
