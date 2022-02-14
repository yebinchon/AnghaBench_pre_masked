
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_rx_rings; } ;
struct nfp_net {TYPE_1__ dp; int * rss_itbl; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct nfp_net *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < sizeof(VAR_0->rss_itbl); VAR_1++)
  VAR_0->rss_itbl[VAR_1] =
   FUNC_0(VAR_1, VAR_0->dp.num_rx_rings);
}
