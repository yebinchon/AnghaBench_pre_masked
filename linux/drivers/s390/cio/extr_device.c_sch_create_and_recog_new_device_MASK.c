
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dummy; } ;
struct ccw_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (struct subchannel*) ;
 struct ccw_device* FUNC_2 (struct subchannel*) ;
 int FUNC_3 (struct ccw_device*,struct subchannel*) ;

__attribute__((used)) static void FUNC_4(struct subchannel *VAR_0)
{
 struct ccw_device *VAR_1;


 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1)) {

  FUNC_1(VAR_0);
  return;
 }

 FUNC_3(VAR_1, VAR_0);
}
