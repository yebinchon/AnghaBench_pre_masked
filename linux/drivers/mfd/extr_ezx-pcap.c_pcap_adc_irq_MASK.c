
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pcap_chip {size_t adc_head; int adc_lock; struct pcap_adc_request** adc_queue; } ;
struct pcap_adc_request {int* ch; int data; int (* callback ) (int ,int*) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (int,char*) ;
 int FUNC_1 (struct pcap_chip*,int ,int*) ;
 int FUNC_2 (struct pcap_chip*,int ,int) ;
 int FUNC_3 (struct pcap_adc_request*) ;
 int FUNC_4 (struct pcap_chip*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_12, void *VAR_13)
{
 struct pcap_chip *VAR_14 = VAR_13;
 struct pcap_adc_request *VAR_15;
 u16 VAR_16[2];
 u32 VAR_17;

 FUNC_5(&VAR_14->adc_lock);
 VAR_15 = VAR_14->adc_queue[VAR_14->adc_head];

 if (FUNC_0(!VAR_15, "adc irq without pending request\n")) {
  FUNC_6(&VAR_14->adc_lock);
  return VAR_0;
 }


 FUNC_1(VAR_14, VAR_10, &VAR_17);
 VAR_17 &= ~(VAR_1 | VAR_3);
 VAR_17 |= (VAR_15->ch[0] << VAR_2);
 VAR_17 |= (VAR_15->ch[1] << VAR_4);
 FUNC_2(VAR_14, VAR_10, VAR_17);
 FUNC_1(VAR_14, VAR_11, &VAR_17);
 VAR_16[0] = (VAR_17 & VAR_6) >> VAR_7;
 VAR_16[1] = (VAR_17 & VAR_8) >> VAR_9;

 VAR_14->adc_queue[VAR_14->adc_head] = ((void*)0);
 VAR_14->adc_head = (VAR_14->adc_head + 1) & (VAR_5 - 1);
 FUNC_6(&VAR_14->adc_lock);


 VAR_15->callback(VAR_15->data, VAR_16);
 FUNC_3(VAR_15);


 FUNC_4(VAR_14);

 return VAR_0;
}
