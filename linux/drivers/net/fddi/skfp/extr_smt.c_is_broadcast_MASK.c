
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct fddi_addr {int * a; } ;



__attribute__((used)) static inline int FUNC_0(const struct fddi_addr *VAR_0)
{
 return *(u_short *)(&VAR_0->a[0]) == 0xffff &&
        *(u_short *)(&VAR_0->a[2]) == 0xffff &&
        *(u_short *)(&VAR_0->a[4]) == 0xffff;
}
