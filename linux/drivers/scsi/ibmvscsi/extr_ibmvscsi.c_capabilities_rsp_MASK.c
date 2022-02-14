
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


struct srp_event_struct {TYPE_2__* xfer_iu; struct ibmvscsi_host_data* hostdata; } ;
struct TYPE_14__ {scalar_t__ server_support; } ;
struct TYPE_15__ {TYPE_5__ common; } ;
struct TYPE_12__ {scalar_t__ server_support; } ;
struct TYPE_13__ {TYPE_3__ common; } ;
struct TYPE_16__ {TYPE_6__ reserve; TYPE_4__ migration; } ;
struct ibmvscsi_host_data {int dev; TYPE_7__ caps; } ;
struct TYPE_17__ {int status; } ;
struct TYPE_18__ {TYPE_8__ common; } ;
struct TYPE_10__ {TYPE_9__ capabilities; } ;
struct TYPE_11__ {TYPE_1__ mad; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static void FUNC_4(struct srp_event_struct *VAR_2)
{
 struct ibmvscsi_host_data *VAR_3 = VAR_2->hostdata;

 if (VAR_2->xfer_iu->mad.capabilities.common.status) {
  FUNC_1(VAR_3->dev, "error 0x%X getting capabilities info\n",
   VAR_2->xfer_iu->mad.capabilities.common.status);
 } else {
  if (VAR_3->caps.migration.common.server_support !=
      FUNC_0(VAR_0))
   FUNC_2(VAR_3->dev, "Partition migration not supported\n");

  if (VAR_1) {
   if (VAR_3->caps.reserve.common.server_support ==
       FUNC_0(VAR_0))
    FUNC_2(VAR_3->dev, "Client reserve enabled\n");
   else
    FUNC_2(VAR_3->dev, "Client reserve not supported\n");
  }
 }

 FUNC_3(VAR_3);
}
