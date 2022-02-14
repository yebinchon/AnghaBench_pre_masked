
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_iwarp_ep {scalar_t__ sig; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,struct qed_iwarp_ep*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_1(struct qed_hwfn *VAR_1, struct qed_iwarp_ep *VAR_2)
{
 if (!VAR_2 || (VAR_2->sig != VAR_0)) {
  FUNC_0(VAR_1, "ERROR ON ASYNC ep=%p\n", VAR_2);
  return 0;
 }

 return 1;
}
