
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rtc_time {int dummy; } ;
struct pcap_rtc {int pcap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct pcap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned long*) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, struct rtc_time *VAR_6)
{
 struct pcap_rtc *VAR_7 = FUNC_0(VAR_5);
 unsigned long VAR_8;
 u32 VAR_9, VAR_10;

 FUNC_1(VAR_7->pcap, VAR_1, &VAR_9);
 VAR_8 = VAR_9 & VAR_3;

 FUNC_1(VAR_7->pcap, VAR_0, &VAR_10);
 VAR_8 += (VAR_10 & VAR_2) * VAR_4;

 FUNC_2(VAR_8, VAR_6);

 return 0;
}
