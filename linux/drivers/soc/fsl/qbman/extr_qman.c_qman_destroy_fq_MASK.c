
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_fq {int state; size_t idx; int fqid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct qman_fq*,int ) ;
 int ** VAR_1 ;


 int FUNC_2 (int ) ;

void FUNC_3(struct qman_fq *VAR_2)
{




 switch (VAR_2->state) {
 case 128:
 case 129:
  if (FUNC_1(VAR_2, VAR_0))
   FUNC_2(VAR_2->fqid);

  FUNC_0(*VAR_1[VAR_2->idx]);
  VAR_1[VAR_2->idx] = ((void*)0);
  return;
 default:
  break;
 }
 FUNC_0(((void*)0) == "qman_free_fq() on unquiesced FQ!");
}
