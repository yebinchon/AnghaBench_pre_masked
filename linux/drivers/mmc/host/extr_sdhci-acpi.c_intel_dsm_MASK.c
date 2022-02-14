
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_host {int dsm_fns; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_host*,struct device*,unsigned int,int *) ;

__attribute__((used)) static int FUNC_1(struct intel_host *VAR_1, struct device *VAR_2,
       unsigned int VAR_3, u32 *VAR_4)
{
 if (VAR_3 > 31 || !(VAR_1->dsm_fns & (1 << VAR_3)))
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
