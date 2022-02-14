
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct snic {int * io_req_lock; } ;
struct scsi_cmnd {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static inline spinlock_t *
FUNC_1(struct snic *VAR_1, struct scsi_cmnd *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2) & (VAR_0 - 1);

 return &VAR_1->io_req_lock[VAR_3];
}
