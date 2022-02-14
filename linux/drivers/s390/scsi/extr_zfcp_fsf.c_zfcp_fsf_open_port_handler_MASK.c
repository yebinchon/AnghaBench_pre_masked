
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zfcp_port {int dev; int status; int handle; scalar_t__ wwpn; } ;
struct zfcp_fsf_req {int status; TYPE_6__* qtcb; TYPE_2__* adapter; struct zfcp_port* data; } ;
struct TYPE_9__ {int * word; } ;
struct fsf_qtcb_header {int fsf_status; int port_handle; TYPE_3__ fsf_status_qual; } ;
struct fc_els_flogi {int dummy; } ;
struct TYPE_10__ {int els1_length; scalar_t__ els; } ;
struct TYPE_11__ {TYPE_4__ support; } ;
struct TYPE_12__ {TYPE_5__ bottom; struct fsf_qtcb_header header; } ;
struct TYPE_8__ {TYPE_1__* ccw_device; } ;
struct TYPE_7__ {int dev; } ;





 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,char*,unsigned long long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zfcp_port*,int ) ;
 int FUNC_5 (struct zfcp_port*,struct fc_els_flogi*) ;

__attribute__((used)) static void FUNC_6(struct zfcp_fsf_req *VAR_6)
{
 struct zfcp_port *VAR_7 = VAR_6->data;
 struct fsf_qtcb_header *VAR_8 = &VAR_6->qtcb->header;
 struct fc_els_flogi *VAR_9;

 if (VAR_6->status & VAR_4)
  goto out;

 switch (VAR_8->fsf_status) {
 case 132:
  break;
 case 133:
  FUNC_2(&VAR_6->adapter->ccw_device->dev,
    "Not enough FCP adapter resources to open "
    "remote port 0x%016Lx\n",
    (unsigned long long)VAR_7->wwpn);
  FUNC_4(VAR_7,
      VAR_2);
  VAR_6->status |= VAR_4;
  break;
 case 135:
  switch (VAR_8->fsf_status_qual.word[0]) {
  case 131:


  case 129:
  case 130:
   VAR_6->status |= VAR_4;
   break;
  }
  break;
 case 134:
  VAR_7->handle = VAR_8->port_handle;
  FUNC_1(VAR_3 |
    VAR_5, &VAR_7->status);
  FUNC_0(VAR_1,
                    &VAR_7->status);
  VAR_9 = (struct fc_els_flogi *) VAR_6->qtcb->bottom.support.els;
  if (VAR_6->qtcb->bottom.support.els1_length >=
      VAR_0)
    FUNC_5(VAR_7, VAR_9);
  break;
 case 128:
  VAR_6->status |= VAR_4;
  break;
 }

out:
 FUNC_3(&VAR_7->dev);
}
