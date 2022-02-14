
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct hostap_pci_priv {scalar_t__ mem_start; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {struct hostap_pci_priv* hw_priv; } ;


 struct hostap_interface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0, int VAR_1, u16 VAR_2)
{
 struct hostap_interface *VAR_3;
 struct hostap_pci_priv *VAR_4;
 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = VAR_3->local->hw_priv;
 FUNC_1(VAR_2, VAR_4->mem_start + VAR_1);
}
