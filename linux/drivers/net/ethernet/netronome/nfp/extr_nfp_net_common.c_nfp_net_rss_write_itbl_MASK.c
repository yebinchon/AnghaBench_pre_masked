
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {scalar_t__ rss_itbl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nfp_net*,scalar_t__,int ) ;

void FUNC_2(struct nfp_net *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 += 4)
  FUNC_1(VAR_2, VAR_0 + VAR_3,
     FUNC_0(VAR_2->rss_itbl + VAR_3));
}
