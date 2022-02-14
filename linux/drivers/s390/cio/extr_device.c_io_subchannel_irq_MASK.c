
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int dev; } ;
struct ccw_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ccw_device*,int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct ccw_device* FUNC_4 (struct subchannel*) ;

__attribute__((used)) static void FUNC_5(struct subchannel *VAR_2)
{
 struct ccw_device *VAR_3;

 VAR_3 = FUNC_4(VAR_2);

 FUNC_0(6, "IRQ");
 FUNC_0(6, FUNC_2(&VAR_2->dev));
 if (VAR_3)
  FUNC_1(VAR_3, VAR_0);
 else
  FUNC_3(VAR_1);
}
