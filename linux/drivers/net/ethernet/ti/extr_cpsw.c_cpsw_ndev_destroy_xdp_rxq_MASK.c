
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_rxq_info {int dummy; } ;
struct cpsw_priv {struct xdp_rxq_info* xdp_rxq; } ;


 int FUNC_0 (struct xdp_rxq_info*) ;
 int FUNC_1 (struct xdp_rxq_info*) ;

__attribute__((used)) static void FUNC_2(struct cpsw_priv *VAR_0, int VAR_1)
{
 struct xdp_rxq_info *VAR_2 = &VAR_0->xdp_rxq[VAR_1];

 if (!FUNC_0(VAR_2))
  return;

 FUNC_1(VAR_2);
}
