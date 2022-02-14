
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {struct qed_consq* p_consq; int cdev; } ;
struct qed_consq {int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qed_consq*) ;
 struct qed_consq* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int,int,int *,int *) ;

int FUNC_3(struct qed_hwfn *VAR_6)
{
 struct qed_consq *VAR_7;


 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;


 if (FUNC_2(VAR_6->cdev,
       VAR_5,
       VAR_3,
       VAR_2,
       VAR_4 / 0x80,
       0x80, &VAR_7->chain, ((void*)0)))
  goto consq_allocate_fail;

 VAR_6->p_consq = VAR_7;
 return 0;

consq_allocate_fail:
 FUNC_0(VAR_7);
 return -VAR_0;
}
