
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_6__ {TYPE_2__* dvbdev; } ;
struct TYPE_4__ {int num; int device; } ;
struct pt3_adapter {struct task_struct* thread; TYPE_3__ dmxdev; TYPE_1__ dvb_adap; } ;
struct TYPE_5__ {int id; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 struct task_struct* FUNC_3 (int ,struct pt3_adapter*,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct pt3_adapter*) ;

__attribute__((used)) static int FUNC_5(struct pt3_adapter *VAR_1)
{
 struct task_struct *VAR_2;


 VAR_2 = FUNC_3(VAR_0, VAR_1, "pt3-ad%i-dmx%i",
    VAR_1->dvb_adap.num, VAR_1->dmxdev.dvbdev->id);
 if (FUNC_0(VAR_2)) {
  int VAR_3 = FUNC_1(VAR_2);

  VAR_1->thread = ((void*)0);
  FUNC_2(VAR_1->dvb_adap.device,
    "PT3 (adap:%d, dmx:%d): failed to start kthread\n",
    VAR_1->dvb_adap.num, VAR_1->dmxdev.dvbdev->id);
  return VAR_3;
 }
 VAR_1->thread = VAR_2;

 return FUNC_4(VAR_1);
}
