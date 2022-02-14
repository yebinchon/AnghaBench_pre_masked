
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


typedef int uint ;
struct srp_login_rsp {int buf_fmt; void* max_ti_iu_len; void* max_it_iu_len; int tag; void* req_lim_delta; int opcode; } ;
struct TYPE_11__ {TYPE_4__* window; } ;
struct scsi_info {int dev; TYPE_5__ dds; scalar_t__ credit; int request_limit; } ;
struct iu_entry {int remote_token; TYPE_3__* sbuf; } ;
struct TYPE_8__ {int len; int tag; } ;
struct ibmvscsis_cmd {TYPE_2__ rsp; struct iu_entry* iue; } ;
struct format_code {int buffers; } ;
struct TYPE_7__ {struct srp_login_rsp login_rsp; } ;
struct TYPE_12__ {TYPE_1__ srp; } ;
struct TYPE_10__ {int liobn; } ;
struct TYPE_9__ {int dma; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_info*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,long) ;
 int FUNC_4 () ;
 long FUNC_5 (int,int ,int ,int ,int ) ;
 int FUNC_6 (struct scsi_info*,int ,int) ;
 int FUNC_7 (struct srp_login_rsp*,int ,int) ;
 TYPE_6__* FUNC_8 (struct iu_entry*) ;

__attribute__((used)) static long FUNC_9(struct scsi_info *VAR_9,
    struct ibmvscsis_cmd *VAR_10)
{
 struct iu_entry *VAR_11 = VAR_10->iue;
 struct srp_login_rsp *VAR_12 = &FUNC_8(VAR_11)->srp.login_rsp;
 struct format_code *VAR_13;
 uint VAR_14 = 0;
 long VAR_15 = VAR_0;

 FUNC_7(VAR_12, 0, sizeof(struct srp_login_rsp));

 VAR_12->opcode = VAR_6;
 VAR_12->req_lim_delta = FUNC_2(VAR_9->request_limit);
 VAR_12->tag = VAR_10->rsp.tag;
 VAR_12->max_it_iu_len = FUNC_2(VAR_7);
 VAR_12->max_ti_iu_len = FUNC_2(VAR_7);
 VAR_13 = (struct format_code *)&VAR_12->buf_fmt;
 VAR_13->buffers = VAR_8;
 VAR_9->credit = 0;

 VAR_10->rsp.len = sizeof(struct srp_login_rsp);

 FUNC_4();
 VAR_15 = FUNC_5(VAR_10->rsp.len, VAR_9->dds.window[VAR_3].liobn,
    VAR_11->sbuf->dma, VAR_9->dds.window[VAR_4].liobn,
    FUNC_0(VAR_11->remote_token));

 switch (VAR_15) {
 case 128:
  break;

 case 130:
  if (FUNC_1(VAR_9))
   VAR_14 = VAR_5 | VAR_1;
  FUNC_3(&VAR_9->dev, "login_rsp: error copying to client, rc %ld\n",
   VAR_15);
  FUNC_6(VAR_9, VAR_2,
       VAR_14);
  break;
 case 129:
 case 131:
 default:
  FUNC_3(&VAR_9->dev, "login_rsp: error copying to client, rc %ld\n",
   VAR_15);
  FUNC_6(VAR_9, VAR_2, 0);
  break;
 }

 return VAR_15;
}
