
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct zfcp_latency_cont {int counter; int fabric; int channel; } ;
struct TYPE_17__ {int lock; struct zfcp_latency_cont cmd; struct zfcp_latency_cont write; struct zfcp_latency_cont read; } ;
struct zfcp_scsi_dev {TYPE_8__ latencies; } ;
struct TYPE_12__ {int qdio_outb_usage; } ;
struct zfcp_fsf_req {int status; TYPE_7__* qtcb; TYPE_4__* adapter; TYPE_3__ qdio_req; } ;
struct zfcp_blk_drv_data {int channel_lat; int fabric_lat; int flags; int outb_usage; scalar_t__ inb_usage; int magic; } ;
struct scsi_cmnd {TYPE_9__* request; int device; } ;
struct fsf_qual_latency_info {int channel_lat; int fabric_lat; } ;
typedef int blktrc ;
struct TYPE_18__ {int q; } ;
struct TYPE_14__ {int data_direction; } ;
struct TYPE_15__ {TYPE_5__ io; } ;
struct TYPE_10__ {struct fsf_qual_latency_info latency_info; } ;
struct TYPE_11__ {TYPE_1__ prot_status_qual; } ;
struct TYPE_16__ {TYPE_6__ bottom; TYPE_2__ prefix; } ;
struct TYPE_13__ {int timer_ticks; int adapter_features; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_9__*,struct zfcp_blk_drv_data*,int) ;
 struct zfcp_scsi_dev* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct zfcp_fsf_req *VAR_5, struct scsi_cmnd *VAR_6)
{
 struct fsf_qual_latency_info *VAR_7;
 struct zfcp_latency_cont *VAR_8 = ((void*)0);
 struct zfcp_scsi_dev *VAR_9;
 struct zfcp_blk_drv_data VAR_10;
 int VAR_11 = VAR_5->adapter->timer_ticks;

 VAR_7 = &VAR_5->qtcb->prefix.prot_status_qual.latency_info;

 VAR_10.flags = 0;
 VAR_10.magic = VAR_1;
 if (VAR_5->status & VAR_4)
  VAR_10.flags |= VAR_3;
 VAR_10.inb_usage = 0;
 VAR_10.outb_usage = VAR_5->qdio_req.qdio_outb_usage;

 if (VAR_5->adapter->adapter_features & VAR_0 &&
     !(VAR_5->status & VAR_4)) {
  VAR_9 = FUNC_1(VAR_6->device);
  VAR_10.flags |= VAR_2;
  VAR_10.channel_lat = VAR_7->channel_lat * VAR_11;
  VAR_10.fabric_lat = VAR_7->fabric_lat * VAR_11;

  switch (VAR_5->qtcb->bottom.io.data_direction) {
  case 132:
  case 133:
  case 129:
   VAR_8 = &VAR_9->latencies.read;
   break;
  case 130:
  case 131:
  case 128:
   VAR_8 = &VAR_9->latencies.write;
   break;
  case 134:
   VAR_8 = &VAR_9->latencies.cmd;
   break;
  }

  if (VAR_8) {
   FUNC_2(&VAR_9->latencies.lock);
   FUNC_4(&VAR_8->channel, VAR_7->channel_lat);
   FUNC_4(&VAR_8->fabric, VAR_7->fabric_lat);
   VAR_8->counter++;
   FUNC_3(&VAR_9->latencies.lock);
  }
 }

 FUNC_0(VAR_6->request->q, VAR_6->request, &VAR_10,
       sizeof(VAR_10));
}
