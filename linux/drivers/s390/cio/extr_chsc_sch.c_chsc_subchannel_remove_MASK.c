
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int dev; } ;
struct chsc_private {TYPE_1__* request; } ;
struct TYPE_2__ {int completion; } ;


 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int *) ;
 struct chsc_private* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct chsc_private*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct subchannel *VAR_0)
{
 struct chsc_private *VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = FUNC_2(&VAR_0->dev);
 FUNC_3(&VAR_0->dev, ((void*)0));
 if (VAR_1->request) {
  FUNC_1(&VAR_1->request->completion);
  FUNC_5(&VAR_0->dev);
 }
 FUNC_4(VAR_1);
 return 0;
}
