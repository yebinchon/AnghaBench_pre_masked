
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct esas2r_sg_context {int dummy; } ;
struct esas2r_request {TYPE_2__* vrq; } ;
struct esas2r_adapter {int (* build_sgl ) (struct esas2r_adapter*,struct esas2r_sg_context*) ;} ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct esas2r_adapter*,struct esas2r_sg_context*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline bool FUNC_3(struct esas2r_adapter *VAR_0,
     struct esas2r_request *VAR_1,
     struct esas2r_sg_context *VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_1->vrq->scsi.length) == 0))
  return 1;

 return (*VAR_0->build_sgl)(VAR_0, VAR_2);
}
