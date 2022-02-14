
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_req {int dummy; } ;
struct scsi_cmnd {scalar_t__ result; scalar_t__ retries; } ;


 int FUNC_0 (char*,int,struct scsi_cmnd*,struct zfcp_fsf_req*) ;

__attribute__((used)) static inline
void FUNC_1(struct scsi_cmnd *VAR_0, struct zfcp_fsf_req *VAR_1)
{
 if (VAR_0->result != 0)
  FUNC_0("rsl_err", 3, VAR_0, VAR_1);
 else if (VAR_0->retries > 0)
  FUNC_0("rsl_ret", 4, VAR_0, VAR_1);
 else
  FUNC_0("rsl_nor", 6, VAR_0, VAR_1);
}
