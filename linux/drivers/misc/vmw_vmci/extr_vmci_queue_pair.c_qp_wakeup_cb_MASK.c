
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qp {scalar_t__ blocked; int event; int generation; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmci_qp*) ;
 int FUNC_1 (struct vmci_qp*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct vmci_qp *VAR_2 = (struct vmci_qp *)VAR_1;

 FUNC_0(VAR_2);
 while (VAR_2->blocked > 0) {
  VAR_2->blocked--;
  VAR_2->generation++;
  FUNC_2(&VAR_2->event);
 }
 FUNC_1(VAR_2);

 return VAR_0;
}
