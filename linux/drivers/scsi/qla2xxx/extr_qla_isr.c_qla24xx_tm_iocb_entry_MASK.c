
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sts_entry_24xx {scalar_t__ entry_status; scalar_t__ comp_status; scalar_t__ rsp_data_len; scalar_t__* data; int scsi_status; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_10__ {TYPE_2__ tmf; } ;
struct srb_iocb {TYPE_3__ u; } ;
struct req_que {int dummy; } ;
struct TYPE_8__ {struct srb_iocb iocb_cmd; } ;
struct TYPE_11__ {char* name; int (* done ) (TYPE_4__*,int ) ;int vha; int handle; TYPE_5__* fcport; TYPE_1__ u; } ;
typedef TYPE_4__ srb_t ;
typedef int scsi_qla_host_t ;
struct TYPE_12__ {int vha; } ;
typedef TYPE_5__ fc_port_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__,int ,int,struct sts_entry_24xx*,int) ;
 int FUNC_4 (int ,int ,int,char*,char const*,int ,scalar_t__) ;
 int VAR_6 ;
 TYPE_4__* FUNC_5 (int *,char const*,struct req_que*,void*) ;
 int FUNC_6 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_7(scsi_qla_host_t *VAR_7, struct req_que *VAR_8, void *VAR_9)
{
 const char VAR_10[] = "TMF-IOCB";
 const char *VAR_11;
 fc_port_t *VAR_12;
 srb_t *VAR_13;
 struct srb_iocb *VAR_14;
 struct sts_entry_24xx *VAR_15 = (struct sts_entry_24xx *)VAR_9;

 VAR_13 = FUNC_5(VAR_7, VAR_10, VAR_8, VAR_9);
 if (!VAR_13)
  return;

 VAR_14 = &VAR_13->u.iocb_cmd;
 VAR_11 = VAR_13->name;
 VAR_12 = VAR_13->fcport;
 VAR_14->u.tmf.data = VAR_2;

 if (VAR_15->entry_status) {
  FUNC_4(VAR_6, VAR_12->vha, 0x5038,
      "Async-%s error - hdl=%x entry-status(%x).\n",
      VAR_11, VAR_13->handle, VAR_15->entry_status);
  VAR_14->u.tmf.data = VAR_1;
 } else if (VAR_15->comp_status != FUNC_0(VAR_0)) {
  FUNC_4(VAR_6, VAR_12->vha, 0x5039,
      "Async-%s error - hdl=%x completion status(%x).\n",
      VAR_11, VAR_13->handle, VAR_15->comp_status);
  VAR_14->u.tmf.data = VAR_1;
 } else if ((FUNC_1(VAR_15->scsi_status) &
     VAR_3)) {
  if (FUNC_2(VAR_15->rsp_data_len) < 4) {
   FUNC_4(VAR_6, VAR_12->vha, 0x503b,
       "Async-%s error - hdl=%x not enough response(%d).\n",
       VAR_11, VAR_13->handle, VAR_15->rsp_data_len);
  } else if (VAR_15->data[3]) {
   FUNC_4(VAR_6, VAR_12->vha, 0x503c,
       "Async-%s error - hdl=%x response(%x).\n",
       VAR_11, VAR_13->handle, VAR_15->data[3]);
   VAR_14->u.tmf.data = VAR_1;
  }
 }

 if (VAR_14->u.tmf.data != VAR_2)
  FUNC_3(VAR_4 + VAR_5, VAR_13->vha, 0x5055,
      VAR_15, sizeof(*VAR_15));

 VAR_13->done(VAR_13, 0);
}
