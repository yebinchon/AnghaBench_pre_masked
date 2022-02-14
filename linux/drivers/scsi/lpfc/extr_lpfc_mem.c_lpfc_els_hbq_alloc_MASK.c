
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {int lpfc_hbq_pool; } ;
struct TYPE_2__ {int virt; int phys; } ;
struct hbq_dmabuf {int total_size; TYPE_1__ dbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct hbq_dmabuf*) ;
 struct hbq_dmabuf* FUNC_2 (int,int ) ;

struct hbq_dmabuf *
FUNC_3(struct lpfc_hba *VAR_2)
{
 struct hbq_dmabuf *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct hbq_dmabuf), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->dbuf.virt = FUNC_0(VAR_2->lpfc_hbq_pool, VAR_0,
       &VAR_3->dbuf.phys);
 if (!VAR_3->dbuf.virt) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 VAR_3->total_size = VAR_1;
 return VAR_3;
}
