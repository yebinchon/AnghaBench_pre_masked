
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gid_pn; int sr_data; int status_read_req; int qtcb_pool; int scsi_abort; int scsi_req; int erp_req; } ;
struct zfcp_adapter {TYPE_1__ pool; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct zfcp_adapter *VAR_0)
{
 FUNC_0(VAR_0->pool.erp_req);
 FUNC_0(VAR_0->pool.scsi_req);
 FUNC_0(VAR_0->pool.scsi_abort);
 FUNC_0(VAR_0->pool.qtcb_pool);
 FUNC_0(VAR_0->pool.status_read_req);
 FUNC_0(VAR_0->pool.sr_data);
 FUNC_0(VAR_0->pool.gid_pn);
}
