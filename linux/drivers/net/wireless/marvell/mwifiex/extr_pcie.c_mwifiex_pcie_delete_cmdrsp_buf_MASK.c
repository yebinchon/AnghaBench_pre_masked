
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_service_card {int * cmd_buf; int * cmdrsp_buf; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mwifiex_adapter*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_2)
{
 struct pcie_service_card *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->card;

 if (VAR_3 && VAR_3->cmdrsp_buf) {
  FUNC_1(VAR_2, VAR_3->cmdrsp_buf,
      VAR_0);
  FUNC_0(VAR_3->cmdrsp_buf);
  VAR_3->cmdrsp_buf = ((void*)0);
 }

 if (VAR_3 && VAR_3->cmd_buf) {
  FUNC_1(VAR_2, VAR_3->cmd_buf,
      VAR_1);
  FUNC_0(VAR_3->cmd_buf);
  VAR_3->cmd_buf = ((void*)0);
 }
 return 0;
}
