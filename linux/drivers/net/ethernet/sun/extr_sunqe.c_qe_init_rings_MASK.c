
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunqe_buffers {TYPE_1__* qe_rxd; } ;
struct sunqe {scalar_t__ tx_old; scalar_t__ tx_new; scalar_t__ rx_old; scalar_t__ rx_new; int buffers_dvma; struct sunqe_buffers* buffers; struct sunqe_buffers* qe_block; } ;
struct qe_init_block {TYPE_1__* qe_rxd; } ;
typedef scalar_t__ __u32 ;
struct TYPE_2__ {int rx_flags; scalar_t__ rx_addr; } ;
typedef int RXD_PKT_SZ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sunqe_buffers*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct sunqe *VAR_4)
{
 struct qe_init_block *VAR_5 = VAR_4->qe_block;
 struct sunqe_buffers *VAR_6 = VAR_4->buffers;
 __u32 VAR_7 = (__u32)VAR_4->buffers_dvma;
 int VAR_8;

 VAR_4->rx_new = VAR_4->rx_old = VAR_4->tx_new = VAR_4->tx_old = 0;
 FUNC_0(VAR_5, 0, sizeof(struct qe_init_block));
 FUNC_0(VAR_6, 0, sizeof(struct sunqe_buffers));
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5->qe_rxd[VAR_8].rx_addr = VAR_7 + FUNC_1(VAR_3, VAR_8);
  VAR_5->qe_rxd[VAR_8].rx_flags =
   (VAR_1 | ((RXD_PKT_SZ) & VAR_0));
 }
}
