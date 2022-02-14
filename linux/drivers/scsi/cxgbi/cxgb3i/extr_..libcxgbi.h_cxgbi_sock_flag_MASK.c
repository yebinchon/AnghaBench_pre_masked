
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int flags; } ;
typedef enum cxgbi_sock_flags { ____Placeholder_cxgbi_sock_flags } cxgbi_sock_flags ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static inline int FUNC_1(struct cxgbi_sock *VAR_0,
    enum cxgbi_sock_flags VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 0;
 return FUNC_0(VAR_1, &VAR_0->flags);
}
