
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_rtc {int rtc; int pcap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct pcap_rtc *VAR_8 = VAR_7;
 unsigned long VAR_9;

 if (VAR_6 == FUNC_0(VAR_8->pcap, VAR_1))
  VAR_9 = VAR_4 | VAR_5;
 else if (VAR_6 == FUNC_0(VAR_8->pcap, VAR_2))
  VAR_9 = VAR_4 | VAR_3;
 else
  VAR_9 = 0;

 FUNC_1(VAR_8->rtc, 1, VAR_9);
 return VAR_0;
}
