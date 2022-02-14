
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_transfer {scalar_t__ len; int tx_dma; int tx_buf; } ;
struct spi_device {int dev; } ;
struct scratch {int* status; int crc_val; } ;
struct mmc_spi_host {scalar_t__ dma_dev; int data_dma; int m; TYPE_1__* mmc; struct scratch* data; struct spi_device* spi; } ;
struct TYPE_2__ {scalar_t__ use_spi_crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (scalar_t__,int ,int,int ) ;
 int FUNC_4 (scalar_t__,int ,int,int ) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (struct mmc_spi_host*,unsigned long) ;
 int FUNC_7 (struct spi_device*,int *) ;

__attribute__((used)) static int
FUNC_8(struct mmc_spi_host *VAR_4, struct spi_transfer *VAR_5,
 unsigned long VAR_6)
{
 struct spi_device *VAR_7 = VAR_4->spi;
 int VAR_8, VAR_9;
 struct scratch *VAR_10 = VAR_4->data;
 u32 VAR_11;

 if (VAR_4->mmc->use_spi_crc)
  VAR_10->crc_val = FUNC_0(FUNC_1(0, VAR_5->tx_buf, VAR_5->len));
 if (VAR_4->dma_dev)
  FUNC_4(VAR_4->dma_dev,
    VAR_4->data_dma, sizeof(*VAR_10),
    VAR_0);

 VAR_8 = FUNC_7(VAR_7, &VAR_4->m);

 if (VAR_8 != 0) {
  FUNC_2(&VAR_7->dev, "write error (%d)\n", VAR_8);
  return VAR_8;
 }

 if (VAR_4->dma_dev)
  FUNC_3(VAR_4->dma_dev,
    VAR_4->data_dma, sizeof(*VAR_10),
    VAR_0);
 VAR_11 = FUNC_5(VAR_10->status);


 VAR_11 |= 0xE0000000;


 while (VAR_11 & 0x80000000)
  VAR_11 <<= 1;

 VAR_11 >>= 27;

 switch (VAR_11) {
 case 130:
  VAR_8 = 0;
  break;
 case 129:

  VAR_8 = -VAR_1;
  break;
 case 128:



  VAR_8 = -VAR_2;
  break;
 default:
  VAR_8 = -VAR_3;
  break;
 }
 if (VAR_8 != 0) {
  FUNC_2(&VAR_7->dev, "write error %02x (%d)\n",
   VAR_10->status[0], VAR_8);
  return VAR_8;
 }

 VAR_5->tx_buf += VAR_5->len;
 if (VAR_4->dma_dev)
  VAR_5->tx_dma += VAR_5->len;




 for (VAR_9 = 4; VAR_9 < sizeof(VAR_10->status); VAR_9++) {

  if (VAR_10->status[VAR_9] & 0x01)
   return 0;
 }
 return FUNC_6(VAR_4, VAR_6);
}
