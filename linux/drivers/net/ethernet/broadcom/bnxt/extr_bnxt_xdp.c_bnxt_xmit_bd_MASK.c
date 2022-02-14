
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct tx_bd {size_t tx_bd_opaque; int tx_bd_haddr; int tx_bd_len_flags_type; } ;
struct bnxt_tx_ring_info {size_t tx_prod; struct tx_bd** tx_desc_ring; struct bnxt_sw_tx_bd* tx_buf_ring; } ;
struct bnxt_sw_tx_bd {int dummy; } ;
struct bnxt {int dummy; } ;
typedef int dma_addr_t ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 int* VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

struct bnxt_sw_tx_bd *FUNC_5(struct bnxt *VAR_4,
       struct bnxt_tx_ring_info *VAR_5,
       dma_addr_t VAR_6, u32 VAR_7)
{
 struct bnxt_sw_tx_bd *VAR_8;
 struct tx_bd *VAR_9;
 u32 VAR_10;
 u16 VAR_11;

 VAR_11 = VAR_5->tx_prod;
 VAR_8 = &VAR_5->tx_buf_ring[VAR_11];

 VAR_9 = &VAR_5->tx_desc_ring[FUNC_2(VAR_11)][FUNC_1(VAR_11)];
 VAR_10 = (VAR_7 << VAR_2) | (1 << VAR_0) |
  VAR_1 | VAR_3[VAR_7 >> 9];
 VAR_9->tx_bd_len_flags_type = FUNC_3(VAR_10);
 VAR_9->tx_bd_opaque = VAR_11;
 VAR_9->tx_bd_haddr = FUNC_4(VAR_6);

 VAR_11 = FUNC_0(VAR_11);
 VAR_5->tx_prod = VAR_11;
 return VAR_8;
}
