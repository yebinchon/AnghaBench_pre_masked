
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int nbytes; } ;
struct TYPE_5__ {int buswidth; } ;
struct spi_mem_op {TYPE_2__ addr; TYPE_1__ data; } ;
struct TYPE_8__ {int flex_mode; int width; int addrlen; int hp; } ;
struct bcm_qspi {int s3_strap_override_ctrl; TYPE_4__ xfer_mode; int curr_cs; TYPE_3__* pdev; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_qspi*,struct spi_mem_op const*,int) ;
 int FUNC_1 (struct bcm_qspi*,struct spi_mem_op const*,int) ;
 int FUNC_2 (struct bcm_qspi*) ;
 int FUNC_3 (struct bcm_qspi*,int ,int ) ;
 int FUNC_4 (struct bcm_qspi*,int ,int ,int ) ;
 int FUNC_5 (int *,char*,int ,int,int,char*) ;
 int FUNC_6 (int *,char*,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct bcm_qspi *VAR_5,
      const struct spi_mem_op *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = VAR_6->data.buswidth ? VAR_6->data.buswidth : VAR_4;
 int VAR_10 = VAR_6->addr.nbytes;


 VAR_5->xfer_mode.flex_mode = 1;

 if (!FUNC_2(VAR_5)) {
  u32 VAR_11, VAR_12;

  VAR_11 = FUNC_3(VAR_5, VAR_0, VAR_2);
  VAR_12 = VAR_3;
  if (VAR_11 & VAR_12 || VAR_5->s3_strap_override_ctrl & VAR_12) {
   VAR_5->xfer_mode.flex_mode = 0;
   FUNC_4(VAR_5, VAR_0, VAR_1, 0);
   VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);
  }
 }

 if (VAR_5->xfer_mode.flex_mode)
  VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);

 if (VAR_8) {
  FUNC_6(&VAR_5->pdev->dev,
    "INVALID COMBINATION: width=%d addrlen=%d hp=%d\n",
    VAR_9, VAR_10, VAR_7);
 } else if (VAR_5->xfer_mode.width != VAR_9 ||
     VAR_5->xfer_mode.addrlen != VAR_10 ||
     VAR_5->xfer_mode.hp != VAR_7) {
  VAR_5->xfer_mode.width = VAR_9;
  VAR_5->xfer_mode.addrlen = VAR_10;
  VAR_5->xfer_mode.hp = VAR_7;
  FUNC_5(&VAR_5->pdev->dev,
   "cs:%d %d-lane output, %d-byte address%s\n",
   VAR_5->curr_cs,
   VAR_5->xfer_mode.width,
   VAR_5->xfer_mode.addrlen,
   VAR_5->xfer_mode.hp != -1 ? ", hp mode" : "");
 }

 return VAR_8;
}
