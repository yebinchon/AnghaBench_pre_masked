
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_12__ {int handle; int entry_type; int entry_status; } ;
typedef TYPE_1__ sts_entry_t ;
struct rsp_que {int id; } ;
struct req_que {int dummy; } ;
struct qla_hw_data {size_t max_req_queues; struct req_que** req_q_map; } ;
struct TYPE_13__ {int (* done ) (TYPE_2__*,int) ;} ;
typedef TYPE_2__ srb_t ;
struct TYPE_14__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;







 int VAR_0 ;
 int VAR_1 ;



 size_t FUNC_0 (int) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ,TYPE_3__*,int,char*,int,int,int,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_3__*,int,char*,size_t) ;
 int VAR_6 ;
 TYPE_2__* FUNC_3 (TYPE_3__*,char const*,struct req_que*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_5(scsi_qla_host_t *VAR_7, struct rsp_que *VAR_8, sts_entry_t *VAR_9)
{
 srb_t *VAR_10;
 struct qla_hw_data *VAR_11 = VAR_7->hw;
 const char VAR_12[] = "ERROR-IOCB";
 uint16_t VAR_13 = FUNC_0(VAR_9->handle);
 struct req_que *VAR_14 = ((void*)0);
 int VAR_15 = VAR_1 << 16;

 FUNC_1(VAR_5, VAR_7, 0x502a,
     "iocb type %xh with error status %xh, handle %xh, rspq id %d\n",
     VAR_9->entry_type, VAR_9->entry_status, VAR_9->handle, VAR_8->id);

 if (VAR_13 >= VAR_11->max_req_queues || !VAR_11->req_q_map[VAR_13])
  goto fatal;

 VAR_14 = VAR_11->req_q_map[VAR_13];

 if (VAR_9->entry_status & VAR_4)
  VAR_15 = VAR_0 << 16;

 if ((VAR_9->handle & ~VAR_2) == VAR_3)
  return 0;

 switch (VAR_9->entry_type) {
 case 130:
 case 128:
 case 129:
 case 132:
 case 134:
 case 133:
 case 138:
 case 131:
 default:
  VAR_10 = FUNC_3(VAR_7, VAR_12, VAR_14, VAR_9);
  if (VAR_10) {
   VAR_10->done(VAR_10, VAR_15);
   return 0;
  }
  break;

 case 137:
 case 135:
 case 136:
  return 1;
 }
fatal:
 FUNC_2(VAR_6, VAR_7, 0x5030,
     "Error entry - invalid handle/queue (%04x).\n", VAR_13);
 return 0;
}
