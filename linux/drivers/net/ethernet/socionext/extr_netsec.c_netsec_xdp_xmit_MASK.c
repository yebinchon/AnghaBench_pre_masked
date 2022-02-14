
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_frame {int dummy; } ;
struct netsec_priv {struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {scalar_t__ xdp_xmit; int lock; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct netsec_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct netsec_priv*,struct xdp_frame*,int) ;
 int FUNC_2 (struct netsec_priv*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct xdp_frame*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, int VAR_6,
      struct xdp_frame **VAR_7, u32 VAR_8)
{
 struct netsec_priv *VAR_9 = FUNC_0(VAR_5);
 struct netsec_desc_ring *VAR_10 = &VAR_9->desc_ring[VAR_1];
 int VAR_11 = 0;
 int VAR_12;

 if (FUNC_5(VAR_8 & ~VAR_3))
  return -VAR_0;

 FUNC_3(&VAR_10->lock);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  struct xdp_frame *VAR_13 = VAR_7[VAR_12];
  int VAR_14;

  VAR_14 = FUNC_1(VAR_9, VAR_13, 1);
  if (VAR_14 != VAR_2) {
   FUNC_6(VAR_13);
   VAR_11++;
  } else {
   VAR_10->xdp_xmit++;
  }
 }
 FUNC_4(&VAR_10->lock);

 if (FUNC_5(VAR_8 & VAR_4)) {
  FUNC_2(VAR_9, VAR_10->xdp_xmit);
  VAR_10->xdp_xmit = 0;
 }

 return VAR_6 - VAR_11;
}
