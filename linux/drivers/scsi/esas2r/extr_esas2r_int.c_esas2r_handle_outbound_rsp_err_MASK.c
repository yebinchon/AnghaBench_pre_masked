
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ scsi_stat; } ;
struct TYPE_4__ {TYPE_1__ scsi_rsp; } ;
struct esas2r_request {scalar_t__ req_stat; scalar_t__ timeout; TYPE_2__ func_rsp; } ;
struct esas2r_adapter {int dummy; } ;
struct atto_vda_ob_rsp {int func_rsp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct esas2r_adapter *VAR_9,
        struct esas2r_request *VAR_10,
        struct atto_vda_ob_rsp *VAR_11)
{





 if (FUNC_2(VAR_10->req_stat != VAR_3)) {
  FUNC_1(&VAR_10->func_rsp, &VAR_11->func_rsp, sizeof(VAR_11->func_rsp));

  if (VAR_10->req_stat == VAR_1) {
   if (VAR_10->timeout > VAR_0)
    VAR_10->req_stat = VAR_4;
  } else if (VAR_10->req_stat == VAR_2) {
   u8 VAR_12 = VAR_10->func_rsp.scsi_rsp.scsi_stat;

   FUNC_0("scsistatus: %x", VAR_12);


   if (VAR_12 == VAR_6 || VAR_12 ==
       VAR_5 || VAR_12 ==
       VAR_7 || VAR_12 ==
       VAR_8) {
    VAR_10->req_stat = VAR_3;
    VAR_10->func_rsp.scsi_rsp.scsi_stat =
     VAR_6;
   }
  }
 }
}
