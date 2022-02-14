
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
typedef int u32 ;
struct srp_login_rej {int buf_fmt; int tag; int reason; int opcode; } ;
struct TYPE_11__ {TYPE_4__* window; } ;
struct scsi_info {int dev; TYPE_5__ dds; } ;
struct iu_entry {int remote_token; TYPE_3__* sbuf; } ;
struct TYPE_8__ {int len; int tag; } ;
struct ibmvscsis_cmd {TYPE_2__ rsp; struct iu_entry* iue; } ;
struct format_code {int buffers; } ;
struct TYPE_7__ {struct srp_login_rej login_rej; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scsi_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,long) ;
 int FUNC_4 () ;
 long FUNC_5 (int,int ,int ,int ,int ) ;
 int FUNC_6 (struct scsi_info*,int ,int) ;
 int FUNC_7 (struct srp_login_rej*,int ,int) ;
 TYPE_6__* FUNC_8 (struct iu_entry*) ;

__attribute__((used)) static long FUNC_9(struct scsi_info *VAR_8,
        struct ibmvscsis_cmd *VAR_9, u32 VAR_10)
{
 struct iu_entry *VAR_11 = VAR_9->iue;
 struct srp_login_rej *VAR_12 = &FUNC_8(VAR_11)->srp.login_rej;
 struct format_code *VAR_13;
 uint VAR_14 = 0;
 long VAR_15 = VAR_0;

 FUNC_7(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->opcode = VAR_6;
 VAR_12->reason = FUNC_2(VAR_10);
 VAR_12->tag = VAR_9->rsp.tag;
 VAR_13 = (struct format_code *)&VAR_12->buf_fmt;
 VAR_13->buffers = VAR_7;

 VAR_9->rsp.len = sizeof(*VAR_12);

 FUNC_4();
 VAR_15 = FUNC_5(VAR_9->rsp.len, VAR_8->dds.window[VAR_3].liobn,
    VAR_11->sbuf->dma, VAR_8->dds.window[VAR_4].liobn,
    FUNC_0(VAR_11->remote_token));

 switch (VAR_15) {
 case 128:
  break;
 case 130:
  if (FUNC_1(VAR_8))
   VAR_14 = VAR_5 | VAR_1;
  FUNC_3(&VAR_8->dev, "login_rej: error copying to client, rc %ld\n",
   VAR_15);
  FUNC_6(VAR_8, VAR_2,
       VAR_14);
  break;
 case 129:
 case 131:
 default:
  FUNC_3(&VAR_8->dev, "login_rej: error copying to client, rc %ld\n",
   VAR_15);
  FUNC_6(VAR_8, VAR_2, 0);
  break;
 }

 return VAR_15;
}
