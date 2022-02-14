
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct rtc_wkalrm {int time; } ;
struct pcap_rtc {int pcap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct pcap_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 unsigned long FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct pcap_rtc *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6 = FUNC_2(&VAR_4->time);
 u32 VAR_7, VAR_8;

 VAR_7 = VAR_6 % VAR_2;
 FUNC_1(VAR_5->pcap, VAR_1, VAR_7);

 VAR_8 = VAR_6 / VAR_2;
 FUNC_1(VAR_5->pcap, VAR_0, VAR_8);

 return 0;
}
