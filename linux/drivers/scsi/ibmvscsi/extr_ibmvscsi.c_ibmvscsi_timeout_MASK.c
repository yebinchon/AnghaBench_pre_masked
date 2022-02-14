
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int opcode; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {TYPE_2__ srp; } ;
struct srp_event_struct {TYPE_3__ iu; struct ibmvscsi_host_data* hostdata; } ;
struct ibmvscsi_host_data {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct srp_event_struct* VAR_0 ;
 struct srp_event_struct* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct ibmvscsi_host_data*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct srp_event_struct *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1);
 struct ibmvscsi_host_data *VAR_4 = VAR_3->hostdata;

 FUNC_0(VAR_4->dev, "Command timed out (%x). Resetting connection\n",
  VAR_3->iu.srp.cmd.opcode);

 FUNC_2(VAR_4);
}
