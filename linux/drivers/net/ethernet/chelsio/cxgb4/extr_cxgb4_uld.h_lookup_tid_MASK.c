
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {unsigned int ntids; void** tid_tab; } ;



__attribute__((used)) static inline void *FUNC_0(const struct tid_info *VAR_0, unsigned int VAR_1)
{
 return VAR_1 < VAR_0->ntids ? VAR_0->tid_tab[VAR_1] : ((void*)0);
}
