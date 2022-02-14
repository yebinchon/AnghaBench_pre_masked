
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int al_pa; int area; int domain; } ;
struct TYPE_6__ {TYPE_1__ b; } ;
struct TYPE_7__ {TYPE_2__ d_id; int port_name; int vha; int state; } ;
typedef TYPE_3__ fc_port_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int * VAR_0 ;
 int FUNC_2 (int ,int ,int,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;

void FUNC_3(fc_port_t *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_2->state);
 FUNC_1(&VAR_2->state, VAR_3);


 if (VAR_4 && VAR_4 != VAR_3) {
  FUNC_2(VAR_1, VAR_2->vha, 0x207d,
         "FCPort %8phC state transitioned from %s to %s - portid=%02x%02x%02x.\n",
         VAR_2->port_name, VAR_0[VAR_4],
         VAR_0[VAR_3], VAR_2->d_id.b.domain,
         VAR_2->d_id.b.area, VAR_2->d_id.b.al_pa);
 }
}
