
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iudma_ch {int n_bds_used; struct bcm_enet_desc* read_bd; struct bcm_enet_desc* bd_ring; struct bcm_enet_desc* end_bd; } ;
struct bcm_enet_desc {int len_stat; } ;
struct bcm63xx_udc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct bcm63xx_udc *VAR_5, struct iudma_ch *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct bcm_enet_desc *VAR_9 = VAR_6->read_bd;

 if (!VAR_6->n_bds_used)
  return -VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_6->n_bds_used; VAR_7++) {
  u32 VAR_10;

  VAR_10 = VAR_9->len_stat;

  if (VAR_10 & VAR_2)
   return -VAR_3;

  VAR_8 += (VAR_10 & VAR_0) >>
         VAR_1;
  if (VAR_9 == VAR_6->end_bd)
   VAR_9 = VAR_6->bd_ring;
  else
   VAR_9++;
 }

 VAR_6->read_bd = VAR_9;
 VAR_6->n_bds_used = 0;
 return VAR_8;
}
