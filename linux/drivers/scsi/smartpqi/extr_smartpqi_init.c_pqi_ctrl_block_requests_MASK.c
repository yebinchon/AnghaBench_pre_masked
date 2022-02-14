
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int block_requests; int scsi_host; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct pqi_ctrl_info *VAR_0)
{
 VAR_0->block_requests = 1;
 FUNC_0(VAR_0->scsi_host);
}
