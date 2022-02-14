
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qp {int peer; int handle; int guest_endpoint; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmci_qp*) ;
 int FUNC_1 (struct vmci_qp*,int ,int) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct vmci_qp **VAR_3)
{
 int VAR_4;
 struct vmci_qp *VAR_5;

 if (!VAR_3 || !(*VAR_3))
  return VAR_0;

 VAR_5 = *VAR_3;
 VAR_4 = FUNC_2(VAR_5->handle, VAR_5->guest_endpoint);
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->handle = VAR_1;
 VAR_5->peer = VAR_2;
 FUNC_0(VAR_5);
 *VAR_3 = ((void*)0);

 return VAR_4;
}
