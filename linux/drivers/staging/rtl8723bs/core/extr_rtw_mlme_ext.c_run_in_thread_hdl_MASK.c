
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;
struct RunInThread_param {int context; int (* func ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

u8 FUNC_1(struct adapter *VAR_2, u8 *VAR_3)
{
 struct RunInThread_param *VAR_4;


 if (((void*)0) == VAR_3)
  return VAR_0;
 VAR_4 = (struct RunInThread_param *)VAR_3;

 if (VAR_4->func)
  VAR_4->func(VAR_4->context);

 return VAR_1;
}
