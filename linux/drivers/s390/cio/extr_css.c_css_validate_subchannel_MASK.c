
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel_id {int sch_no; int ssid; } ;
struct TYPE_2__ {int st; int dev; } ;
struct schib {TYPE_1__ pmcw; } ;


 int FUNC_0 (int,char*,int ,int ,...) ;
 int VAR_0 ;


 int FUNC_1 (struct schib*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct subchannel_id VAR_1,
       struct schib *VAR_2)
{
 int VAR_3;

 switch (VAR_2->pmcw.st) {
 case 129:
 case 128:
  if (!FUNC_1(VAR_2))
   VAR_3 = -VAR_0;
  else if (FUNC_2(VAR_1.ssid, VAR_2->pmcw.dev)) {
   FUNC_0(6, "Blacklisted device detected "
          "at devno %04X, subchannel set %x\n",
          VAR_2->pmcw.dev, VAR_1.ssid);
   VAR_3 = -VAR_0;
  } else
   VAR_3 = 0;
  break;
 default:
  VAR_3 = 0;
 }
 if (VAR_3)
  goto out;

 FUNC_0(4, "Subchannel 0.%x.%04x reports subchannel type %04X\n",
        VAR_1.ssid, VAR_1.sch_no, VAR_2->pmcw.st);
out:
 return VAR_3;
}
