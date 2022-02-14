
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303_alr_cache_entry {scalar_t__ port_map; } ;
struct lan9303 {struct lan9303_alr_cache_entry* alr_cache; } ;


 int VAR_0 ;

__attribute__((used)) static struct lan9303_alr_cache_entry *
FUNC_0(struct lan9303 *VAR_1)
{
 int VAR_2;
 struct lan9303_alr_cache_entry *VAR_3 = VAR_1->alr_cache;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++, VAR_3++)
  if (VAR_3->port_map == 0)
   return VAR_3;

 return ((void*)0);
}
