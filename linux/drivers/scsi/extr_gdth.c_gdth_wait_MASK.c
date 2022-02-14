
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int hanum; } ;
typedef TYPE_1__ gdth_ha_str ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(gdth_ha_str *VAR_2, int VAR_3, u32 VAR_4)
{
    int VAR_5 = VAR_0;
    int VAR_6 = 0;

    FUNC_0(("gdth_wait() hanum %d index %d time %d\n", VAR_2->hanum, VAR_3, VAR_4));

    if (VAR_3 == 0)
        return 1;

    do {
 FUNC_1(VAR_2, 1, &VAR_6);
        if (VAR_6 == VAR_3) {
            VAR_5 = VAR_1;
            break;
        }
        FUNC_2(1);
    } while (--VAR_4);

    while (FUNC_3(VAR_2))
        FUNC_2(0);

    return (VAR_5);
}
