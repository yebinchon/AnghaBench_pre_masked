
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_qp {unsigned int generation; int event; int blocked; } ;


 int FUNC_0 (struct vmci_qp*) ;
 int FUNC_1 (struct vmci_qp*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static bool FUNC_3(struct vmci_qp *VAR_0)
{
 unsigned int VAR_1;

 VAR_0->blocked++;
 VAR_1 = VAR_0->generation;
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->event, VAR_1 != VAR_0->generation);
 FUNC_0(VAR_0);

 return 1;
}
