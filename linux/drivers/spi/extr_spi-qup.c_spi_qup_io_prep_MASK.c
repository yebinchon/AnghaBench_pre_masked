
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {int len; int bits_per_word; int speed_hz; } ;
struct spi_qup {int in_fifo_sz; int w_size; int n_words; int mode; int dev; int cclk; } ;
struct spi_device {int mode; TYPE_1__* master; } ;
struct TYPE_3__ {scalar_t__ cur_msg_mapped; scalar_t__ (* can_dma ) (TYPE_1__*,struct spi_device*,struct spi_transfer*) ;} ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 struct spi_qup* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_5, struct spi_transfer *VAR_6)
{
 struct spi_qup *VAR_7 = FUNC_3(VAR_5->master);
 int VAR_8;

 if (VAR_5->mode & VAR_4 && VAR_6->len > VAR_7->in_fifo_sz) {
  FUNC_2(VAR_7->dev, "too big size for loopback %d > %d\n",
   VAR_6->len, VAR_7->in_fifo_sz);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_7->cclk, VAR_6->speed_hz);
 if (VAR_8) {
  FUNC_2(VAR_7->dev, "fail to set frequency %d",
   VAR_6->speed_hz);
  return -VAR_0;
 }

 VAR_7->w_size = FUNC_0(VAR_6->bits_per_word, 8);
 VAR_7->n_words = VAR_6->len / VAR_7->w_size;

 if (VAR_7->n_words <= (VAR_7->in_fifo_sz / sizeof(u32)))
  VAR_7->mode = VAR_3;
 else if (VAR_5->master->can_dma &&
   VAR_5->master->can_dma(VAR_5->master, VAR_5, VAR_6) &&
   VAR_5->master->cur_msg_mapped)
  VAR_7->mode = VAR_1;
 else
  VAR_7->mode = VAR_2;

 return 0;
}
