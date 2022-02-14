
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct zfcp_unit {int dev; } ;
struct TYPE_13__ {int min; } ;
struct TYPE_24__ {int min; } ;
struct TYPE_14__ {TYPE_10__ fabric; TYPE_9__ channel; } ;
struct TYPE_22__ {int min; } ;
struct TYPE_21__ {int min; } ;
struct TYPE_23__ {TYPE_7__ fabric; TYPE_6__ channel; } ;
struct TYPE_19__ {int min; } ;
struct TYPE_18__ {int min; } ;
struct TYPE_20__ {TYPE_4__ fabric; TYPE_3__ channel; } ;
struct TYPE_15__ {int lock; TYPE_11__ cmd; TYPE_8__ read; TYPE_5__ write; } ;
struct TYPE_17__ {struct zfcp_port* port; struct scsi_device* sdev; struct zfcp_adapter* adapter; } ;
struct zfcp_scsi_dev {TYPE_12__ latencies; struct zfcp_port* port; TYPE_2__ erp_action; } ;
struct zfcp_port {int adapter; int dev; } ;
struct zfcp_adapter {int connection_features; } ;
struct scsi_device {TYPE_1__* host; } ;
struct fc_rport {int port_name; } ;
struct TYPE_16__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_device*) ;
 struct zfcp_scsi_dev* FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (int *) ;
 struct fc_rport* FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_device*,int ,char*) ;
 int FUNC_8 (struct scsi_device*,int ) ;
 int FUNC_9 (int ) ;
 struct zfcp_port* FUNC_10 (struct zfcp_adapter*,int ) ;
 int FUNC_11 (struct scsi_device*) ;
 scalar_t__ FUNC_12 (struct zfcp_port*) ;
 int VAR_4 ;
 struct zfcp_unit* FUNC_13 (struct zfcp_port*,int ) ;

__attribute__((used)) static int FUNC_14(struct scsi_device *VAR_5)
{
 struct fc_rport *VAR_6 = FUNC_6(FUNC_3(VAR_5));
 struct zfcp_adapter *VAR_7 =
  (struct zfcp_adapter *) VAR_5->host->hostdata[0];
 struct zfcp_scsi_dev *VAR_8 = FUNC_4(VAR_5);
 struct zfcp_port *VAR_9;
 struct zfcp_unit *VAR_10;
 int VAR_11 = VAR_7->connection_features & VAR_1;

 VAR_8->erp_action.adapter = VAR_7;
 VAR_8->erp_action.sdev = VAR_5;

 VAR_9 = FUNC_10(VAR_7, VAR_6->port_name);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->erp_action.port = VAR_9;

 FUNC_0(&VAR_4);
 if (FUNC_12(VAR_9)) {

  FUNC_1(&VAR_4);
  FUNC_2(&VAR_9->dev);
  return -VAR_0;
 }
 FUNC_1(&VAR_4);

 VAR_10 = FUNC_13(VAR_9, FUNC_11(VAR_5));
 if (VAR_10)
  FUNC_2(&VAR_10->dev);

 if (!VAR_10 && !(VAR_3 && VAR_11)) {
  FUNC_2(&VAR_9->dev);
  return -VAR_0;
 }

 VAR_8->port = VAR_9;
 VAR_8->latencies.write.channel.min = 0xFFFFFFFF;
 VAR_8->latencies.write.fabric.min = 0xFFFFFFFF;
 VAR_8->latencies.read.channel.min = 0xFFFFFFFF;
 VAR_8->latencies.read.fabric.min = 0xFFFFFFFF;
 VAR_8->latencies.cmd.channel.min = 0xFFFFFFFF;
 VAR_8->latencies.cmd.fabric.min = 0xFFFFFFFF;
 FUNC_5(&VAR_8->latencies.lock);

 FUNC_8(VAR_5, VAR_2);
 FUNC_7(VAR_5, 0, "scsla_1");
 FUNC_9(VAR_9->adapter);

 return 0;
}
