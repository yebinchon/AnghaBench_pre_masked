
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct beiscsi_hba {int * ipv4_iface; int * ipv6_iface; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct beiscsi_hba *VAR_0)
{
 if (VAR_0->ipv6_iface) {
  FUNC_0(VAR_0->ipv6_iface);
  VAR_0->ipv6_iface = ((void*)0);
 }
 if (VAR_0->ipv4_iface) {
  FUNC_0(VAR_0->ipv4_iface);
  VAR_0->ipv4_iface = ((void*)0);
 }
}
