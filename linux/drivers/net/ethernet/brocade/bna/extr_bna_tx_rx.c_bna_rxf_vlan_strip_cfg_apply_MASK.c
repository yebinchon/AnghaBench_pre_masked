
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {int vlan_strip_pending; } ;


 int FUNC_0 (struct bna_rxf*) ;

__attribute__((used)) static int
FUNC_1(struct bna_rxf *VAR_0)
{
 if (VAR_0->vlan_strip_pending) {
   VAR_0->vlan_strip_pending = 0;
   FUNC_0(VAR_0);
   return 1;
 }

 return 0;
}
