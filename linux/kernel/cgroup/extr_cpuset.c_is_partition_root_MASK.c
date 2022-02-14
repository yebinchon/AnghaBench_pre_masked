
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {scalar_t__ partition_root_state; } ;



__attribute__((used)) static inline int FUNC_0(const struct cpuset *VAR_0)
{
 return VAR_0->partition_root_state > 0;
}
