
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_hba {int shost; } ;
struct cxgbi_device {int nports; int pdev; struct cxgbi_hba** hbas; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,struct cxgbi_device*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct cxgbi_device *VAR_1)
{
 int VAR_2;
 struct cxgbi_hba *VAR_3;

 FUNC_2(1 << VAR_0,
  "cdev 0x%p, p#%u.\n", VAR_1, VAR_1->nports);

 for (VAR_2 = 0; VAR_2 < VAR_1->nports; VAR_2++) {
  VAR_3 = VAR_1->hbas[VAR_2];
  if (VAR_3) {
   VAR_1->hbas[VAR_2] = ((void*)0);
   FUNC_1(VAR_3->shost);
   FUNC_3(VAR_1->pdev);
   FUNC_0(VAR_3->shost);
  }
 }
}
