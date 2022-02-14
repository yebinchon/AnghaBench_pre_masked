
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sent_enbdis; } ;
struct visornic_devdata {TYPE_2__ chstat; TYPE_5__* cmdrsp_rcv; TYPE_1__* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int enable; struct net_device* context; } ;
struct TYPE_8__ {int type; TYPE_4__ enbdis; } ;
struct TYPE_10__ {int cmdtype; TYPE_3__ net; } ;
struct TYPE_6__ {int visorchannel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, int VAR_4,
         struct visornic_devdata *VAR_5)
{
 int VAR_6;

 VAR_5->cmdrsp_rcv->net.enbdis.enable = VAR_4;
 VAR_5->cmdrsp_rcv->net.enbdis.context = VAR_3;
 VAR_5->cmdrsp_rcv->net.type = VAR_2;
 VAR_5->cmdrsp_rcv->cmdtype = VAR_0;
 VAR_6 = FUNC_0(VAR_5->dev->visorchannel,
     VAR_1,
     VAR_5->cmdrsp_rcv);
 if (VAR_6)
  return VAR_6;
 VAR_5->chstat.sent_enbdis++;
 return 0;
}
