
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int block_requests; int scsi_host; int block_requests_wait; } ;


 int FUNC_0 (struct pqi_ctrl_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct pqi_ctrl_info *VAR_0)
{
 VAR_0->block_requests = 0;
 FUNC_2(&VAR_0->block_requests_wait);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->scsi_host);
}
