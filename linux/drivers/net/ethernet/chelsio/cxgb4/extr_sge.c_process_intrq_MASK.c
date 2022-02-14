
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sge_rspq {int iqe_len; int * bar2_addr; int bar2_qid; int cntxt_id; int intr_params; scalar_t__ cur_desc; } ;
struct rsp_ctrl {int pldbuflen_qid; int type_gen; } ;
struct TYPE_4__ {int intrq_lock; TYPE_1__** ingr_map; scalar_t__ ingr_start; struct sge_rspq intrq; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_3__ {int napi; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (struct rsp_ctrl const*,struct sge_rspq*) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (struct sge_rspq*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct adapter*,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int,int *) ;

__attribute__((used)) static unsigned int FUNC_16(struct adapter *VAR_3)
{
 unsigned int VAR_4;
 const struct rsp_ctrl *VAR_5;
 struct sge_rspq *VAR_6 = &VAR_3->sge.intrq;
 u32 VAR_7;

 FUNC_10(&VAR_3->sge.intrq_lock);
 for (VAR_4 = 0; ; VAR_4++) {
  VAR_5 = (void *)VAR_6->cur_desc + (VAR_6->iqe_len - sizeof(*VAR_5));
  if (!FUNC_6(VAR_5, VAR_6))
   break;

  FUNC_5();
  if (FUNC_3(VAR_5->type_gen) == VAR_0) {
   unsigned int VAR_8 = FUNC_8(VAR_5->pldbuflen_qid);

   VAR_8 -= VAR_3->sge.ingr_start;
   FUNC_7(&VAR_3->sge.ingr_map[VAR_8]->napi);
  }

  FUNC_9(VAR_6);
 }

 VAR_7 = FUNC_0(VAR_4) | FUNC_4(VAR_6->intr_params);




 if (FUNC_13(VAR_6->bar2_addr == ((void*)0))) {
  FUNC_12(VAR_3, FUNC_2(VAR_1),
        VAR_7 | FUNC_1(VAR_6->cntxt_id));
 } else {
  FUNC_15(VAR_7 | FUNC_1(VAR_6->bar2_qid),
         VAR_6->bar2_addr + VAR_2);
  FUNC_14();
 }
 FUNC_11(&VAR_3->sge.intrq_lock);
 return VAR_4;
}
