
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int dev; } ;
struct gemini_ethernet_port {int freeq_refill; int rx_stats_syncp; int rx_napi_exits; struct gemini_ethernet* geth; } ;
struct gemini_ethernet {int freeq_order; } ;


 int FUNC_0 (struct gemini_ethernet*,int) ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 (int ,int) ;
 int FUNC_3 (struct napi_struct*,unsigned int) ;
 int FUNC_4 (struct napi_struct*,int) ;
 struct gemini_ethernet_port* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct napi_struct *VAR_0, int VAR_1)
{
 struct gemini_ethernet_port *VAR_2 = FUNC_5(VAR_0->dev);
 struct gemini_ethernet *VAR_3 = VAR_2->geth;
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_4 = 1 << (VAR_3->freeq_order - 1);
 FUNC_6(&VAR_2->rx_stats_syncp);

 VAR_5 = FUNC_2(VAR_0->dev, VAR_1);
 if (VAR_5 < VAR_1) {
  FUNC_4(VAR_0, 0);
  FUNC_3(VAR_0, VAR_5);
  FUNC_1(VAR_0->dev, 1);
  ++VAR_2->rx_napi_exits;
 }

 VAR_2->freeq_refill += (VAR_1 - VAR_5);
 if (VAR_2->freeq_refill > VAR_4) {
  VAR_2->freeq_refill -= VAR_4;
  FUNC_0(VAR_3, 1);
 }

 FUNC_7(&VAR_2->rx_stats_syncp);
 return VAR_5;
}
