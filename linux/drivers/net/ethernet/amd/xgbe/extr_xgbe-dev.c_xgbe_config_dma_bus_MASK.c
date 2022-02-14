
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {int blen; int aal; int rd_osr_limit; int wr_osr_limit; TYPE_1__* vdata; } ;
struct TYPE_2__ {scalar_t__ rx_desc_prefetch; scalar_t__ tx_desc_prefetch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,scalar_t__) ;
 int FUNC_3 (unsigned int,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_11)
{
 unsigned int VAR_12;

 VAR_12 = FUNC_0(VAR_11, VAR_3);


 FUNC_3(VAR_12, VAR_3, VAR_5, 1);


 FUNC_3(VAR_12, VAR_3, VAR_9, 1);
 FUNC_3(VAR_12, VAR_3, VAR_1, VAR_11->blen >> 2);
 FUNC_3(VAR_12, VAR_3, VAR_0, VAR_11->aal);
 FUNC_3(VAR_12, VAR_3, VAR_7, VAR_11->rd_osr_limit - 1);
 FUNC_3(VAR_12, VAR_3, VAR_10, VAR_11->wr_osr_limit - 1);

 FUNC_1(VAR_11, VAR_3, VAR_12);


 if (VAR_11->vdata->tx_desc_prefetch)
  FUNC_2(VAR_11, VAR_4, VAR_8,
       VAR_11->vdata->tx_desc_prefetch);

 if (VAR_11->vdata->rx_desc_prefetch)
  FUNC_2(VAR_11, VAR_2, VAR_6,
       VAR_11->vdata->rx_desc_prefetch);
}
