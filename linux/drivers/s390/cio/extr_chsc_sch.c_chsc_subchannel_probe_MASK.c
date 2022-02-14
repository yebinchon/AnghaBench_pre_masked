
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {int sch_no; int ssid; } ;
struct subchannel {TYPE_2__ dev; TYPE_1__ schid; int isc; } ;
struct chsc_private {int dummy; } ;


 int FUNC_0 (int,char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct subchannel*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,struct chsc_private*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct chsc_private*) ;
 int FUNC_6 (int *,int ) ;
 struct chsc_private* FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct subchannel *VAR_4)
{
 struct chsc_private *VAR_5;
 int VAR_6;

 FUNC_0(6, "Detected chsc subchannel 0.%x.%04x\n",
   VAR_4->schid.ssid, VAR_4->schid.sch_no);
 VAR_4->isc = VAR_0;
 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;
 FUNC_3(&VAR_4->dev, VAR_5);
 VAR_6 = FUNC_1(VAR_4, (u32)(unsigned long)VAR_4);
 if (VAR_6) {
  FUNC_0(0, "Failed to enable 0.%x.%04x: %d\n",
    VAR_4->schid.ssid, VAR_4->schid.sch_no, VAR_6);
  FUNC_3(&VAR_4->dev, ((void*)0));
  FUNC_5(VAR_5);
 } else {
  if (FUNC_2(&VAR_4->dev)) {
   FUNC_4(&VAR_4->dev, 0);
   FUNC_6(&VAR_4->dev.kobj, VAR_3);
  }
 }
 return VAR_6;
}
