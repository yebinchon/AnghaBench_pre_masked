
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* sq_buf_size; void* rq_buf_size; int num_sq_entries; int num_rq_entries; } ;
struct TYPE_4__ {void* sq_buf_size; void* rq_buf_size; void* num_sq_entries; void* num_rq_entries; } ;
struct ice_hw {TYPE_1__ mailboxq; TYPE_2__ adminq; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct ice_hw *VAR_5)
{
 VAR_5->adminq.num_rq_entries = VAR_0;
 VAR_5->adminq.num_sq_entries = VAR_0;
 VAR_5->adminq.rq_buf_size = VAR_1;
 VAR_5->adminq.sq_buf_size = VAR_1;
 VAR_5->mailboxq.num_rq_entries = VAR_3;
 VAR_5->mailboxq.num_sq_entries = VAR_4;
 VAR_5->mailboxq.rq_buf_size = VAR_2;
 VAR_5->mailboxq.sq_buf_size = VAR_2;
}
