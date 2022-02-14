
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_call {int operation_ID; int * type; int service_id; int rxcall; TYPE_1__* net; int epoch; } ;
struct TYPE_2__ {int socket; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;

bool FUNC_2(struct afs_call *VAR_8)
{
 FUNC_0("{%u, CB.OP %u}", VAR_8->service_id, VAR_8->operation_ID);

 VAR_8->epoch = FUNC_1(VAR_8->net->socket, VAR_8->rxcall);

 switch (VAR_8->operation_ID) {
 case 134:
  VAR_8->type = &VAR_1;
  return 1;
 case 133:
  VAR_8->type = &VAR_2;
  return 1;
 case 132:
  VAR_8->type = &VAR_3;
  return 1;
 case 131:
  VAR_8->type = &VAR_4;
  return 1;
 case 130:
  VAR_8->type = &VAR_5;
  return 1;
 case 129:
  VAR_8->type = &VAR_6;
  return 1;
 case 128:
  if (VAR_8->service_id != VAR_0)
   return 0;
  VAR_8->type = &VAR_7;
  return 1;
 default:
  return 0;
 }
}
