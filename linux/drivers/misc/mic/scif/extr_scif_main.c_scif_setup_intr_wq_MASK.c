
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_dev {int node; int intr_bh; scalar_t__ intr_wq; int intr_wqname; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,char*,int) ;

int FUNC_3(struct scif_dev *VAR_2)
{
 if (!VAR_2->intr_wq) {
  FUNC_2(VAR_2->intr_wqname, sizeof(VAR_2->intr_wqname),
    "SCIF INTR %d", VAR_2->node);
  VAR_2->intr_wq =
   FUNC_1(VAR_2->intr_wqname, 0);
  if (!VAR_2->intr_wq)
   return -VAR_0;
  FUNC_0(&VAR_2->intr_bh, VAR_1);
 }
 return 0;
}
