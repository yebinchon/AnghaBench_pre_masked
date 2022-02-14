
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; } ;
struct cxgbi_sock {scalar_t__ csk_family; TYPE_3__ daddr6; TYPE_2__ daddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 int FUNC_2 (char*,char*,int *) ;

__attribute__((used)) static inline int FUNC_3(struct cxgbi_sock *VAR_1, char *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1);
 if (VAR_1->csk_family == VAR_0)
  VAR_3 = FUNC_2(VAR_2, "%pI4",
         &VAR_1->daddr.sin_addr.s_addr);
 else
  VAR_3 = FUNC_2(VAR_2, "%pI6",
         &VAR_1->daddr6.sin6_addr);

 FUNC_1(VAR_1);

 return VAR_3;
}
