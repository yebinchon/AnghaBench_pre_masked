
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pcap_chip {int dummy; } ;
struct pcap_adc_sync_request {int * res; int completion; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pcap_chip*,int ,int ,int *,int ,struct pcap_adc_sync_request*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pcap_chip *VAR_1, u8 VAR_2, u32 VAR_3, u8 VAR_4[],
        u16 VAR_5[])
{
 struct pcap_adc_sync_request VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6.completion);
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0,
        &VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_2(&VAR_6.completion);
 VAR_5[0] = VAR_6.res[0];
 VAR_5[1] = VAR_6.res[1];

 return 0;
}
