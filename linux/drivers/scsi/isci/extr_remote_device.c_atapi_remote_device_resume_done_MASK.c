
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isci_request {int sm; } ;
struct isci_remote_device {struct isci_request* working_request; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct isci_remote_device *VAR_2 = VAR_1;
 struct isci_request *VAR_3 = VAR_2->working_request;

 FUNC_0(&VAR_3->sm, VAR_0);
}
