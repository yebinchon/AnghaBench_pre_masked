
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_port {int reserved_tag; int reserved_rni; struct isci_host* owning_controller; } ;
struct isci_host {int available_remote_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct isci_host*,int ) ;
 int FUNC_1 (int *,int,int ) ;

__attribute__((used)) static void FUNC_2(struct isci_port *VAR_2)
{
 struct isci_host *VAR_3 = VAR_2->owning_controller;

 if (VAR_2->reserved_tag != VAR_0)
  FUNC_0(VAR_3, VAR_2->reserved_tag);

 if (VAR_2->reserved_rni != VAR_1)
  FUNC_1(&VAR_3->available_remote_nodes,
             1, VAR_2->reserved_rni);

 VAR_2->reserved_rni = VAR_1;
 VAR_2->reserved_tag = VAR_0;
}
