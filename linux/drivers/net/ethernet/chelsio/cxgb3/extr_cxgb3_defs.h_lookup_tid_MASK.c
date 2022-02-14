
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_info {unsigned int ntids; struct t3c_tid_entry* tid_tab; } ;
struct t3c_tid_entry {scalar_t__ client; } ;



__attribute__((used)) static inline struct t3c_tid_entry *FUNC_0(const struct tid_info *VAR_0,
            unsigned int VAR_1)
{
 struct t3c_tid_entry *VAR_2 = VAR_1 < VAR_0->ntids ?
     &(VAR_0->tid_tab[VAR_1]) : ((void*)0);

 return (VAR_2 && VAR_2->client) ? VAR_2 : ((void*)0);
}
