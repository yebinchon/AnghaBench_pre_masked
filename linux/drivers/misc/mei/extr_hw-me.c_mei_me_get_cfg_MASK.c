
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cfg {int dummy; } ;
typedef scalar_t__ kernel_ulong_t ;


 scalar_t__ FUNC_0 (struct mei_cfg const**) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 struct mei_cfg const** VAR_1 ;

const struct mei_cfg *FUNC_2(kernel_ulong_t VAR_2)
{
 FUNC_1(FUNC_0(VAR_1) != VAR_0);

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 return VAR_1[VAR_2];
}
