
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union listen_entry {int dummy; } listen_entry ;
struct tid_info {unsigned int stid_base; union listen_entry* stid_tab; } ;



__attribute__((used)) static inline union listen_entry *FUNC_0(const struct tid_info *VAR_0,
          unsigned int VAR_1)
{
 return &VAR_0->stid_tab[VAR_1 - VAR_0->stid_base];
}
