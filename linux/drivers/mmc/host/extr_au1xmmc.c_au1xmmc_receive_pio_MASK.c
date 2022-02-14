
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int offset; } ;
struct mmc_data {struct scatterlist* sg; } ;
struct TYPE_8__ {int len; size_t index; int offset; } ;
struct TYPE_6__ {size_t len; } ;
struct au1xmmc_host {int flags; int data_task; TYPE_4__ pio; TYPE_3__* pdev; TYPE_2__ dma; TYPE_1__* mrq; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_5__ {struct mmc_data* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct au1xmmc_host*) ;
 int FUNC_2 (struct au1xmmc_host*) ;
 int FUNC_3 (struct au1xmmc_host*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct au1xmmc_host*) ;
 int FUNC_5 (int ) ;
 unsigned char* FUNC_6 (int ) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct au1xmmc_host *VAR_8)
{
 struct mmc_data *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;
 unsigned char *VAR_13 = ((void*)0);
 u32 VAR_14, VAR_15;
 struct scatterlist *VAR_16;

 VAR_9 = VAR_8->mrq->data;

 if (!(VAR_8->flags & VAR_1))
  return;

 VAR_10 = VAR_8->pio.len;

 if (VAR_8->pio.index < VAR_8->dma.len) {
  VAR_16 = &VAR_9->sg[VAR_8->pio.index];
  VAR_13 = FUNC_6(FUNC_9(VAR_16)) + VAR_16->offset + VAR_8->pio.offset;


  VAR_12 = FUNC_8(&VAR_9->sg[VAR_8->pio.index]) - VAR_8->pio.offset;


  if (VAR_12 < VAR_10)
   VAR_10 = VAR_12;
 }

 if (VAR_10 > VAR_0)
  VAR_10 = VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_14 = FUNC_5(FUNC_2(VAR_8));

  if (!(VAR_14 & VAR_4))
   break;

  if (VAR_14 & VAR_5) {
   FUNC_0("RX CRC Error [%d + %d].\n", VAR_8->pdev->id,
     VAR_8->pio.len, VAR_11);
   break;
  }

  if (VAR_14 & VAR_6) {
   FUNC_0("RX Overrun [%d + %d]\n", VAR_8->pdev->id,
     VAR_8->pio.len, VAR_11);
   break;
  }
  else if (VAR_14 & VAR_7) {
   FUNC_0("RX Underrun [%d + %d]\n", VAR_8->pdev->id,
     VAR_8->pio.len, VAR_11);
   break;
  }

  VAR_15 = FUNC_5(FUNC_1(VAR_8));

  if (VAR_13)
   VAR_13[VAR_11] = (unsigned char)(VAR_15 & 0xFF);
 }
 if (VAR_13)
  FUNC_7(VAR_13);

 VAR_8->pio.len -= VAR_11;
 VAR_8->pio.offset += VAR_11;

 if (VAR_12 && VAR_11 == VAR_12) {
  VAR_8->pio.index++;
  VAR_8->pio.offset = 0;
 }

 if (VAR_8->pio.len == 0) {

  FUNC_3(VAR_8, VAR_3);

  if (VAR_8->flags & VAR_2)
   FUNC_4(VAR_8);

  FUNC_10(&VAR_8->data_task);
 }
}
