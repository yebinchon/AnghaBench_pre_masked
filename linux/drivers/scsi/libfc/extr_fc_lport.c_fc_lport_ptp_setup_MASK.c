
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct TYPE_7__ {int disc_mutex; } ;
struct fc_lport {TYPE_3__* ptp_rdata; TYPE_2__ disc; int lp_mutex; } ;
struct TYPE_6__ {void* node_name; void* port_name; } ;
struct TYPE_8__ {TYPE_1__ ids; int kref; } ;


 int FUNC_0 (struct fc_lport*) ;
 TYPE_3__* FUNC_1 (struct fc_lport*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct fc_lport *VAR_1,
          u32 VAR_2, u64 VAR_3,
          u64 VAR_4)
{
 FUNC_6(&VAR_1->lp_mutex);

 if (VAR_1->ptp_rdata) {
  FUNC_3(VAR_1->ptp_rdata);
  FUNC_5(&VAR_1->ptp_rdata->kref, VAR_0);
 }
 FUNC_7(&VAR_1->disc.disc_mutex);
 VAR_1->ptp_rdata = FUNC_1(VAR_1, VAR_2);
 FUNC_4(&VAR_1->ptp_rdata->kref);
 VAR_1->ptp_rdata->ids.port_name = VAR_3;
 VAR_1->ptp_rdata->ids.node_name = VAR_4;
 FUNC_8(&VAR_1->disc.disc_mutex);

 FUNC_2(VAR_1->ptp_rdata);

 FUNC_0(VAR_1);
}
