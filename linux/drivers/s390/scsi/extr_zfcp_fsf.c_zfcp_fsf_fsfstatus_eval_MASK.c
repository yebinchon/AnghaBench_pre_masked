
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_4__* adapter; TYPE_3__* qtcb; } ;
struct TYPE_8__ {TYPE_1__* ccw_device; } ;
struct TYPE_6__ {int fsf_status; int fsf_command; } ;
struct TYPE_7__ {TYPE_2__ header; } ;
struct TYPE_5__ {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 int FUNC_3 (struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_4(struct zfcp_fsf_req *VAR_1)
{
 if (FUNC_1(VAR_1->status & VAR_0))
  return;

 switch (VAR_1->qtcb->header.fsf_status) {
 case 128:
  FUNC_0(&VAR_1->adapter->ccw_device->dev,
   "The FCP adapter does not recognize the command 0x%x\n",
   VAR_1->qtcb->header.fsf_command);
  FUNC_2(VAR_1->adapter, 0, "fsfse_1");
  VAR_1->status |= VAR_0;
  break;
 case 129:
  FUNC_3(VAR_1);
  break;
 }
}
