
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int len; } ;
struct spi_device {int mode; int dev; int master; } ;
struct sirfsoc_spi {int word_width; int left_rx_word; int tx_done; TYPE_1__* regs; scalar_t__ base; int tx; } ;
struct TYPE_2__ {scalar_t__ tx_rx_en; scalar_t__ int_en; scalar_t__ spi_cmd; scalar_t__ txfifo_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int*,int ,int) ;
 struct sirfsoc_spi* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_6,
 struct spi_transfer *VAR_7)
{
 struct sirfsoc_spi *VAR_8;
 int VAR_9 = VAR_7->len * 10;
 u32 VAR_10;

 VAR_8 = FUNC_3(VAR_6->master);
 FUNC_5(VAR_2, VAR_8->base + VAR_8->regs->txfifo_op);
 FUNC_5(VAR_3, VAR_8->base + VAR_8->regs->txfifo_op);
 FUNC_2(&VAR_10, VAR_8->tx, VAR_7->len);
 if (VAR_8->word_width == 1 && !(VAR_6->mode & VAR_5))
  VAR_10 = FUNC_0(VAR_10) >>
   ((VAR_0 - VAR_7->len) * 8);
 if (VAR_8->word_width == 2 && VAR_7->len == 4 &&
   (!(VAR_6->mode & VAR_5)))
  VAR_10 = ((VAR_10 & 0xffff) << 16) | (VAR_10 >> 16);
 FUNC_5(VAR_10, VAR_8->base + VAR_8->regs->spi_cmd);
 FUNC_5(VAR_4,
  VAR_8->base + VAR_8->regs->int_en);
 FUNC_5(VAR_1,
  VAR_8->base + VAR_8->regs->tx_rx_en);
 if (FUNC_4(&VAR_8->tx_done, VAR_9) == 0) {
  FUNC_1(&VAR_6->dev, "cmd transfer timeout\n");
  return;
 }
 VAR_8->left_rx_word -= VAR_7->len;
}
