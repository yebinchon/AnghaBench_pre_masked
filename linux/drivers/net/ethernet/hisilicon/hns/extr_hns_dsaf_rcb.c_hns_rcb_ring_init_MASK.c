
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hnae_ring {int desc_dma_addr; int buf_size; } ;
struct hnae_queue {struct hnae_ring tx_ring; struct hnae_ring rx_ring; } ;
struct ring_pair_cb {scalar_t__ port_id_in_comm; struct hnae_queue q; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct hnae_queue*,int ,scalar_t__) ;
 int FUNC_1 (struct hnae_queue*,int ) ;
 int FUNC_2 (struct hnae_queue*,int ) ;

__attribute__((used)) static void FUNC_3(struct ring_pair_cb *VAR_10, int VAR_11)
{
 struct hnae_queue *VAR_12 = &VAR_10->q;
 struct hnae_ring *VAR_13 =
  (VAR_11 == VAR_9) ? &VAR_12->rx_ring : &VAR_12->tx_ring;
 dma_addr_t VAR_14 = VAR_13->desc_dma_addr;

 if (VAR_11 == VAR_9) {
  FUNC_0(VAR_12, VAR_2,
          (u32)VAR_14);
  FUNC_0(VAR_12, VAR_1,
          (u32)((VAR_14 >> 31) >> 1));

  FUNC_1(VAR_12, VAR_13->buf_size);

  FUNC_0(VAR_12, VAR_3,
          VAR_10->port_id_in_comm);
  FUNC_0(VAR_12, VAR_4,
          VAR_10->port_id_in_comm);
 } else {
  FUNC_0(VAR_12, VAR_6,
          (u32)VAR_14);
  FUNC_0(VAR_12, VAR_5,
          (u32)((VAR_14 >> 31) >> 1));

  FUNC_2(VAR_12, VAR_13->buf_size);

  FUNC_0(VAR_12, VAR_7,
          VAR_10->port_id_in_comm);
  FUNC_0(VAR_12, VAR_8,
   VAR_10->port_id_in_comm + VAR_0);
 }
}
