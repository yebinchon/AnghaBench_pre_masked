
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {TYPE_1__* pccb; TYPE_2__* cmd_tab; int hanum; } ;
typedef TYPE_3__ gdth_ha_str ;
struct TYPE_6__ {scalar_t__ cmnd; int service; } ;
struct TYPE_5__ {scalar_t__ RequestBuffer; scalar_t__ CommandIndex; int Service; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(gdth_ha_str *VAR_2)
{
    int VAR_3;

    FUNC_0(("gdth_get_cmd_index() hanum %d\n", VAR_2->hanum));

    for (VAR_3=0; VAR_3<VAR_0; ++VAR_3) {
        if (VAR_2->cmd_tab[VAR_3].cmnd == VAR_1) {
            VAR_2->cmd_tab[VAR_3].cmnd = VAR_2->pccb->RequestBuffer;
            VAR_2->cmd_tab[VAR_3].service = VAR_2->pccb->Service;
            VAR_2->pccb->CommandIndex = (u32)VAR_3+2;
            return (VAR_3+2);
        }
    }
    return 0;
}
