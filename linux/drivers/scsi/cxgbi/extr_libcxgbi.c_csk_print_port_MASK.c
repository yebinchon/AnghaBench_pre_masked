
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sin_port; } ;
struct cxgbi_sock {TYPE_1__ daddr; } ;


 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct cxgbi_sock *VAR_0, char *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_3(VAR_1, "%hu\n", FUNC_2(VAR_0->daddr.sin_port));
 FUNC_1(VAR_0);

 return VAR_2;
}
