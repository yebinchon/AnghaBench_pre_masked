
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fddi_addr {int* a; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct fddi_addr *VAR_1)
{
 return !(VAR_1->a[0] & VAR_0);
}
