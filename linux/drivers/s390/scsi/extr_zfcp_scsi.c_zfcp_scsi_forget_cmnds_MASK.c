
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct zfcp_scsi_req_filter {int lun_handle; scalar_t__ tmf_scope; int port_handle; } ;
struct zfcp_scsi_dev {int lun_handle; TYPE_1__* port; } ;
struct zfcp_adapter {int abort_lock; int req_list; } ;
struct TYPE_2__ {int handle; struct zfcp_adapter* adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int ,struct zfcp_scsi_req_filter*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct zfcp_scsi_dev *VAR_3, u8 VAR_4)
{
 struct zfcp_adapter *VAR_5 = VAR_3->port->adapter;
 struct zfcp_scsi_req_filter VAR_6 = {
  .tmf_scope = VAR_1,
  .port_handle = VAR_3->port->handle,
 };
 unsigned long VAR_7;

 if (VAR_4 == VAR_0) {
  VAR_6.tmf_scope = VAR_0;
  VAR_6.lun_handle = VAR_3->lun_handle;
 }





 FUNC_0(&VAR_5->abort_lock, VAR_7);
 FUNC_2(VAR_5->req_list, VAR_2,
       &VAR_6);
 FUNC_1(&VAR_5->abort_lock, VAR_7);
}
