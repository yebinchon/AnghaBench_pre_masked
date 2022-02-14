
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct scsi_qla_host {int iocb_cnt; struct mrb** active_mrb_array; } ;
struct mrb {scalar_t__ iocb_cnt; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct mrb *FUNC_0(struct scsi_qla_host *VAR_1,
           uint32_t VAR_2)
{
 struct mrb *VAR_3 = ((void*)0);


 if (VAR_2 >= VAR_0)
  return VAR_3;

 VAR_3 = VAR_1->active_mrb_array[VAR_2];
 VAR_1->active_mrb_array[VAR_2] = ((void*)0);
 if (!VAR_3)
  return VAR_3;


 VAR_1->iocb_cnt -= VAR_3->iocb_cnt;

 return VAR_3;
}
