
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_8__ {int * b; } ;
typedef TYPE_3__ gdth_stackframe ;
struct TYPE_6__ {int ionode; scalar_t__ service; size_t status; } ;
struct TYPE_7__ {TYPE_1__ async; int * stream; } ;
struct TYPE_9__ {scalar_t__ size; char* event_string; TYPE_2__ eu; } ;
typedef TYPE_4__ gdth_evt_data ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (size_t,char**) ;
 int FUNC_1 (char*) ;
 char** VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static void FUNC_4(gdth_evt_data *VAR_2, char *VAR_3)
{
    gdth_stackframe VAR_4;
    char *VAR_5 = ((void*)0);
    int VAR_6,VAR_7;

    FUNC_1(("gdth_log_event()\n"));
    if (VAR_2->size == 0) {
        if (VAR_3 == ((void*)0)) {
            FUNC_2("Adapter %d: %s\n",VAR_2->eu.async.ionode,VAR_2->event_string);
        } else {
            FUNC_3(VAR_3,"Adapter %d: %s\n",
                VAR_2->eu.async.ionode,VAR_2->event_string);
        }
    } else if (VAR_2->eu.async.service == VAR_0 &&
        FUNC_0(VAR_2->eu.async.status, VAR_1)) {
        FUNC_1(("GDT: Async. event cache service, event no.: %d\n",
                VAR_2->eu.async.status));

        VAR_5 = VAR_1[VAR_2->eu.async.status];


        for (VAR_7=0,VAR_6=1; VAR_6 < VAR_5[0]; VAR_6+=2) {
            switch (VAR_5[VAR_6+1]) {
              case 4:
                VAR_4.b[VAR_7++] = *(u32*)&VAR_2->eu.stream[(int)VAR_5[VAR_6]];
                break;
              case 2:
                VAR_4.b[VAR_7++] = *(u16*)&VAR_2->eu.stream[(int)VAR_5[VAR_6]];
                break;
              case 1:
                VAR_4.b[VAR_7++] = *(u8*)&VAR_2->eu.stream[(int)VAR_5[VAR_6]];
                break;
              default:
                break;
            }
        }

        if (VAR_3 == ((void*)0)) {
            FUNC_2(&VAR_5[(int)VAR_5[0]],VAR_4);
            FUNC_2("\n");
        } else {
            FUNC_3(VAR_3,&VAR_5[(int)VAR_5[0]],VAR_4);
        }

    } else {
        if (VAR_3 == ((void*)0)) {
            FUNC_2("GDT HA %u, Unknown async. event service %d event no. %d\n",
                   VAR_2->eu.async.ionode,VAR_2->eu.async.service,VAR_2->eu.async.status);
        } else {
            FUNC_3(VAR_3,"GDT HA %u, Unknown async. event service %d event no. %d",
                    VAR_2->eu.async.ionode,VAR_2->eu.async.service,VAR_2->eu.async.status);
        }
    }
}
