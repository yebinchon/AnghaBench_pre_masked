
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sch_no; int ssid; } ;
struct subchannel {int reg_mutex; int dev; TYPE_1__ schid; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct subchannel *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->reg_mutex);
 FUNC_0(&VAR_0->dev, "0.%x.%04x", VAR_0->schid.ssid,
       VAR_0->schid.sch_no);
 VAR_1 = FUNC_1(&VAR_0->dev);
 FUNC_3(&VAR_0->reg_mutex);
 return VAR_1;
}
