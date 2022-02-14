
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_rxq_info {int dummy; } ;
struct page_pool {int dummy; } ;
struct cpsw_priv {int ndev; struct xdp_rxq_info* xdp_rxq; struct cpsw_common* cpsw; } ;
struct cpsw_common {struct page_pool** page_pool; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdp_rxq_info*,int ,int) ;
 int FUNC_1 (struct xdp_rxq_info*,int ,struct page_pool*) ;
 int FUNC_2 (struct xdp_rxq_info*) ;

__attribute__((used)) static int FUNC_3(struct cpsw_priv *VAR_1, int VAR_2)
{
 struct cpsw_common *VAR_3 = VAR_1->cpsw;
 struct xdp_rxq_info *VAR_4;
 struct page_pool *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->page_pool[VAR_2];
 VAR_4 = &VAR_1->xdp_rxq[VAR_2];

 VAR_6 = FUNC_0(VAR_4, VAR_1->ndev, VAR_2);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_5);
 if (VAR_6)
  FUNC_2(VAR_4);

 return VAR_6;
}
