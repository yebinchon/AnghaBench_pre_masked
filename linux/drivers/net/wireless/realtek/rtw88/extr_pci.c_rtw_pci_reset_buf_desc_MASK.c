
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_pci {TYPE_2__* rx_rings; TYPE_4__* tx_rings; } ;
struct rtw_dev {scalar_t__ priv; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int dma; int len; scalar_t__ wp; scalar_t__ rp; } ;
struct TYPE_8__ {TYPE_3__ r; } ;
struct TYPE_5__ {int len; int dma; scalar_t__ wp; scalar_t__ rp; } ;
struct TYPE_6__ {TYPE_1__ r; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 int FUNC_0 (struct rtw_dev*,scalar_t__) ;
 int FUNC_1 (struct rtw_dev*,int ,int) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,int ,int ) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct rtw_dev *VAR_31)
{
 struct rtw_pci *VAR_32 = (struct rtw_pci *)VAR_31->priv;
 u32 VAR_33;
 u8 VAR_34;
 dma_addr_t VAR_35;

 VAR_34 = FUNC_0(VAR_31, VAR_2 + 3);
 FUNC_4(VAR_31, VAR_2 + 3, VAR_34 | 0xf7);

 VAR_35 = VAR_32->tx_rings[VAR_23].r.dma;
 FUNC_2(VAR_31, VAR_5, VAR_35);

 VAR_33 = VAR_32->tx_rings[VAR_26].r.len;
 VAR_35 = VAR_32->tx_rings[VAR_26].r.dma;
 VAR_32->tx_rings[VAR_26].r.rp = 0;
 VAR_32->tx_rings[VAR_26].r.wp = 0;
 FUNC_1(VAR_31, VAR_16, VAR_33);
 FUNC_2(VAR_31, VAR_8, VAR_35);

 VAR_33 = VAR_32->tx_rings[VAR_25].r.len;
 VAR_35 = VAR_32->tx_rings[VAR_25].r.dma;
 VAR_32->tx_rings[VAR_25].r.rp = 0;
 VAR_32->tx_rings[VAR_25].r.wp = 0;
 FUNC_1(VAR_31, VAR_15, VAR_33);
 FUNC_2(VAR_31, VAR_7, VAR_35);

 VAR_33 = VAR_32->tx_rings[VAR_24].r.len;
 VAR_35 = VAR_32->tx_rings[VAR_24].r.dma;
 VAR_32->tx_rings[VAR_24].r.rp = 0;
 VAR_32->tx_rings[VAR_24].r.wp = 0;
 FUNC_1(VAR_31, VAR_14, VAR_33);
 FUNC_2(VAR_31, VAR_6, VAR_35);

 VAR_33 = VAR_32->tx_rings[VAR_30].r.len;
 VAR_35 = VAR_32->tx_rings[VAR_30].r.dma;
 VAR_32->tx_rings[VAR_30].r.rp = 0;
 VAR_32->tx_rings[VAR_30].r.wp = 0;
 FUNC_1(VAR_31, VAR_20, VAR_33);
 FUNC_2(VAR_31, VAR_12, VAR_35);

 VAR_33 = VAR_32->tx_rings[VAR_29].r.len;
 VAR_35 = VAR_32->tx_rings[VAR_29].r.dma;
 VAR_32->tx_rings[VAR_29].r.rp = 0;
 VAR_32->tx_rings[VAR_29].r.wp = 0;
 FUNC_1(VAR_31, VAR_19, VAR_33);
 FUNC_2(VAR_31, VAR_11, VAR_35);

 VAR_33 = VAR_32->tx_rings[VAR_28].r.len;
 VAR_35 = VAR_32->tx_rings[VAR_28].r.dma;
 VAR_32->tx_rings[VAR_28].r.rp = 0;
 VAR_32->tx_rings[VAR_28].r.wp = 0;
 FUNC_1(VAR_31, VAR_18, VAR_33);
 FUNC_2(VAR_31, VAR_10, VAR_35);

 VAR_33 = VAR_32->tx_rings[VAR_27].r.len;
 VAR_35 = VAR_32->tx_rings[VAR_27].r.dma;
 VAR_32->tx_rings[VAR_27].r.rp = 0;
 VAR_32->tx_rings[VAR_27].r.wp = 0;
 FUNC_1(VAR_31, VAR_17, VAR_33);
 FUNC_2(VAR_31, VAR_9, VAR_35);

 VAR_33 = VAR_32->rx_rings[VAR_22].r.len;
 VAR_35 = VAR_32->rx_rings[VAR_22].r.dma;
 VAR_32->rx_rings[VAR_22].r.rp = 0;
 VAR_32->rx_rings[VAR_22].r.wp = 0;
 FUNC_1(VAR_31, VAR_4, VAR_33 & 0xfff);
 FUNC_2(VAR_31, VAR_3, VAR_35);


 FUNC_2(VAR_31, VAR_21, 0xffffffff);


 FUNC_3(VAR_31, VAR_13, VAR_0);
 FUNC_3(VAR_31, VAR_13, VAR_1);
}
