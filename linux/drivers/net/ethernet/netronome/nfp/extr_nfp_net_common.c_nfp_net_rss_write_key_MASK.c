
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {scalar_t__ rss_key; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nfp_net*) ;
 int FUNC_2 (struct nfp_net*,scalar_t__,int ) ;

void FUNC_3(struct nfp_net *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2 += 4)
  FUNC_2(VAR_1, VAR_0 + VAR_2,
     FUNC_0(VAR_1->rss_key + VAR_2));
}
