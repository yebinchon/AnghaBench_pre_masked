
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int fixed_message_length; scalar_t__ enable_length_byte; scalar_t__ enable_address_filtering; } ;
struct pi433_device {int interrupt_rx_allowed; scalar_t__ free_in_fifo; int rx_position; scalar_t__ rx_bytes_dropped; int rx_buffer_size; scalar_t__ rx_bytes_to_drop; int tx_wait_queue; struct spi_device* spi; int * rx_buffer; int fifo_wait_queue; int dev; TYPE_1__ rx_cfg; int * irq_num; int * irq_state; int tx_active; int rx_wait_queue; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct pi433_device*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct spi_device*,int ) ;
 int FUNC_5 (struct spi_device*,int *,int) ;
 int FUNC_6 (struct spi_device*,size_t,int ) ;
 scalar_t__ FUNC_7 (struct spi_device*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(void *VAR_9)
{
 struct pi433_device *VAR_10 = VAR_9;
 struct spi_device *VAR_11 = VAR_10->spi;
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_10->interrupt_rx_allowed = 0;


 FUNC_0(VAR_10->dev, "rx: going to wait for any tx to finish");
 VAR_14 = FUNC_8(VAR_10->rx_wait_queue, !VAR_10->tx_active);
 if (VAR_14) {

  VAR_10->interrupt_rx_allowed = 1;
  FUNC_9(&VAR_10->tx_wait_queue);
  return VAR_14;
 }


 VAR_10->free_in_fifo = VAR_2;
 VAR_10->rx_position = 0;
 VAR_10->rx_bytes_dropped = 0;


 VAR_14 = FUNC_2(VAR_10);
 if (VAR_14)
  return VAR_14;


 while (!FUNC_4(VAR_10->spi, VAR_7)) {

  VAR_10->interrupt_rx_allowed = 1;
  FUNC_9(&VAR_10->tx_wait_queue);


  FUNC_0(VAR_10->dev, "rx: going to wait for high RSSI level");
  VAR_14 = FUNC_8(VAR_10->rx_wait_queue,
        FUNC_4(VAR_10->spi,
        VAR_7));
  if (VAR_14)
   goto abort;
  VAR_10->interrupt_rx_allowed = 0;


  if (!VAR_10->tx_active)
   break;
 }


 VAR_14 = FUNC_6(VAR_11, VAR_0, VAR_1);
 if (VAR_14 < 0)
  goto abort;
 VAR_10->irq_state[VAR_0] = VAR_1;
 FUNC_1(VAR_10->irq_num[VAR_0], VAR_3);


 if (VAR_10->rx_cfg.fixed_message_length != 0) {
  if (VAR_10->rx_cfg.fixed_message_length > VAR_10->rx_buffer_size) {
   VAR_14 = -1;
   goto abort;
  }
  VAR_13 = VAR_10->rx_cfg.fixed_message_length;
  FUNC_0(VAR_10->dev, "rx: msg len set to %d by fixed length",
   VAR_13);
 } else {
  VAR_13 = VAR_10->rx_buffer_size;
  FUNC_0(VAR_10->dev, "rx: msg len set to %d as requested by read",
   VAR_13);
 }


 if (VAR_10->rx_cfg.enable_length_byte == VAR_4) {
  VAR_14 = FUNC_8(VAR_10->fifo_wait_queue,
        VAR_10->free_in_fifo < VAR_2);
  if (VAR_14)
   goto abort;

  FUNC_5(VAR_11, (u8 *)&VAR_13, 1);
  if (VAR_13 > VAR_10->rx_buffer_size) {
   VAR_14 = -1;
   goto abort;
  }
  VAR_10->free_in_fifo++;
  FUNC_0(VAR_10->dev, "rx: msg len reset to %d due to length byte",
   VAR_13);
 }


 if (VAR_10->rx_cfg.enable_address_filtering != VAR_5) {
  u8 VAR_15;

  VAR_13--;

  VAR_14 = FUNC_8(VAR_10->fifo_wait_queue,
        VAR_10->free_in_fifo < VAR_2);
  if (VAR_14)
   goto abort;

  FUNC_5(VAR_11, &VAR_15, 1);
  VAR_10->free_in_fifo++;
  FUNC_0(VAR_10->dev, "rx: address byte stripped off");
 }


 while (VAR_10->rx_position < VAR_13) {
  if (!FUNC_4(VAR_10->spi, VAR_6)) {
   VAR_14 = FUNC_8(VAR_10->fifo_wait_queue,
         VAR_10->free_in_fifo < VAR_2);
   if (VAR_14)
    goto abort;
  }


  if (VAR_10->rx_bytes_to_drop > VAR_10->rx_bytes_dropped)
   VAR_12 = VAR_10->rx_bytes_to_drop -
     VAR_10->rx_bytes_dropped;
  else
   VAR_12 = VAR_13 - VAR_10->rx_position;


  if (VAR_12 > VAR_2 - VAR_10->free_in_fifo)
   VAR_12 = VAR_2 - VAR_10->free_in_fifo;
  VAR_14 = FUNC_5(VAR_11,
     &VAR_10->rx_buffer[VAR_10->rx_position],
     VAR_12);
  if (VAR_14)
   goto abort;

  VAR_10->free_in_fifo += VAR_12;


  if (VAR_10->rx_bytes_to_drop > VAR_10->rx_bytes_dropped)
   VAR_10->rx_bytes_dropped += VAR_12;
  else
   VAR_10->rx_position += VAR_12;
 }


abort:
 VAR_10->interrupt_rx_allowed = 1;
 if (FUNC_7(VAR_10->spi, VAR_8))
  FUNC_3("rf69_set_mode(): radio module failed to go standby\n");
 FUNC_9(&VAR_10->tx_wait_queue);

 if (VAR_14)
  return VAR_14;
 else
  return VAR_13;
}
