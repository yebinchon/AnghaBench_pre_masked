
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_ie_hdr {int length; } ;



struct uwb_ie_hdr *FUNC_0(void **VAR_0, size_t *VAR_1)
{
 struct uwb_ie_hdr *VAR_2;
 size_t VAR_3;

 if (*VAR_1 < sizeof(struct uwb_ie_hdr))
  return ((void*)0);

 VAR_2 = *VAR_0;
 VAR_3 = sizeof(struct uwb_ie_hdr) + VAR_2->length;

 if (*VAR_1 < VAR_3)
  return ((void*)0);

 *VAR_0 += VAR_3;
 *VAR_1 -= VAR_3;

 return VAR_2;
}
