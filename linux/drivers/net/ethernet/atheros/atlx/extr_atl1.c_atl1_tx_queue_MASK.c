
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct tx_packet_desc {int word2; int word3; int buffer_addr; } ;
struct atl1_tpd_ring {scalar_t__ count; int next_to_use; struct atl1_buffer* buffer_info; } ;
struct atl1_buffer {int length; int dma; } ;
struct atl1_adapter {struct atl1_tpd_ring tpd_ring; } ;


 struct tx_packet_desc* FUNC_0 (struct atl1_tpd_ring*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tx_packet_desc*,struct tx_packet_desc*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct atl1_adapter *VAR_6, u16 VAR_7,
       struct tx_packet_desc *VAR_8)
{
 struct atl1_tpd_ring *VAR_9 = &VAR_6->tpd_ring;
 struct atl1_buffer *VAR_10;
 struct tx_packet_desc *VAR_11;
 u16 VAR_12;
 u32 VAR_13;
 u16 VAR_14 = (u16) FUNC_1(&VAR_9->next_to_use);

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_10 = &VAR_9->buffer_info[VAR_14];
  VAR_11 = FUNC_0(&VAR_6->tpd_ring, VAR_14);
  if (VAR_11 != VAR_8)
   FUNC_5(VAR_11, VAR_8, sizeof(struct tx_packet_desc));
  VAR_11->buffer_addr = FUNC_4(VAR_10->dma);
  VAR_11->word2 &= ~(VAR_0 << VAR_1);
  VAR_11->word2 |= (FUNC_3(VAR_10->length) &
   VAR_0) << VAR_1;





  VAR_13 = (VAR_11->word3 >> VAR_5) &
   VAR_4;
  if (VAR_13) {
   if (!VAR_12)
    VAR_11->word3 |= 1 << VAR_3;
   else
    VAR_11->word3 &= ~(1 << VAR_3);
  }

  if (VAR_12 == (VAR_7 - 1))
   VAR_11->word3 |= 1 << VAR_2;

  if (++VAR_14 == VAR_9->count)
   VAR_14 = 0;
 }






 FUNC_6();

 FUNC_2(&VAR_9->next_to_use, VAR_14);
}
