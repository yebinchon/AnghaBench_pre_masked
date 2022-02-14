
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ port_name; scalar_t__ node_name; } ;
struct ibmvfc_target {scalar_t__ scsi_id; TYPE_1__ ids; } ;
struct TYPE_4__ {int * response; } ;
struct ibmvfc_passthru_mad {TYPE_2__ fc_iu; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ibmvfc_passthru_mad *VAR_0,
        struct ibmvfc_target *VAR_1)
{
 if (FUNC_1((u8 *)&VAR_0->fc_iu.response[2]) != VAR_1->ids.port_name)
  return 1;
 if (FUNC_1((u8 *)&VAR_0->fc_iu.response[4]) != VAR_1->ids.node_name)
  return 1;
 if (FUNC_0(VAR_0->fc_iu.response[6]) != VAR_1->scsi_id)
  return 1;
 return 0;
}
