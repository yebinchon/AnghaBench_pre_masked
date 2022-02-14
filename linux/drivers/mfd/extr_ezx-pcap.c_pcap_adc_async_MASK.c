
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct pcap_chip {size_t adc_tail; int adc_lock; struct pcap_adc_request** adc_queue; } ;
struct pcap_adc_request {void* data; void* callback; void** ch; int flags; void* bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pcap_adc_request*) ;
 struct pcap_adc_request* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pcap_chip*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct pcap_chip *VAR_4, u8 VAR_5, u32 VAR_6, u8 VAR_7[],
      void *VAR_8, void *VAR_9)
{
 struct pcap_adc_request *VAR_10;
 unsigned long VAR_11;


 VAR_10 = FUNC_1(sizeof(struct pcap_adc_request), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->bank = VAR_5;
 VAR_10->flags = VAR_6;
 VAR_10->ch[0] = VAR_7[0];
 VAR_10->ch[1] = VAR_7[1];
 VAR_10->callback = VAR_8;
 VAR_10->data = VAR_9;

 FUNC_3(&VAR_4->adc_lock, VAR_11);
 if (VAR_4->adc_queue[VAR_4->adc_tail]) {
  FUNC_4(&VAR_4->adc_lock, VAR_11);
  FUNC_0(VAR_10);
  return -VAR_0;
 }
 VAR_4->adc_queue[VAR_4->adc_tail] = VAR_10;
 VAR_4->adc_tail = (VAR_4->adc_tail + 1) & (VAR_3 - 1);
 FUNC_4(&VAR_4->adc_lock, VAR_11);


 FUNC_2(VAR_4);

 return 0;
}
