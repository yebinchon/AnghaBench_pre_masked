
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rndis_params {int v; int (* resp_avail ) (int ) ;TYPE_1__* dev; } ;
struct rndis_packet_msg_type {int dummy; } ;
struct ethhdr {int dummy; } ;
struct TYPE_8__ {scalar_t__ buf; } ;
typedef TYPE_2__ rndis_resp_t ;
struct TYPE_9__ {int RequestID; } ;
typedef TYPE_3__ rndis_init_msg_type ;
struct TYPE_10__ {void* AFListSize; void* AFListOffset; void* PacketAlignmentFactor; void* MaxTransferSize; void* MaxPacketsPerTransfer; void* Medium; void* DeviceFlags; void* MinorVersion; void* MajorVersion; void* Status; int RequestID; void* MessageLength; void* MessageType; } ;
typedef TYPE_4__ rndis_init_cmplt_type ;
struct TYPE_7__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct rndis_params*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rndis_params *VAR_8,
          rndis_init_msg_type *VAR_9)
{
 rndis_init_cmplt_type *VAR_10;
 rndis_resp_t *VAR_11;

 if (!VAR_8->dev)
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_8, sizeof(rndis_init_cmplt_type));
 if (!VAR_11)
  return -VAR_0;
 VAR_10 = (rndis_init_cmplt_type *)VAR_11->buf;

 VAR_10->MessageType = FUNC_0(VAR_6);
 VAR_10->MessageLength = FUNC_0(52);
 VAR_10->RequestID = VAR_9->RequestID;
 VAR_10->Status = FUNC_0(VAR_7);
 VAR_10->MajorVersion = FUNC_0(VAR_3);
 VAR_10->MinorVersion = FUNC_0(VAR_5);
 VAR_10->DeviceFlags = FUNC_0(VAR_2);
 VAR_10->Medium = FUNC_0(VAR_4);
 VAR_10->MaxPacketsPerTransfer = FUNC_0(1);
 VAR_10->MaxTransferSize = FUNC_0(
    VAR_8->dev->mtu
  + sizeof(struct ethhdr)
  + sizeof(struct rndis_packet_msg_type)
  + 22);
 VAR_10->PacketAlignmentFactor = FUNC_0(0);
 VAR_10->AFListOffset = FUNC_0(0);
 VAR_10->AFListSize = FUNC_0(0);

 VAR_8->resp_avail(VAR_8->v);
 return 0;
}
