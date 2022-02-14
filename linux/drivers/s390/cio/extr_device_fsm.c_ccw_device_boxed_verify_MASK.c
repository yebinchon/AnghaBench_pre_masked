
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct subchannel {int schid; } ;
struct TYPE_2__ {int parent; } ;
struct ccw_device {scalar_t__ online; TYPE_1__ dev; } ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
typedef scalar_t__ addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (struct ccw_device*,int) ;
 scalar_t__ FUNC_2 (struct subchannel*,int ) ;
 int FUNC_3 (int ) ;
 struct subchannel* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ccw_device *VAR_1,
        enum dev_event VAR_2)
{
 struct subchannel *VAR_3 = FUNC_4(VAR_1->dev.parent);

 if (VAR_1->online) {
  if (FUNC_2(VAR_3, (u32) (addr_t) VAR_3))
   FUNC_0(VAR_1, VAR_0);
  else
   FUNC_1(VAR_1, VAR_2);
 } else
  FUNC_3(VAR_3->schid);
}
