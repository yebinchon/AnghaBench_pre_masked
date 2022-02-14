
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {scalar_t__ ns_segnum; scalar_t__ ns_nextnum; } ;
typedef scalar_t__ __u64 ;



__attribute__((used)) static inline int FUNC_0(struct the_nilfs *VAR_0, __u64 VAR_1)
{
 return VAR_1 == VAR_0->ns_segnum || VAR_1 == VAR_0->ns_nextnum;
}
