
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cudbg_hdr {int hdr_len; } ;
struct cudbg_entity_hdr {int dummy; } ;



struct cudbg_entity_hdr *FUNC_0(void *VAR_0, int VAR_1)
{
 struct cudbg_hdr *VAR_2 = (struct cudbg_hdr *)VAR_0;

 return (struct cudbg_entity_hdr *)
        ((char *)VAR_0 + VAR_2->hdr_len +
  (sizeof(struct cudbg_entity_hdr) * (VAR_1 - 1)));
}
