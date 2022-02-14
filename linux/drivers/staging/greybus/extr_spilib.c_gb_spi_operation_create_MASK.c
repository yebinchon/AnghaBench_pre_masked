
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct spi_transfer {size_t tx_buf; size_t len; size_t speed_hz; size_t delay_usecs; scalar_t__ rx_buf; int bits_per_word; int cs_change; } ;
struct spi_message {scalar_t__ state; size_t actual_length; struct spi_device* spi; } ;
struct spi_device {int chip_select; int mode; } ;
struct gb_spilib {size_t tx_xfer_offset; size_t last_xfer_size; size_t rx_xfer_offset; unsigned int op_timeout; struct spi_transfer* last_xfer; struct spi_transfer* first_xfer; int parent; } ;
struct gb_spi_transfer_request {struct gb_spi_transfer* transfers; int chip_select; int mode; void* count; } ;
struct gb_spi_transfer {int xfer_flags; int bits_per_word; int cs_change; void* delay_usecs; void* len; void* speed_hz; } ;
struct gb_operation {TYPE_1__* request; } ;
struct gb_connection {int dummy; } ;
struct TYPE_2__ {struct gb_spi_transfer_request* payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_0 (size_t,size_t*,size_t,size_t) ;
 size_t FUNC_1 (size_t,size_t,size_t,size_t) ;
 void* FUNC_2 (size_t) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,size_t) ;
 struct gb_operation* FUNC_5 (struct gb_connection*,int ,size_t,size_t,int ) ;
 size_t FUNC_6 (struct gb_connection*) ;
 struct spi_transfer* FUNC_7 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_8 (struct gb_spilib*) ;
 int FUNC_9 (void*,size_t,size_t) ;
 int FUNC_10 (size_t,size_t,size_t) ;

__attribute__((used)) static struct gb_operation *FUNC_11(struct gb_spilib *VAR_11,
  struct gb_connection *VAR_12, struct spi_message *VAR_13)
{
 struct gb_spi_transfer_request *VAR_14;
 struct spi_device *VAR_15 = VAR_13->spi;
 struct spi_transfer *VAR_16;
 struct gb_spi_transfer *VAR_17;
 struct gb_operation *VAR_18;
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0, VAR_22 = 0, VAR_23;
 u32 VAR_24 = 0, VAR_25 = 0, VAR_26;
 u32 VAR_27 = 0;
 unsigned int VAR_28;
 size_t VAR_29;
 void *VAR_30;

 VAR_29 = FUNC_6(VAR_12);
 VAR_16 = VAR_11->first_xfer;



 while (VAR_13->state != VAR_4) {
  VAR_13->state = VAR_2;
  VAR_11->last_xfer = VAR_16;

  if (!VAR_16->tx_buf && !VAR_16->rx_buf) {
   FUNC_4(VAR_11->parent,
    "bufferless transfer, length %u\n", VAR_16->len);
   VAR_13->state = VAR_1;
   return ((void*)0);
  }

  VAR_24 = 0;
  VAR_25 = 0;

  if (VAR_16->tx_buf) {
   VAR_26 = VAR_16->len - VAR_11->tx_xfer_offset;
   if (!FUNC_10(VAR_19, VAR_21, VAR_29))
    break;
   VAR_24 = FUNC_1(VAR_19, VAR_21,
        VAR_26, VAR_29);
   VAR_11->last_xfer_size = VAR_24;
  }

  if (VAR_16->rx_buf) {
   VAR_26 = VAR_16->len - VAR_11->rx_xfer_offset;
   VAR_25 = FUNC_0(VAR_20, &VAR_24,
        VAR_26, VAR_29);
   VAR_11->last_xfer_size = VAR_25;
  }

  VAR_19 += VAR_24;
  VAR_20 += VAR_25;

  VAR_27 += VAR_11->last_xfer_size;
  VAR_21++;

  VAR_16 = FUNC_7(VAR_16, VAR_13);
  if (!VAR_16 || VAR_27 >= VAR_29)
   VAR_13->state = VAR_4;
 }





 VAR_23 = sizeof(*VAR_14);
 VAR_23 += VAR_21 * sizeof(*VAR_17);
 VAR_23 += VAR_19;


 VAR_18 = FUNC_5(VAR_12, VAR_5,
     VAR_23, VAR_20, VAR_9);
 if (!VAR_18)
  return ((void*)0);

 VAR_14 = VAR_18->request->payload;
 VAR_14->count = FUNC_2(VAR_21);
 VAR_14->mode = VAR_15->mode;
 VAR_14->chip_select = VAR_15->chip_select;

 VAR_17 = &VAR_14->transfers[0];
 VAR_30 = VAR_17 + VAR_21;


 VAR_16 = VAR_11->first_xfer;
 while (VAR_13->state != VAR_3) {
  if (VAR_16 == VAR_11->last_xfer)
   VAR_22 = VAR_11->last_xfer_size;
  else
   VAR_22 = VAR_16->len;


  VAR_28 = VAR_22 * 8 * VAR_10 / VAR_16->speed_hz;
  VAR_28 += VAR_0;

  if (VAR_28 > VAR_11->op_timeout)
   VAR_11->op_timeout = VAR_28;

  VAR_17->speed_hz = FUNC_3(VAR_16->speed_hz);
  VAR_17->len = FUNC_3(VAR_22);
  VAR_17->delay_usecs = FUNC_2(VAR_16->delay_usecs);
  VAR_17->cs_change = VAR_16->cs_change;
  VAR_17->bits_per_word = VAR_16->bits_per_word;


  if (VAR_16->tx_buf) {
   VAR_17->xfer_flags |= VAR_8;
   FUNC_9(VAR_30, VAR_16->tx_buf + VAR_11->tx_xfer_offset,
          VAR_22);
   VAR_30 += VAR_22;
  }

  if (VAR_16->rx_buf)
   VAR_17->xfer_flags |= VAR_7;

  if (VAR_16 == VAR_11->last_xfer) {
   if (!FUNC_8(VAR_11))
    VAR_17->xfer_flags |= VAR_6;
   VAR_13->state = VAR_3;
   continue;
  }

  VAR_17++;
  VAR_16 = FUNC_7(VAR_16, VAR_13);
 }

 VAR_13->actual_length += VAR_27;

 return VAR_18;
}
