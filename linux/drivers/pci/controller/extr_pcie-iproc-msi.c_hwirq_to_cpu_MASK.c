
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_msi {unsigned long nr_cpus; } ;



__attribute__((used)) static inline int FUNC_0(struct iproc_msi *VAR_0, unsigned long VAR_1)
{
 return (VAR_1 % VAR_0->nr_cpus);
}
