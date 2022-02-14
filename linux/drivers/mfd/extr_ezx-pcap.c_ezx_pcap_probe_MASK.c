
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int bits_per_word; int mode; int dev; int irq; } ;
struct pcap_platform_data {int config; int irq_base; int num_subdevs; int (* init ) (struct pcap_chip*) ;int * subdevs; } ;
struct pcap_chip {int irq_base; int msr; int workqueue; struct spi_device* spi; int msr_work; int isr_work; int adc_lock; int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
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
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 struct pcap_platform_data* FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 struct pcap_chip* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int ,int ,char*,struct pcap_chip*) ;
 int FUNC_8 (struct pcap_chip*,int ,int) ;
 int * VAR_18 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int ,struct pcap_chip*) ;
 int FUNC_11 (int,int *,int *) ;
 int FUNC_12 (int,struct pcap_chip*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int) ;
 int VAR_19 ;
 int FUNC_15 (struct pcap_chip*,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_16 (struct pcap_chip*,int) ;
 int FUNC_17 (struct spi_device*,struct pcap_chip*) ;
 int FUNC_18 (struct spi_device*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct pcap_chip*) ;

__attribute__((used)) static int FUNC_21(struct spi_device *VAR_25)
{
 struct pcap_platform_data *VAR_26 = FUNC_4(&VAR_25->dev);
 struct pcap_chip *VAR_27;
 int VAR_28, VAR_29;
 int VAR_30 = -VAR_0;


 if (!VAR_26)
  goto ret;

 VAR_27 = FUNC_6(&VAR_25->dev, sizeof(*VAR_27), VAR_2);
 if (!VAR_27) {
  VAR_30 = -VAR_1;
  goto ret;
 }

 FUNC_19(&VAR_27->io_lock);
 FUNC_19(&VAR_27->adc_lock);
 FUNC_0(&VAR_27->isr_work, VAR_22);
 FUNC_0(&VAR_27->msr_work, VAR_23);
 FUNC_17(VAR_25, VAR_27);


 VAR_25->bits_per_word = 32;
 VAR_25->mode = VAR_17 | (VAR_26->config & VAR_7 ? VAR_16 : 0);
 VAR_30 = FUNC_18(VAR_25);
 if (VAR_30)
  goto ret;

 VAR_27->spi = VAR_25;


 VAR_27->irq_base = VAR_26->irq_base;
 VAR_27->workqueue = FUNC_1("pcapd");
 if (!VAR_27->workqueue) {
  VAR_30 = -VAR_1;
  FUNC_3(&VAR_25->dev, "can't create pcap thread\n");
  goto ret;
 }


 if (!(VAR_26->config & VAR_15))
  FUNC_8(VAR_27, VAR_12,
     (1 << VAR_9));


 for (VAR_28 = VAR_27->irq_base; VAR_28 < (VAR_27->irq_base + VAR_11); VAR_28++) {
  FUNC_11(VAR_28, &VAR_20, VAR_18);
  FUNC_12(VAR_28, VAR_27);
  FUNC_9(VAR_28, VAR_4 | VAR_3);
 }


 FUNC_8(VAR_27, VAR_14, VAR_10);
 FUNC_8(VAR_27, VAR_13, VAR_6);
 VAR_27->msr = VAR_10;

 FUNC_13(VAR_25->irq, VAR_5);
 FUNC_10(VAR_25->irq, VAR_21, VAR_27);
 FUNC_14(VAR_25->irq, 1);


 VAR_29 = FUNC_16(VAR_27, (VAR_26->config & VAR_15) ?
     VAR_9 : VAR_8);

 VAR_30 = FUNC_7(&VAR_25->dev, VAR_29, VAR_19, 0, "ADC",
    VAR_27);
 if (VAR_30)
  goto free_irqchip;


 for (VAR_28 = 0; VAR_28 < VAR_26->num_subdevs; VAR_28++) {
  VAR_30 = FUNC_15(VAR_27, &VAR_26->subdevs[VAR_28]);
  if (VAR_30)
   goto remove_subdevs;
 }


 if (VAR_26->init)
  VAR_26->init(VAR_27);

 return 0;

remove_subdevs:
 FUNC_5(&VAR_25->dev, ((void*)0), VAR_24);
free_irqchip:
 for (VAR_28 = VAR_27->irq_base; VAR_28 < (VAR_27->irq_base + VAR_11); VAR_28++)
  FUNC_11(VAR_28, ((void*)0), ((void*)0));

 FUNC_2(VAR_27->workqueue);
ret:
 return VAR_30;
}
