
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {scalar_t__ wr_max_cred; scalar_t__ wr_cred; int tid; } ;


 int FUNC_0 (struct cxgbi_sock const*) ;
 int FUNC_1 (char*,struct cxgbi_sock const*,int ,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(const struct cxgbi_sock *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_0->wr_cred + VAR_1 != VAR_0->wr_max_cred))
  FUNC_1("csk 0x%p, tid %u, credit %u + %u != %u.\n",
   VAR_0, VAR_0->tid, VAR_0->wr_cred, VAR_1, VAR_0->wr_max_cred);
}
