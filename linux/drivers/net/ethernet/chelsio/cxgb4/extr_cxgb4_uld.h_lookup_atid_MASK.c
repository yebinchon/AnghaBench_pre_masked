
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {unsigned int natids; TYPE_1__* atid_tab; } ;
struct TYPE_2__ {void* data; } ;



__attribute__((used)) static inline void *FUNC_0(const struct tid_info *VAR_0, unsigned int VAR_1)
{
 return VAR_1 < VAR_0->natids ? VAR_0->atid_tab[VAR_1].data : ((void*)0);
}
