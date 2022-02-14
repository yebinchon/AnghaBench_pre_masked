
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,char const*,struct cxgbi_sock*,int ) ;

__attribute__((used)) static inline void FUNC_3(const char *VAR_1, struct cxgbi_sock *VAR_2)
{
 FUNC_2(1 << VAR_0,
  "%s, get csk 0x%p, ref %u+1.\n",
  VAR_1, VAR_2, FUNC_1(&VAR_2->refcnt));
 FUNC_0(&VAR_2->refcnt);
}
