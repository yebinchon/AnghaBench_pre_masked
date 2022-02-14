
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_queue_cid {struct qed_hwfn* p_owner; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int *,void*) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_1, u16 *VAR_2, void *VAR_3)
{
 struct qed_queue_cid *VAR_4 = VAR_3;
 struct qed_hwfn *VAR_5;
 int VAR_6;

 VAR_5 = VAR_4->p_owner;
 VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  FUNC_0(VAR_1, VAR_0,
      "Unable to read queue coalescing\n");

 return VAR_6;
}
