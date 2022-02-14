
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlog_info {scalar_t__ nentries; } ;
typedef scalar_t__ loff_t ;



__attribute__((used)) static inline void *FUNC_0(struct devlog_info *VAR_0, loff_t VAR_1)
{
 if (VAR_1 > VAR_0->nentries)
  return ((void*)0);

 return (void *)(uintptr_t)(VAR_1 + 1);
}
