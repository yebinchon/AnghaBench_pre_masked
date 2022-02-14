
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct subchannel {int schid; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,struct subchannel_id*) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static int
FUNC_2(struct device *VAR_0, const void *VAR_1)
{
 struct subchannel *VAR_2;
 struct subchannel_id *VAR_3 = (void *)VAR_1;

 VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_2->schid, VAR_3);
}
