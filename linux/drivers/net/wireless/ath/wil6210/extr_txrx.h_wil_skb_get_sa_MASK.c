
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int * h_source; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct sk_buff *VAR_0)
{
 struct ethhdr *VAR_1 = (void *)VAR_0->data;

 return VAR_1->h_source;
}
