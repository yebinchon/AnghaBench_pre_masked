
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct rndis_params {int v; int (* resp_avail ) (int ) ;int dev; } ;
struct TYPE_7__ {scalar_t__ buf; } ;
typedef TYPE_1__ rndis_resp_t ;
struct TYPE_8__ {int InformationBufferLength; int InformationBufferOffset; int OID; int RequestID; } ;
typedef TYPE_2__ rndis_query_msg_type ;
struct TYPE_9__ {void* Status; void* InformationBufferOffset; void* InformationBufferLength; void* MessageLength; int RequestID; void* MessageType; } ;
typedef TYPE_3__ rndis_query_cmplt_type ;
typedef int oid_supported_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rndis_params*,int,int *,int,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct rndis_params*,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct rndis_params *VAR_5,
    rndis_query_msg_type *VAR_6)
{
 rndis_query_cmplt_type *VAR_7;
 rndis_resp_t *VAR_8;


 if (!VAR_5->dev)
  return -VAR_1;







 VAR_8 = FUNC_3(VAR_5,
  sizeof(oid_supported_list) + sizeof(rndis_query_cmplt_type));
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = (rndis_query_cmplt_type *)VAR_8->buf;

 VAR_7->MessageType = FUNC_0(VAR_2);
 VAR_7->RequestID = VAR_6->RequestID;

 if (FUNC_1(VAR_5, FUNC_2(VAR_6->OID),
   FUNC_2(VAR_6->InformationBufferOffset)
     + 8 + (u8 *)VAR_6,
   FUNC_2(VAR_6->InformationBufferLength),
   VAR_8)) {

  VAR_7->Status = FUNC_0(VAR_3);
  VAR_7->MessageLength = FUNC_0(sizeof *VAR_7);
  VAR_7->InformationBufferLength = FUNC_0(0);
  VAR_7->InformationBufferOffset = FUNC_0(0);
 } else
  VAR_7->Status = FUNC_0(VAR_4);

 VAR_5->resp_avail(VAR_5->v);
 return 0;
}
