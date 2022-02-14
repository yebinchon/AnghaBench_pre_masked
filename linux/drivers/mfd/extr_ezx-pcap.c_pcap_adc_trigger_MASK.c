
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct pcap_chip {size_t adc_head; int adc_lock; TYPE_1__** adc_queue; } ;
struct TYPE_2__ {int flags; scalar_t__ bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pcap_chip*,int ,int*) ;
 int FUNC_1 (struct pcap_chip*,int ,int) ;
 int FUNC_2 (struct pcap_chip*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pcap_chip *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 FUNC_3(&VAR_8->adc_lock, VAR_9);
 VAR_11 = VAR_8->adc_head;
 if (!VAR_8->adc_queue[VAR_11]) {

  FUNC_2(VAR_8);
  FUNC_4(&VAR_8->adc_lock, VAR_9);
  return;
 }

 FUNC_0(VAR_8, VAR_6, &VAR_10);
 VAR_10 &= (VAR_3 | VAR_4);
 VAR_10 |= VAR_8->adc_queue[VAR_11]->flags | VAR_0;

 if (VAR_8->adc_queue[VAR_11]->bank == VAR_2)
  VAR_10 |= VAR_1;

 FUNC_1(VAR_8, VAR_6, VAR_10);
 FUNC_4(&VAR_8->adc_lock, VAR_9);
 FUNC_1(VAR_8, VAR_7, VAR_5);
}
