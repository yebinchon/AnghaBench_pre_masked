
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned long len; scalar_t__ data; } ;



__attribute__((used)) static inline int FUNC_0(struct sk_buff *VAR_0)
{
 unsigned long VAR_1=(unsigned long)VAR_0->data;
 VAR_1^=(VAR_1+VAR_0->len);
 if(VAR_1&0x00010000)
  return 1;
 return 0;
}
