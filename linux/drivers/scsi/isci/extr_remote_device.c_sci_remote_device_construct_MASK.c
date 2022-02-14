
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_remote_device {int rnc; int sm; scalar_t__ started_request_count; struct isci_port* owning_port; } ;
struct isci_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct isci_port *VAR_3,
      struct isci_remote_device *VAR_4)
{
 VAR_4->owning_port = VAR_3;
 VAR_4->started_request_count = 0;

 FUNC_0(&VAR_4->sm, VAR_2, VAR_1);

 FUNC_1(&VAR_4->rnc,
            VAR_0);
}
