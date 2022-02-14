
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct igbvf_adapter {TYPE_1__* msix_entries; struct net_device* netdev; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int ,struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct igbvf_adapter *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 int VAR_2;

 if (VAR_0->msix_entries) {
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
   FUNC_0(VAR_0->msix_entries[VAR_2].vector, VAR_1);
 }
}
