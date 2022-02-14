
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_fsf_req {int dummy; } ;
struct TYPE_2__ {void* gid_pn; int sr_data; void* qtcb_pool; void* status_read_req; void* scsi_abort; void* scsi_req; void* gid_pn_req; void* erp_req; } ;
struct zfcp_adapter {TYPE_1__ pool; } ;
struct fsf_status_read_buffer {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct zfcp_adapter *VAR_5)
{
 VAR_5->pool.erp_req =
  FUNC_1(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_5->pool.erp_req)
  return -VAR_0;

 VAR_5->pool.gid_pn_req =
  FUNC_1(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_5->pool.gid_pn_req)
  return -VAR_0;

 VAR_5->pool.scsi_req =
  FUNC_1(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_5->pool.scsi_req)
  return -VAR_0;

 VAR_5->pool.scsi_abort =
  FUNC_1(1, sizeof(struct zfcp_fsf_req));
 if (!VAR_5->pool.scsi_abort)
  return -VAR_0;

 VAR_5->pool.status_read_req =
  FUNC_1(VAR_1,
         sizeof(struct zfcp_fsf_req));
 if (!VAR_5->pool.status_read_req)
  return -VAR_0;

 VAR_5->pool.qtcb_pool =
  FUNC_3(4, VAR_4);
 if (!VAR_5->pool.qtcb_pool)
  return -VAR_0;

 FUNC_0(sizeof(struct fsf_status_read_buffer) > VAR_2);
 VAR_5->pool.sr_data =
  FUNC_2(VAR_1, 0);
 if (!VAR_5->pool.sr_data)
  return -VAR_0;

 VAR_5->pool.gid_pn =
  FUNC_3(1, VAR_3);
 if (!VAR_5->pool.gid_pn)
  return -VAR_0;

 return 0;
}
