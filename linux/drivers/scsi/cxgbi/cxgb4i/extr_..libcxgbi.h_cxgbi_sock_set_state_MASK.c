
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int state; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct cxgbi_sock*,int,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct cxgbi_sock *VAR_1, int VAR_2)
{
 FUNC_0(1 << VAR_0,
  "csk 0x%p,%u,0x%lx, state -> %u.\n",
  VAR_1, VAR_1->state, VAR_1->flags, VAR_2);
 VAR_1->state = VAR_2;
}
