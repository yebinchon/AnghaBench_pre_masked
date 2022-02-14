
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {int dummy; } ;


 scalar_t__ FUNC_0 (struct nfp_net*,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static bool FUNC_4(struct nfp_net *VAR_0, unsigned long VAR_1)
{
 bool VAR_2 = 0;
 int VAR_3;




 for (VAR_3 = 0; VAR_3 < 50; VAR_3++) {
  if (FUNC_0(VAR_0, 0))
   return 0;
  FUNC_2(4);
 }

 while (!FUNC_0(VAR_0, VAR_2)) {
  FUNC_3(250, 500);
  VAR_2 = FUNC_1(VAR_1);
 }

 return VAR_2;
}
