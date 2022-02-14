
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union event_ring_element {int dummy; } event_ring_element ;
typedef int u16 ;
struct qed_hwfn {struct qed_eq* p_eq; int cdev; } ;
struct qed_eq {int p_fw_cons; int eq_sb_index; int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qed_eq*) ;
 struct qed_eq* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int ,int,int *,int *) ;
 int VAR_5 ;
 int FUNC_3 (struct qed_hwfn*,int ,struct qed_eq*,int *,int *) ;

int FUNC_4(struct qed_hwfn *VAR_6, u16 VAR_7)
{
 struct qed_eq *VAR_8;


 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;


 if (FUNC_2(VAR_6->cdev,
       VAR_4,
       VAR_3,
       VAR_2,
       VAR_7,
       sizeof(union event_ring_element),
       &VAR_8->chain, ((void*)0)))
  goto eq_allocate_fail;


 FUNC_3(VAR_6, VAR_5,
       VAR_8, &VAR_8->eq_sb_index, &VAR_8->p_fw_cons);

 VAR_6->p_eq = VAR_8;
 return 0;

eq_allocate_fail:
 FUNC_0(VAR_8);
 return -VAR_0;
}
