
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nfsd_net*,int,int ) ;
 scalar_t__ FUNC_1 (struct nfsd_net*,int,int ) ;

void FUNC_2(struct nfsd_net *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (FUNC_1(VAR_3, VAR_4, VAR_2))
   return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_4 != 4)
   FUNC_1(VAR_3, VAR_4, VAR_1);
  else {
   int VAR_5 = 0;
   while (FUNC_0(VAR_3, VAR_5, VAR_1) >= 0)
    VAR_5++;
  }
}
