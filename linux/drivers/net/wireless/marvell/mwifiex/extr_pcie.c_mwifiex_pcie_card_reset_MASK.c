
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_service_card {int work; int work_flags; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_1)
{
 struct pcie_service_card *VAR_2 = VAR_1->card;

 if (!FUNC_1(VAR_0, &VAR_2->work_flags))
  FUNC_0(&VAR_2->work);
}
