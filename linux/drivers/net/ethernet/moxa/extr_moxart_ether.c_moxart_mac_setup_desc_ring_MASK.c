
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct moxart_mac_priv_t {int tx_buf_size; int rx_buf_size; uintptr_t* rx_mapping; scalar_t__ base; int rx_base; int tx_base; scalar_t__ rx_head; scalar_t__* rx_buf; scalar_t__ rx_buf_base; void* rx_desc_base; scalar_t__ tx_tail; scalar_t__ tx_head; scalar_t__ tx_buf_base; scalar_t__* tx_buf; void* tx_desc_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 uintptr_t VAR_3 ;
 uintptr_t VAR_4 ;
 uintptr_t VAR_5 ;
 uintptr_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 uintptr_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 uintptr_t FUNC_0 (int *,scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int *,uintptr_t) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (uintptr_t,void*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct moxart_mac_priv_t* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_18)
{
 struct moxart_mac_priv_t *VAR_19 = FUNC_5(VAR_18);
 void *VAR_20;
 int VAR_21;

 for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
  VAR_20 = VAR_19->tx_desc_base + VAR_21 * VAR_16;
  FUNC_2(VAR_20, 0, VAR_16);

  VAR_19->tx_buf[VAR_21] = VAR_19->tx_buf_base + VAR_19->tx_buf_size * VAR_21;
 }
 FUNC_3(VAR_14, VAR_20 + VAR_17);

 VAR_19->tx_head = 0;
 VAR_19->tx_tail = 0;

 for (VAR_21 = 0; VAR_21 < VAR_9; VAR_21++) {
  VAR_20 = VAR_19->rx_desc_base + VAR_21 * VAR_10;
  FUNC_2(VAR_20, 0, VAR_10);
  FUNC_3(VAR_4, VAR_20 + VAR_11);
  FUNC_3(VAR_3 & VAR_5,
         VAR_20 + VAR_12);

  VAR_19->rx_buf[VAR_21] = VAR_19->rx_buf_base + VAR_19->rx_buf_size * VAR_21;
  VAR_19->rx_mapping[VAR_21] = FUNC_0(&VAR_18->dev,
           VAR_19->rx_buf[VAR_21],
           VAR_19->rx_buf_size,
           VAR_0);
  if (FUNC_1(&VAR_18->dev, VAR_19->rx_mapping[VAR_21]))
   FUNC_4(VAR_18, "DMA mapping error\n");

  FUNC_3(VAR_19->rx_mapping[VAR_21],
         VAR_20 + VAR_13 + VAR_7);
  FUNC_3((uintptr_t)VAR_19->rx_buf[VAR_21],
         VAR_20 + VAR_13 + VAR_8);
 }
 FUNC_3(VAR_6, VAR_20 + VAR_12);

 VAR_19->rx_head = 0;


 FUNC_6(VAR_19->tx_base, VAR_19->base + VAR_2);
 FUNC_6(VAR_19->rx_base, VAR_19->base + VAR_1);
}
