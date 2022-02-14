
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hvc_iucv_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hvc_iucv_private** VAR_2 ;

__attribute__((used)) static struct hvc_iucv_private *FUNC_0(uint32_t VAR_3)
{
 if ((VAR_3 < VAR_0) || (VAR_3 - VAR_0 > VAR_1))
  return ((void*)0);
 return VAR_2[VAR_3 - VAR_0];
}
