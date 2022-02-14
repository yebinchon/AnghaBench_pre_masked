
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_prog {scalar_t__ error; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct nfp_prog*) ;

__attribute__((used)) static bool
FUNC_2(struct nfp_prog *VAR_0, unsigned int VAR_1)
{




 if (VAR_0->error)
  return 1;
 return !FUNC_0(FUNC_1(VAR_0) != VAR_1);
}
