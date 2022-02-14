
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sge_rspq {int iqe_len; unsigned int abs_id; scalar_t__ bar2_addr; int bar2_qid; int cntxt_id; int intr_params; int napi; scalar_t__ cur_desc; } ;
struct sge {int intrq_lock; struct sge_rspq** ingr_map; struct sge_rspq intrq; } ;
struct rsp_ctrl {int pldbuflen_qid; int type_gen; } ;
struct adapter {struct sge sge; int pdev_dev; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct sge*,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,unsigned int,...) ;
 int FUNC_8 () ;
 int FUNC_9 (struct rsp_ctrl const*,struct sge_rspq*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct sge_rspq*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct adapter*,scalar_t__,int) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_18(struct adapter *VAR_5)
{
 struct sge *VAR_6 = &VAR_5->sge;
 struct sge_rspq *VAR_7 = &VAR_6->intrq;
 unsigned int VAR_8;
 u32 VAR_9;

 FUNC_12(&VAR_5->sge.intrq_lock);
 for (VAR_8 = 0; ; VAR_8++) {
  const struct rsp_ctrl *VAR_10;
  unsigned int VAR_11, VAR_12;
  struct sge_rspq *VAR_13;





  VAR_10 = (void *)VAR_7->cur_desc + (VAR_7->iqe_len - sizeof(*VAR_10));
  if (!FUNC_9(VAR_10, VAR_7))
   break;






  FUNC_8();
  if (FUNC_15(FUNC_4(VAR_10->type_gen) != VAR_1)) {
   FUNC_7(VAR_5->pdev_dev,
    "Unexpected INTRQ response type %d\n",
    FUNC_4(VAR_10->type_gen));
   continue;
  }
  VAR_11 = FUNC_3(FUNC_6(VAR_10->pldbuflen_qid));
  VAR_12 = FUNC_2(VAR_6, VAR_11);
  if (FUNC_15(VAR_12 >= VAR_0)) {
   FUNC_7(VAR_5->pdev_dev,
    "Ingress QID %d out of range\n", VAR_11);
   continue;
  }
  VAR_13 = VAR_6->ingr_map[VAR_12];
  if (FUNC_15(VAR_13 == ((void*)0))) {
   FUNC_7(VAR_5->pdev_dev,
    "Ingress QID %d RSPQ=NULL\n", VAR_11);
   continue;
  }
  if (FUNC_15(VAR_13->abs_id != VAR_11)) {
   FUNC_7(VAR_5->pdev_dev,
    "Ingress QID %d refers to RSPQ %d\n",
    VAR_11, VAR_13->abs_id);
   continue;
  }






  FUNC_10(&VAR_13->napi);
  FUNC_11(VAR_7);
 }

 VAR_9 = FUNC_0(VAR_8) | FUNC_5(VAR_7->intr_params);



 if (FUNC_15(!VAR_7->bar2_addr)) {
  FUNC_14(VAR_5, VAR_4 + VAR_3,
        VAR_9 | FUNC_1(VAR_7->cntxt_id));
 } else {
  FUNC_17(VAR_9 | FUNC_1(VAR_7->bar2_qid),
         VAR_7->bar2_addr + VAR_2);
  FUNC_16();
 }

 FUNC_13(&VAR_5->sge.intrq_lock);

 return VAR_8;
}
