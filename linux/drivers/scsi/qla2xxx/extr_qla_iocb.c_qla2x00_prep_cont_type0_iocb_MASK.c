
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {struct req_que* req; } ;
struct req_que {scalar_t__ ring_index; scalar_t__ length; scalar_t__ ring_ptr; scalar_t__ ring; } ;
struct TYPE_3__ {int entry_type; } ;
typedef TYPE_1__ cont_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline cont_entry_t *
FUNC_1(struct scsi_qla_host *VAR_1)
{
 cont_entry_t *VAR_2;
 struct req_que *VAR_3 = VAR_1->req;

 VAR_3->ring_index++;
 if (VAR_3->ring_index == VAR_3->length) {
  VAR_3->ring_index = 0;
  VAR_3->ring_ptr = VAR_3->ring;
 } else {
  VAR_3->ring_ptr++;
 }

 VAR_2 = (cont_entry_t *)VAR_3->ring_ptr;


 FUNC_0(VAR_0, &VAR_2->entry_type);

 return (VAR_2);
}
