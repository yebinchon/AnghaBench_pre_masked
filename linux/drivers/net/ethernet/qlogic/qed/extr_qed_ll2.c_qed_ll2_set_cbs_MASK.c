
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cookie; int slowpath_cb; scalar_t__ tx_release_cb; scalar_t__ tx_comp_cb; scalar_t__ rx_release_cb; scalar_t__ rx_comp_cb; } ;
struct qed_ll2_info {TYPE_1__ cbs; } ;
struct qed_ll2_cbs {scalar_t__ cookie; int slowpath_cb; scalar_t__ tx_release_cb; scalar_t__ tx_comp_cb; scalar_t__ rx_release_cb; scalar_t__ rx_comp_cb; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct qed_ll2_info *VAR_1, const struct qed_ll2_cbs *VAR_2)
{
 if (!VAR_2 || (!VAR_2->rx_comp_cb ||
       !VAR_2->rx_release_cb ||
       !VAR_2->tx_comp_cb || !VAR_2->tx_release_cb || !VAR_2->cookie))
  return -VAR_0;

 VAR_1->cbs.rx_comp_cb = VAR_2->rx_comp_cb;
 VAR_1->cbs.rx_release_cb = VAR_2->rx_release_cb;
 VAR_1->cbs.tx_comp_cb = VAR_2->tx_comp_cb;
 VAR_1->cbs.tx_release_cb = VAR_2->tx_release_cb;
 VAR_1->cbs.slowpath_cb = VAR_2->slowpath_cb;
 VAR_1->cbs.cookie = VAR_2->cookie;

 return 0;
}
