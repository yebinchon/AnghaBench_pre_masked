
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_scsi_dev {int status; } ;
struct zfcp_erp_action {int status; int type; struct zfcp_adapter* adapter; TYPE_1__* port; int sdev; int list; } ;
struct zfcp_adapter {int status; int erp_low_mem_count; int erp_total_count; } ;
struct TYPE_2__ {int status; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct zfcp_scsi_dev* FUNC_2 (int ) ;
 int FUNC_3 (char*,struct zfcp_erp_action*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_erp_action *VAR_2)
{
 struct zfcp_adapter *VAR_3 = VAR_2->adapter;
 struct zfcp_scsi_dev *VAR_4;

 VAR_3->erp_total_count--;
 if (VAR_2->status & VAR_1) {
  VAR_3->erp_low_mem_count--;
  VAR_2->status &= ~VAR_1;
 }

 FUNC_1(&VAR_2->list);
 FUNC_3("eractd1", VAR_2);

 switch (VAR_2->type) {
 case 130:
  VAR_4 = FUNC_2(VAR_2->sdev);
  FUNC_0(VAR_0,
      &VAR_4->status);
  break;

 case 128:
 case 129:
  FUNC_0(VAR_0,
      &VAR_2->port->status);
  break;

 case 131:
  FUNC_0(VAR_0,
      &VAR_2->adapter->status);
  break;
 }
}
