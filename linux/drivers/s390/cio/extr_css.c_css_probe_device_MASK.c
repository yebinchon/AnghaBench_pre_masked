
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct subchannel {int dev; } ;
struct schib {int dummy; } ;


 scalar_t__ FUNC_0 (struct subchannel*) ;
 int FUNC_1 (struct subchannel*) ;
 struct subchannel* FUNC_2 (struct subchannel_id,struct schib*) ;
 int FUNC_3 (struct subchannel*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct subchannel_id VAR_0, struct schib *VAR_1)
{
 struct subchannel *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  FUNC_4(&VAR_2->dev);

 return VAR_3;
}
