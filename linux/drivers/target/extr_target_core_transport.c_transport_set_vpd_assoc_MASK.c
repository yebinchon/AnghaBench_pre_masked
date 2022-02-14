
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_vpd {unsigned char association; } ;


 int FUNC_0 (struct t10_vpd*,int *,int ) ;

int FUNC_1(struct t10_vpd *VAR_0, unsigned char *VAR_1)
{





 VAR_0->association = (VAR_1[1] & 0x30);
 return FUNC_0(VAR_0, ((void*)0), 0);
}
