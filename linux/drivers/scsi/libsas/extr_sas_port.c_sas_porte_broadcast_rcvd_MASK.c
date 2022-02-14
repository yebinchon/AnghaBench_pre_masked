
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct work_struct {int dummy; } ;
struct asd_sas_phy {TYPE_2__* port; int sas_prim_lock; int sas_prim; } ;
struct asd_sas_event {struct asd_sas_phy* phy; } ;
struct TYPE_4__ {TYPE_1__* ha; } ;
struct TYPE_3__ {int disco_q; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct asd_sas_event* FUNC_5 (struct work_struct*) ;

void FUNC_6(struct work_struct *VAR_1)
{
 struct asd_sas_event *VAR_2 = FUNC_5(VAR_1);
 struct asd_sas_phy *VAR_3 = VAR_2->phy;
 unsigned long VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_3->sas_prim_lock, VAR_4);
 VAR_5 = VAR_3->sas_prim;
 FUNC_4(&VAR_3->sas_prim_lock, VAR_4);

 FUNC_1("broadcast received: %d\n", VAR_5);
 FUNC_2(VAR_3->port, VAR_0);

 if (VAR_3->port)
  FUNC_0(VAR_3->port->ha->disco_q);
}
