
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct esas2r_request {int * data_buf; TYPE_2__* vrq; } ;
struct esas2r_adapter {int ** req_table; } ;
struct TYPE_3__ {int handle; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct esas2r_request*,struct esas2r_adapter*) ;

__attribute__((used)) static inline void FUNC_2(struct esas2r_request *VAR_0,
          struct esas2r_adapter *VAR_1)

{
 FUNC_1(VAR_0, VAR_1);
 VAR_1->req_table[FUNC_0(VAR_0->vrq->scsi.handle)] = ((void*)0);
 VAR_0->data_buf = ((void*)0);
}
