
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct xilinx_spi {int bytes_per_word; scalar_t__ irq; int buffer_size; int (* read_fn ) (scalar_t__) ;scalar_t__ regs; int (* write_fn ) (int,scalar_t__) ;int done; int rx_ptr; int tx_ptr; } ;
struct spi_transfer {int len; int rx_buf; int tx_buf; } ;
struct spi_device {int dev; int master; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 struct xilinx_spi* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct xilinx_spi*) ;
 int FUNC_17 (struct xilinx_spi*) ;
 int FUNC_18 (struct xilinx_spi*) ;

__attribute__((used)) static int FUNC_19(struct spi_device *VAR_9, struct spi_transfer *VAR_10)
{
 struct xilinx_spi *VAR_11 = FUNC_3(VAR_9->master);
 int VAR_12;
 bool VAR_13 = 0;
 u16 VAR_14 = 0;



 VAR_11->tx_ptr = VAR_10->tx_buf;
 VAR_11->rx_ptr = VAR_10->rx_buf;
 VAR_12 = VAR_10->len / VAR_11->bytes_per_word;

 if (VAR_11->irq >= 0 && VAR_12 > VAR_11->buffer_size) {
  u32 VAR_15;
  VAR_13 = 1;

  VAR_14 = VAR_11->read_fn(VAR_11->regs + VAR_4);
  VAR_11->write_fn(VAR_14 | VAR_5,
          VAR_11->regs + VAR_4);

  VAR_15 = VAR_11->read_fn(VAR_11->regs + VAR_3);
  if (VAR_15)
   VAR_11->write_fn(VAR_15,
           VAR_11->regs + VAR_3);

  VAR_11->write_fn(VAR_2,
    VAR_11->regs + VAR_1);
  FUNC_2(&VAR_11->done);
 }

 while (VAR_12) {
  int VAR_16, VAR_17, VAR_18;
  u32 VAR_19;
  int VAR_20;

  VAR_16 = FUNC_1(VAR_12, VAR_11->buffer_size);

  VAR_17 = VAR_16;
  while (VAR_17--)
   FUNC_17(VAR_11);





  if (VAR_13) {
   VAR_11->write_fn(VAR_14, VAR_11->regs + VAR_4);
   FUNC_15(&VAR_11->done);






   VAR_11->write_fn(VAR_14 | VAR_5,
           VAR_11->regs + VAR_4);
   VAR_19 = VAR_8;
  } else
   VAR_19 = VAR_11->read_fn(VAR_11->regs + VAR_6);


  VAR_18 = VAR_16;
  VAR_20 = 10;
  while (VAR_18) {
   if (VAR_18 == VAR_16 && !(VAR_20--) &&
       !(VAR_19 & VAR_8) &&
       (VAR_19 & VAR_7)) {
    FUNC_0(&VAR_9->dev,
     "Detected stall. Check C_SPI_MODE and C_SPI_MEMORY\n");
    FUNC_18(VAR_11);
    return -VAR_0;
   }

   if ((VAR_19 & VAR_8) && (VAR_18 > 1)) {
    FUNC_16(VAR_11);
    VAR_18--;
    continue;
   }

   VAR_19 = VAR_11->read_fn(VAR_11->regs + VAR_6);
   if (!(VAR_19 & VAR_7)) {
    FUNC_16(VAR_11);
    VAR_18--;
   }
  }

  VAR_12 -= VAR_16;
 }

 if (VAR_13) {
  VAR_11->write_fn(0, VAR_11->regs + VAR_1);
  VAR_11->write_fn(VAR_14, VAR_11->regs + VAR_4);
 }

 return VAR_10->len;
}
