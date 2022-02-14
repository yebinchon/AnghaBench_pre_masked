
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ sense_len; } ;
struct TYPE_4__ {TYPE_1__ scsi_rsp; } ;
struct esas2r_request {scalar_t__ sense_len; scalar_t__* sense_buf; scalar_t__ target_id; scalar_t__ data_buf; TYPE_2__ func_rsp; } ;
struct esas2r_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct esas2r_adapter*,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct esas2r_adapter *VAR_1,
           struct esas2r_request *VAR_2)
{
 u8 VAR_3, VAR_4;

 VAR_3 = VAR_4 = VAR_2->func_rsp.scsi_rsp.sense_len;

 if (VAR_3 > VAR_2->sense_len)
  VAR_3 = VAR_2->sense_len;

 if (VAR_3) {
  if (VAR_2->sense_buf)
   FUNC_4(VAR_2->sense_buf, VAR_2->data_buf, VAR_3);
  else
   VAR_2->sense_buf = (u8 *)VAR_2->data_buf;


  if (VAR_4 > 0x0c) {
   u8 *VAR_5 = (u8 *)VAR_2->data_buf;

   FUNC_2();


   if (VAR_5[0x0c] == 0x3f && VAR_5[0x0d] == 0x0E) {
    FUNC_1("rq->target_id: %d",
          VAR_2->target_id);
    FUNC_0(VAR_1, VAR_2->target_id,
           VAR_0);
   }

   FUNC_1("add_sense_key=%x", VAR_5[0x0c]);
   FUNC_1("add_sense_qual=%x", VAR_5[0x0d]);
   FUNC_3();
  }
 }

 VAR_2->sense_len = VAR_3;
}
