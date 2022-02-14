
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct spi_message {scalar_t__ state; int actual_length; } ;
struct pl022 {scalar_t__ tx; scalar_t__ tx_end; scalar_t__ rx; scalar_t__ rx_end; int pump_transfers; TYPE_2__* cur_transfer; TYPE_1__* adev; int virtbase; struct spi_message* cur_msg; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ cs_change; scalar_t__ len; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 scalar_t__ FUNC_7 (struct pl022*) ;
 int FUNC_8 (struct pl022*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct pl022*) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_12, void *VAR_13)
{
 struct pl022 *VAR_14 = VAR_13;
 struct spi_message *VAR_15 = VAR_14->cur_msg;
 u16 VAR_16 = 0;

 if (FUNC_12(!VAR_15)) {
  FUNC_5(&VAR_14->adev->dev,
   "bad message state in interrupt handler");

  return VAR_2;
 }


 VAR_16 = FUNC_9(FUNC_3(VAR_14->virtbase));

 if (FUNC_12(!VAR_16))
  return VAR_3;






 if (FUNC_12(VAR_16 & VAR_8)) {




  FUNC_5(&VAR_14->adev->dev, "FIFO overrun\n");
  if (FUNC_9(FUNC_4(VAR_14->virtbase)) & VAR_9)
   FUNC_5(&VAR_14->adev->dev,
    "RXFIFO is full\n");






  FUNC_13(VAR_1,
         FUNC_2(VAR_14->virtbase));
  FUNC_13(VAR_0, FUNC_1(VAR_14->virtbase));
  FUNC_13((FUNC_9(FUNC_0(VAR_14->virtbase)) &
   (~VAR_5)), FUNC_0(VAR_14->virtbase));
  VAR_15->state = VAR_11;


  FUNC_11(&VAR_14->pump_transfers);
  return VAR_2;
 }

 FUNC_10(VAR_14);

 if (VAR_14->tx == VAR_14->tx_end) {

  FUNC_13((FUNC_9(FUNC_2(VAR_14->virtbase)) &
         ~VAR_7) | VAR_6,
         FUNC_2(VAR_14->virtbase));
 }






 if (VAR_14->rx >= VAR_14->rx_end) {
  FUNC_13(VAR_1,
         FUNC_2(VAR_14->virtbase));
  FUNC_13(VAR_0, FUNC_1(VAR_14->virtbase));
  if (FUNC_12(VAR_14->rx > VAR_14->rx_end)) {
   FUNC_6(&VAR_14->adev->dev, "read %u surplus "
     "bytes (did you request an odd "
     "number of bytes on a 16bit bus?)\n",
     (u32) (VAR_14->rx - VAR_14->rx_end));
  }

  VAR_15->actual_length += VAR_14->cur_transfer->len;

  VAR_15->state = FUNC_7(VAR_14);
  if (VAR_15->state != VAR_10 && VAR_14->cur_transfer->cs_change)
   FUNC_8(VAR_14, VAR_4);
  FUNC_11(&VAR_14->pump_transfers);
  return VAR_2;
 }

 return VAR_2;
}
