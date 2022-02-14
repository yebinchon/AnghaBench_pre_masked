
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vss {int dummy; } ;
struct ep_name_entry {int len; scalar_t__ type; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const struct intel_vss *FUNC_0(const void *VAR_1, size_t VAR_2)
{
 const void *VAR_3 = VAR_1 + VAR_2;

 while (VAR_1 < VAR_3) {
  const struct ep_name_entry *VAR_4 = VAR_1;

  if (!VAR_4->len)
   break;
  if (VAR_1 + VAR_4->len > VAR_3)
   break;

  if (VAR_4->type == VAR_0)
   return (const struct intel_vss *)VAR_4->data;

  VAR_1 += VAR_4->len;
 }

 return ((void*)0);
}
