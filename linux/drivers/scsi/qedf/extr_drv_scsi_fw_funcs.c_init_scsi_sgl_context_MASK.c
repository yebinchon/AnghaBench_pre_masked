
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef void* u32 ;
struct TYPE_7__ {int hi; int lo; } ;
struct scsi_sgl_task_params {scalar_t__ num_sges; TYPE_5__* sgl; int total_buffer_size; TYPE_1__ sgl_phys_addr; } ;
struct TYPE_8__ {void* hi; void* lo; } ;
struct scsi_sgl_params {int sgl_num_sges; void* sgl_total_length; TYPE_2__ sgl_addr; } ;
struct scsi_cached_sges {TYPE_6__* sge; } ;
struct TYPE_10__ {void* hi; void* lo; } ;
struct TYPE_12__ {void* sge_len; TYPE_4__ sge_addr; } ;
struct TYPE_9__ {int hi; int lo; } ;
struct TYPE_11__ {int sge_len; TYPE_3__ sge_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;

void FUNC_2(struct scsi_sgl_params *VAR_1,
      struct scsi_cached_sges *VAR_2,
      struct scsi_sgl_task_params *VAR_3)
{

 u8 VAR_4 = VAR_3->num_sges >
         VAR_0 ? VAR_0 :
         VAR_3->num_sges;
 u8 VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_3->sgl_phys_addr.lo);
 VAR_1->sgl_addr.lo = VAR_6;
 VAR_6 = FUNC_1(VAR_3->sgl_phys_addr.hi);
 VAR_1->sgl_addr.hi = VAR_6;
 VAR_6 = FUNC_1(VAR_3->total_buffer_size);
 VAR_1->sgl_total_length = VAR_6;
 VAR_1->sgl_num_sges = FUNC_0(VAR_3->num_sges);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = FUNC_1(VAR_3->sgl[VAR_5].sge_addr.lo);
  VAR_2->sge[VAR_5].sge_addr.lo = VAR_6;
  VAR_6 = FUNC_1(VAR_3->sgl[VAR_5].sge_addr.hi);
  VAR_2->sge[VAR_5].sge_addr.hi = VAR_6;
  VAR_6 = FUNC_1(VAR_3->sgl[VAR_5].sge_len);
  VAR_2->sge[VAR_5].sge_len = VAR_6;
 }
}
