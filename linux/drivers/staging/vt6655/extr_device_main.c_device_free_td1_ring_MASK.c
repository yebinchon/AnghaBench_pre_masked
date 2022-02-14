
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_tx_desc {struct vnt_td_info* td_info; } ;
struct vnt_td_info {int skb; } ;
struct TYPE_2__ {int* tx_descs; } ;
struct vnt_private {struct vnt_tx_desc* apTD1Rings; TYPE_1__ opts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnt_td_info*) ;

__attribute__((used)) static void FUNC_2(struct vnt_private *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->opts.tx_descs[1]; VAR_1++) {
  struct vnt_tx_desc *VAR_2 = &VAR_0->apTD1Rings[VAR_1];
  struct vnt_td_info *VAR_3 = VAR_2->td_info;

  FUNC_0(VAR_3->skb);
  FUNC_1(VAR_2->td_info);
 }
}
