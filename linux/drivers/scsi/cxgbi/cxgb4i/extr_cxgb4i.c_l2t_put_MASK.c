
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int * l2t; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cxgbi_sock*) ;

__attribute__((used)) static inline void FUNC_2(struct cxgbi_sock *VAR_0)
{
 if (VAR_0->l2t) {
  FUNC_0(VAR_0->l2t);
  VAR_0->l2t = ((void*)0);
  FUNC_1(VAR_0);
 }
}
