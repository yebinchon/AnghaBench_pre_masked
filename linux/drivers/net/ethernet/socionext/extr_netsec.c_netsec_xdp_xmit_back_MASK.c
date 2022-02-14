
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct xdp_buff {int dummy; } ;
struct netsec_priv {struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct xdp_frame* FUNC_0 (struct xdp_buff*) ;
 int FUNC_1 (struct netsec_priv*,struct xdp_frame*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static u32 FUNC_5(struct netsec_priv *VAR_2, struct xdp_buff *VAR_3)
{
 struct netsec_desc_ring *VAR_4 = &VAR_2->desc_ring[VAR_0];
 struct xdp_frame *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6;

 if (FUNC_4(!VAR_5))
  return VAR_1;

 FUNC_2(&VAR_4->lock);
 VAR_6 = FUNC_1(VAR_2, VAR_5, 0);
 FUNC_3(&VAR_4->lock);

 return VAR_6;
}
