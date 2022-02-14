
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {unsigned int rq_count; unsigned int wq_count; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct enic *VAR_0)
{
 return VAR_0->rq_count + VAR_0->wq_count + 1;
}
