
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sram_channel {int dummy; } ;
struct cx25821_dev {int pci_irqmask; } ;
struct cx25821_audio_dev {struct cx25821_dev* dev; int count; struct cx25821_audio_buffer* buf; } ;
struct TYPE_2__ {int dma; } ;
struct cx25821_audio_buffer {int bpl; TYPE_1__ risc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cx25821_dev*,int ,int ) ;
 int FUNC_2 (struct cx25821_dev*,struct sram_channel const*,int,int ) ;
 struct sram_channel* VAR_19 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct cx25821_audio_dev *VAR_20)
{
 struct cx25821_audio_buffer *VAR_21 = VAR_20->buf;
 struct cx25821_dev *VAR_22 = VAR_20->dev;
 const struct sram_channel *VAR_23 =
     &VAR_19[VAR_0];
 u32 VAR_24 = 0;


 FUNC_1(VAR_20->dev, 0, 0);


 FUNC_3(VAR_6,
   VAR_9 | VAR_8);


 FUNC_2(VAR_20->dev, VAR_23, VAR_21->bpl,
      VAR_21->risc.dma);


 FUNC_6(VAR_5, VAR_21->bpl);



 FUNC_6(VAR_2, VAR_16);
 FUNC_0(&VAR_20->count, 0);


 VAR_24 = FUNC_4(VAR_1);
 FUNC_6(VAR_1, VAR_24 | VAR_13 | VAR_10 |
   VAR_7);
 FUNC_6(VAR_3, VAR_14 | VAR_11 |
   VAR_15 | VAR_12);


 FUNC_6(VAR_4, ~0);


 FUNC_5(VAR_17, VAR_20->dev->pci_irqmask | VAR_18);


 VAR_24 = FUNC_4(VAR_6);
 FUNC_5(VAR_6, VAR_24 |
        (VAR_9 | VAR_8));

 FUNC_7(100);
 return 0;
}
