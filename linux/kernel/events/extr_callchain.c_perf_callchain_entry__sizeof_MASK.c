
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_callchain_entry {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline size_t FUNC_0(void)
{
 return (sizeof(struct perf_callchain_entry) +
  sizeof(__u64) * (VAR_1 +
     VAR_0));
}
