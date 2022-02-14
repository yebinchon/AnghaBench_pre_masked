
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int dummy; } ;
struct MPT3SAS_ADAPTER {int * cpu_msix_table; scalar_t__ reply_queue_count; int total_io_cnt; scalar_t__ msix_load_balance; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,scalar_t__) ;
 size_t FUNC_2 () ;

__attribute__((used)) static inline u8
FUNC_3(struct MPT3SAS_ADAPTER *VAR_0,
 struct scsi_cmnd *VAR_1)
{

 if (VAR_0->msix_load_balance)
  return VAR_0->reply_queue_count ?
      FUNC_1(FUNC_0(1,
      &VAR_0->total_io_cnt), VAR_0->reply_queue_count) : 0;

 return VAR_0->cpu_msix_table[FUNC_2()];
}
