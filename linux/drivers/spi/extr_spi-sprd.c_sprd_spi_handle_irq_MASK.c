
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ rx_len; } ;
struct sprd_spi {int trans_mode; scalar_t__ len; scalar_t__ (* read_bufs ) (struct sprd_spi*,scalar_t__) ;int xfer_completion; TYPE_1__ dma; int rx_buf; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct sprd_spi*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_9, void *VAR_10)
{
 struct sprd_spi *VAR_11 = (struct sprd_spi *)VAR_10;
 u32 VAR_12 = FUNC_1(VAR_11->base + VAR_3);

 if (VAR_12 & VAR_5) {
  FUNC_3(VAR_8, VAR_11->base + VAR_2);
  if (!(VAR_11->trans_mode & VAR_7))
   FUNC_0(&VAR_11->xfer_completion);

  return VAR_0;
 }

 if (VAR_12 & VAR_4) {
  FUNC_3(VAR_6, VAR_11->base + VAR_2);
  if (VAR_11->dma.rx_len < VAR_11->len) {
   VAR_11->rx_buf += VAR_11->dma.rx_len;
   VAR_11->dma.rx_len +=
    VAR_11->read_bufs(VAR_11, VAR_11->len - VAR_11->dma.rx_len);
  }
  FUNC_0(&VAR_11->xfer_completion);

  return VAR_0;
 }

 return VAR_1;
}
