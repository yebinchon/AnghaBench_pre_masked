
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_len; int fragmens_len; } ;
struct sprd_spi {int trans_mode; int hw_mode; int (* write_bufs ) (struct sprd_spi*,int ) ;TYPE_1__ dma; int xfer_completion; int * dev; int trans_len; } ;
struct spi_transfer {int len; } ;
struct spi_device {int dev; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 struct sprd_spi* FUNC_2 (int ) ;
 int FUNC_3 (struct sprd_spi*,int) ;
 int FUNC_4 (struct sprd_spi*,struct spi_transfer*) ;
 int FUNC_5 (struct sprd_spi*,struct spi_transfer*) ;
 int FUNC_6 (struct sprd_spi*) ;
 int FUNC_7 (struct sprd_spi*) ;
 int FUNC_8 (struct sprd_spi*) ;
 int FUNC_9 (struct sprd_spi*) ;
 int FUNC_10 (struct sprd_spi*,int ) ;
 int FUNC_11 (struct sprd_spi*,int ) ;
 int FUNC_12 (struct sprd_spi*) ;
 int FUNC_13 (struct sprd_spi*,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_4,
      struct spi_transfer *VAR_5)
{
 struct sprd_spi *VAR_6 = FUNC_2(VAR_4->master);
 u32 VAR_7 = VAR_6->trans_len;
 int VAR_8, VAR_9 = 0;

 FUNC_1(&VAR_6->xfer_completion);
 FUNC_8(VAR_6);
 if (VAR_6->trans_mode & VAR_3) {
  VAR_9 = FUNC_5(VAR_6, VAR_5);
  FUNC_11(VAR_6, VAR_7);





  if (VAR_6->hw_mode & VAR_0 || VAR_6->hw_mode & VAR_1)
   FUNC_12(VAR_6);
 } else {
  FUNC_10(VAR_6, VAR_7);





  if (VAR_6->hw_mode & VAR_0 || VAR_6->hw_mode & VAR_1)
   FUNC_9(VAR_6);
  else
   VAR_9 = VAR_6->write_bufs(VAR_6, VAR_7);
 }

 if (VAR_9 < 0) {
  VAR_8 = VAR_9;
  FUNC_0(VAR_6->dev, "failed to write, ret = %d\n", VAR_8);
  goto trans_complete;
 }

 if (VAR_6->trans_mode & VAR_2) {







  VAR_6->dma.rx_len = VAR_5->len > VAR_6->dma.fragmens_len ?
   (VAR_5->len - VAR_5->len % VAR_6->dma.fragmens_len) :
    VAR_5->len;
  VAR_8 = FUNC_4(VAR_6, VAR_5);
  if (VAR_8 < 0) {
   FUNC_0(&VAR_4->dev,
    "failed to configure rx DMA, ret = %d\n", VAR_8);
   goto trans_complete;
  }
 }

 FUNC_3(VAR_6, 1);
 FUNC_14(&(VAR_6->xfer_completion));

 if (VAR_6->trans_mode & VAR_3)
  VAR_8 = VAR_9;
 else
  VAR_8 = VAR_6->dma.rx_len;

trans_complete:
 FUNC_3(VAR_6, 0);
 FUNC_6(VAR_6);
 FUNC_7(VAR_6);

 return VAR_8;
}
