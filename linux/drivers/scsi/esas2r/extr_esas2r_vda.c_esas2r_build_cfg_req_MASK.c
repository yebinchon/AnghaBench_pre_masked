
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct esas2r_request {TYPE_2__* vrq; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_cfg_req {int data; int length; int sub_func; } ;
struct TYPE_3__ {int function; } ;
struct TYPE_4__ {TYPE_1__ scsi; struct atto_vda_cfg_req cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct esas2r_request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *,void*,int ) ;

void FUNC_4(struct esas2r_adapter *VAR_1,
     struct esas2r_request *VAR_2,
     u8 VAR_3,
     u32 VAR_4,
     void *VAR_5)
{
 struct atto_vda_cfg_req *VAR_6 = &VAR_2->vrq->cfg;

 FUNC_0(VAR_2);

 VAR_2->vrq->scsi.function = VAR_0;

 VAR_6->sub_func = VAR_3;
 VAR_6->length = FUNC_1(VAR_4);

 if (VAR_5) {
  FUNC_2(VAR_3, VAR_5);

  FUNC_3(&VAR_6->data, VAR_5, VAR_4);
 }
}
