
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int check; } ;
struct tcphdr {int check; } ;
typedef int __sum16 ;





__attribute__((used)) static __sum16 *FUNC_0(unsigned char VAR_0,
      const void *VAR_1)
{
 __sum16 *VAR_2 = ((void*)0);

 switch (VAR_0) {
 case 129:
  VAR_2 = &(((struct tcphdr *)VAR_1)->check);
  break;

 case 128:
  VAR_2 = &(((struct udphdr *)VAR_1)->check);
  break;

 default:
  VAR_2 = ((void*)0);
  break;
 }

 return VAR_2;
}
