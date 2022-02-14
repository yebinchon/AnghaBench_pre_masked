
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int CreditRequest; } ;
struct smb2_write_rsp {TYPE_1__ sync_hdr; int DataLength; } ;
struct mid_q_entry {int mid_state; scalar_t__ resp_buf; struct cifs_writedata* callback_data; } ;
struct cifs_writedata {scalar_t__ result; unsigned int bytes; int work; int offset; TYPE_3__* cfile; int * mr; } ;
struct cifs_tcon {TYPE_4__* ses; int tid; } ;
struct cifs_credits {int instance; void* value; } ;
struct TCP_Server_Info {int reconnect_instance; } ;
struct TYPE_8__ {int Suid; struct TCP_Server_Info* server; } ;
struct TYPE_6__ {int persistent_fid; } ;
struct TYPE_7__ {TYPE_2__ fid; int tlink; } ;


 int FUNC_0 (struct mid_q_entry*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int FUNC_1 (struct TCP_Server_Info*,struct cifs_credits*,int ) ;
 int FUNC_2 (struct cifs_tcon*,int ) ;
 int VAR_4 ;
 void* FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct mid_q_entry*,struct TCP_Server_Info*,int ) ;
 int FUNC_7 (int *) ;
 struct cifs_tcon* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ,unsigned int) ;
 int FUNC_10 (int ,int ,int ,int ,int ,unsigned int,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct mid_q_entry *VAR_5)
{
 struct cifs_writedata *VAR_6 = VAR_5->callback_data;
 struct cifs_tcon *VAR_7 = FUNC_8(VAR_6->cfile->tlink);
 struct TCP_Server_Info *VAR_8 = VAR_7->ses->server;
 unsigned int VAR_9;
 struct smb2_write_rsp *VAR_10 = (struct smb2_write_rsp *)VAR_5->resp_buf;
 struct cifs_credits VAR_11 = { .value = 0, .instance = 0 };

 switch (VAR_5->mid_state) {
 case 129:
  VAR_11.value = FUNC_3(VAR_10->sync_hdr.CreditRequest);
  VAR_11.instance = VAR_8->reconnect_instance;
  VAR_6->result = FUNC_6(VAR_5, VAR_8, 0);
  if (VAR_6->result != 0)
   break;

  VAR_9 = FUNC_4(VAR_10->DataLength);






  if (VAR_9 > VAR_6->bytes)
   VAR_9 &= 0xFFFF;

  if (VAR_9 < VAR_6->bytes)
   VAR_6->result = -VAR_2;
  else
   VAR_6->bytes = VAR_9;
  break;
 case 131:
 case 128:
  VAR_6->result = -VAR_0;
  break;
 case 130:
  VAR_11.value = FUNC_3(VAR_10->sync_hdr.CreditRequest);
  VAR_11.instance = VAR_8->reconnect_instance;

 default:
  VAR_6->result = -VAR_1;
  break;
 }
 if (VAR_6->result) {
  FUNC_2(VAR_7, VAR_3);
  FUNC_10(0 ,
         VAR_6->cfile->fid.persistent_fid,
         VAR_7->tid, VAR_7->ses->Suid, VAR_6->offset,
         VAR_6->bytes, VAR_6->result);
 } else
  FUNC_9(0 ,
          VAR_6->cfile->fid.persistent_fid,
          VAR_7->tid, VAR_7->ses->Suid,
          VAR_6->offset, VAR_6->bytes);

 FUNC_5(VAR_4, &VAR_6->work);
 FUNC_0(VAR_5);
 FUNC_1(VAR_8, &VAR_11, 0);
}
