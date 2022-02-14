
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int buf; int hdr; } ;
struct xgbe_ring_data {TYPE_1__ rx; } ;
struct TYPE_5__ {int pages; } ;
struct xgbe_ring {TYPE_2__ rx_buf_pa; TYPE_2__ rx_hdr_pa; int node; } ;
struct xgbe_prv_data {int rx_buf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_2,
         struct xgbe_ring *VAR_3,
         struct xgbe_ring_data *VAR_4)
{
 int VAR_5;

 if (!VAR_3->rx_hdr_pa.pages) {
  VAR_5 = FUNC_0(VAR_2, &VAR_3->rx_hdr_pa, 0, VAR_3->node);
  if (VAR_5)
   return VAR_5;
 }

 if (!VAR_3->rx_buf_pa.pages) {
  VAR_5 = FUNC_0(VAR_2, &VAR_3->rx_buf_pa,
           VAR_0, VAR_3->node);
  if (VAR_5)
   return VAR_5;
 }


 FUNC_1(&VAR_4->rx.hdr, &VAR_3->rx_hdr_pa,
        VAR_1);


 FUNC_1(&VAR_4->rx.buf, &VAR_3->rx_buf_pa,
        VAR_2->rx_buf_size);

 return 0;
}
