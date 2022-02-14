
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_qp {int magic; } ;
struct scif_dev {struct scif_qp* qpairs; int qp_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scif_qp*) ;
 struct scif_qp* FUNC_1 (int,int ) ;
 int FUNC_2 (struct scif_qp*,int *,int,struct scif_dev*) ;

int FUNC_3(struct scif_dev *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 struct scif_qp *VAR_7;

 VAR_6 = VAR_3;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_5 = -VAR_0;
  return VAR_5;
 }
 VAR_7->magic = VAR_2;
 VAR_4->qpairs = VAR_7;
 VAR_5 = FUNC_2(VAR_7, &VAR_4->qp_dma_addr,
        VAR_6, VAR_4);
 if (VAR_5)
  goto free_qp;





 return VAR_5;
free_qp:
 FUNC_0(VAR_4->qpairs);
 VAR_4->qpairs = ((void*)0);
 return VAR_5;
}
