
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int * vendor_cmd; } ;
struct TYPE_6__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; } ;
struct TYPE_8__ {int payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_7__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_4__ reply_payload; TYPE_3__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct bfad_s {int dummy; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bfad_im_port_s* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct bfad_s*,int ,void*,int ) ;
 int FUNC_2 (struct bsg_job*,int,int) ;
 struct Scsi_Host* FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,void*,int) ;
 int FUNC_7 (int ,int ,void*,int ) ;

__attribute__((used)) static int
FUNC_8(struct bsg_job *VAR_4)
{
 struct fc_bsg_request *VAR_5 = VAR_4->request;
 struct fc_bsg_reply *VAR_6 = VAR_4->reply;
 uint32_t VAR_7 = VAR_5->rqst_data.h_vendor.vendor_cmd[0];
 struct Scsi_Host *VAR_8 = FUNC_3(VAR_4);
 struct bfad_im_port_s *VAR_9 = FUNC_0(VAR_8);
 struct bfad_s *VAR_10 = VAR_9->bfad;
 void *VAR_11;
 int VAR_12 = -VAR_1;


 VAR_11 = FUNC_5(VAR_4->request_payload.payload_len, VAR_3);
 if (!VAR_11) {
  VAR_12 = -VAR_2;
  goto out;
 }


 FUNC_7(VAR_4->request_payload.sg_list,
     VAR_4->request_payload.sg_cnt, VAR_11,
     VAR_4->request_payload.payload_len);


 VAR_12 = FUNC_1(VAR_10, VAR_7, VAR_11,
    VAR_4->request_payload.payload_len);
 if (VAR_12 != VAR_0)
  goto error;


 FUNC_6(VAR_4->reply_payload.sg_list,
       VAR_4->reply_payload.sg_cnt,
       VAR_11,
       VAR_4->reply_payload.payload_len);


 FUNC_4(VAR_11);


 VAR_4->reply_len = VAR_4->reply_payload.payload_len;
 VAR_6->reply_payload_rcv_len = VAR_4->reply_payload.payload_len;
 VAR_6->result = VAR_12;

 FUNC_2(VAR_4, VAR_6->result,
         VAR_6->reply_payload_rcv_len);
 return VAR_12;
error:

 FUNC_4(VAR_11);
out:
 VAR_6->result = VAR_12;
 VAR_4->reply_len = sizeof(uint32_t);
 VAR_6->reply_payload_rcv_len = 0;
 return VAR_12;
}
