
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int sch_no; int ssid; } ;
struct TYPE_7__ {int fctl; } ;
struct TYPE_8__ {TYPE_2__ cmd; } ;
struct TYPE_9__ {TYPE_3__ scsw; } ;
struct subchannel {int dev; TYPE_5__ schid; int lock; TYPE_4__ schib; } ;
struct chsc_request {int dummy; } ;
struct chsc_private {struct chsc_request* request; } ;
struct TYPE_6__ {int key; TYPE_5__ sid; } ;
struct chsc_async_area {TYPE_1__ header; } ;
typedef int dbf ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,TYPE_5__*,int) ;
 int FUNC_2 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct chsc_async_area*) ;
 struct subchannel* FUNC_4 (struct subchannel*) ;
 struct chsc_private* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct chsc_async_area *VAR_5,
        struct chsc_request *VAR_6)
{
 int VAR_7;
 struct chsc_private *VAR_8;
 struct subchannel *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_2;
 char VAR_11[10];

 VAR_5->header.key = VAR_3 >> 4;
 while ((VAR_9 = FUNC_4(VAR_9))) {
  FUNC_8(VAR_9->lock);
  VAR_8 = FUNC_5(&VAR_9->dev);
  if (VAR_8->request) {
   FUNC_9(VAR_9->lock);
   VAR_10 = -VAR_0;
   continue;
  }
  VAR_5->header.sid = VAR_9->schid;
  FUNC_0(2, "schid");
  FUNC_1(2, &VAR_9->schid, sizeof(VAR_9->schid));
  VAR_7 = FUNC_3(VAR_5);
  FUNC_7(VAR_11, sizeof(VAR_11), "cc:%d", VAR_7);
  FUNC_0(2, VAR_11);
  switch (VAR_7) {
  case 0:
   VAR_10 = 0;
   break;
  case 1:
   VAR_9->schib.scsw.cmd.fctl |= VAR_4;
   VAR_10 = -VAR_1;
   VAR_8->request = VAR_6;
   break;
  case 2:
   VAR_10 = -VAR_0;
   break;
  default:
   VAR_10 = -VAR_2;
  }
  FUNC_9(VAR_9->lock);
  FUNC_2(2, "chsc on 0.%x.%04x returned cc=%d\n",
    VAR_9->schid.ssid, VAR_9->schid.sch_no, VAR_7);
  if (VAR_10 == -VAR_1)
   return -VAR_1;
  FUNC_6(&VAR_9->dev);
  if (VAR_10 == 0)
   return 0;
 }
 return VAR_10;
}
