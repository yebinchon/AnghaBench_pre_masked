
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_13__ {int tmf; int lun; } ;
struct TYPE_12__ {int tptt; int hashed_src_addr; int hashed_dest_addr; int frame_type; } ;
struct TYPE_14__ {int proto_conn_rate; int retry_count; void* index; void* itnl_to; void* conn_handle; void* sister_scb; TYPE_5__ ssp_task; TYPE_4__ ssp_frame; } ;
struct TYPE_9__ {int opcode; } ;
struct scb {TYPE_6__ ssp_tmf; TYPE_1__ header; } ;
struct domain_device {int tproto; int linkrate; scalar_t__ lldd_dev; TYPE_3__* port; int * hashed_sas_addr; } ;
struct asd_ha_struct {int dummy; } ;
struct asd_ascb {struct scb* scb; TYPE_7__* uldd_task; int * completion; } ;
struct TYPE_15__ {int dl_opcode; } ;
struct TYPE_11__ {TYPE_2__* ha; } ;
struct TYPE_10__ {int * hashed_sas_addr; struct asd_ha_struct* lldd_ha; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct asd_ascb* FUNC_2 (struct asd_ha_struct*,int*,int ) ;
 int FUNC_3 (struct asd_ascb*) ;
 int FUNC_4 (struct asd_ascb*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int) ;
 TYPE_7__ VAR_16 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct domain_device *VAR_17, u8 *VAR_18,
    int VAR_19, int VAR_20)
{
 struct asd_ha_struct *VAR_21 = VAR_17->port->ha->lldd_ha;
 struct asd_ascb *VAR_22;
 int VAR_23 = 1;
 struct scb *VAR_24;
 FUNC_0(VAR_15);
 FUNC_1(VAR_16);

 if (!(VAR_17->tproto & VAR_6))
  return VAR_10;

 VAR_22 = FUNC_2(VAR_21, &VAR_23, VAR_1);
 if (!VAR_22)
  return -VAR_0;

 VAR_22->completion = &VAR_15;
 VAR_22->uldd_task = &VAR_16;
 VAR_24 = VAR_22->scb;

 if (VAR_19 == VAR_8)
  VAR_24->header.opcode = VAR_5;
 else
  VAR_24->header.opcode = VAR_3;

 VAR_24->ssp_tmf.proto_conn_rate = (1 << 4);
 VAR_24->ssp_tmf.proto_conn_rate |= VAR_17->linkrate;

 VAR_24->ssp_tmf.ssp_frame.frame_type = VAR_7;
 FUNC_7(VAR_24->ssp_tmf.ssp_frame.hashed_dest_addr,
        VAR_17->hashed_sas_addr, VAR_2);
 FUNC_7(VAR_24->ssp_tmf.ssp_frame.hashed_src_addr,
        VAR_17->port->ha->hashed_sas_addr, VAR_2);
 VAR_24->ssp_tmf.ssp_frame.tptt = FUNC_5(0xFFFF);

 FUNC_7(VAR_24->ssp_tmf.ssp_task.lun, VAR_18, 8);
 VAR_24->ssp_tmf.ssp_task.tmf = VAR_19;

 VAR_24->ssp_tmf.sister_scb = FUNC_6(0xFFFF);
 VAR_24->ssp_tmf.conn_handle= FUNC_6((u16)(unsigned long)
           VAR_17->lldd_dev);
 VAR_24->ssp_tmf.retry_count = 1;
 VAR_24->ssp_tmf.itnl_to = FUNC_6(VAR_4);
 if (VAR_19 == VAR_8)
  VAR_24->ssp_tmf.index = FUNC_6(VAR_20);

 VAR_23 = FUNC_4(VAR_22, VAR_13,
       VAR_14);
 if (VAR_23)
  goto out_err;
 FUNC_8(&VAR_15);

 switch (VAR_16.dl_opcode) {
 case 134:
  VAR_23 = VAR_9;
  break;
 case 133:
  VAR_23 = VAR_12;
  break;
 case 128:
  VAR_23 = VAR_11;
  break;
 case 130:
 case 129:
 case 132:
  VAR_23 = VAR_9;
  break;
 case 131:
  VAR_23 = VAR_10;
  break;
 default:

  VAR_23 = VAR_16.dl_opcode;
  break;
 }
 return VAR_23;
out_err:
 FUNC_3(VAR_22);
 return VAR_23;
}
