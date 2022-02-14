
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct pcap_chip {int irq_base; int workqueue; int adc_lock; int * adc_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 struct pcap_chip* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct spi_device *VAR_3)
{
 struct pcap_chip *VAR_4 = FUNC_4(VAR_3);
 unsigned long VAR_5;
 int VAR_6;


 FUNC_1(&VAR_3->dev, ((void*)0), VAR_2);


 FUNC_5(&VAR_4->adc_lock, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_3(VAR_4->adc_queue[VAR_6]);
 FUNC_6(&VAR_4->adc_lock, VAR_5);


 for (VAR_6 = VAR_4->irq_base; VAR_6 < (VAR_4->irq_base + VAR_1); VAR_6++)
  FUNC_2(VAR_6, ((void*)0), ((void*)0));

 FUNC_0(VAR_4->workqueue);

 return 0;
}
