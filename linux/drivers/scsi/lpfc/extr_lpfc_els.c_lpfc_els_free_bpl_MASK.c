
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int dummy; } ;
struct lpfc_dmabuf {int phys; int virt; } ;


 int FUNC_0 (struct lpfc_dmabuf*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_hba *VAR_0, struct lpfc_dmabuf *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->virt, VAR_1->phys);
 FUNC_0(VAR_1);
 return 0;
}
