
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int schib; int schid; } ;
struct schib {int dummy; } ;
typedef int schib ;


 int VAR_0 ;
 int FUNC_0 (struct schib*) ;
 int FUNC_1 (int *,struct schib*,int) ;
 scalar_t__ FUNC_2 (int ,struct schib*) ;

int FUNC_3(struct subchannel *VAR_1)
{
 struct schib VAR_2;

 if (FUNC_2(VAR_1->schid, &VAR_2) || !FUNC_0(&VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_1->schib, &VAR_2, sizeof(VAR_2));
 return 0;
}
