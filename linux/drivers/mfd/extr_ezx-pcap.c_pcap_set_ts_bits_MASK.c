
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcap_chip {int adc_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pcap_chip*,int ,int*) ;
 int FUNC_1 (struct pcap_chip*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct pcap_chip *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_2(&VAR_3->adc_lock, VAR_5);
 FUNC_0(VAR_3, VAR_2, &VAR_6);
 VAR_6 &= ~(VAR_0 | VAR_1);
 VAR_6 |= VAR_4 & (VAR_0 | VAR_1);
 FUNC_1(VAR_3, VAR_2, VAR_6);
 FUNC_3(&VAR_3->adc_lock, VAR_5);
}
