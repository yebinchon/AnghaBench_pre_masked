
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct sa1100_rtc {int rtsr; int rttr; } ;
struct device {int dummy; } ;


 struct sa1100_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct seq_file *VAR_1)
{
 struct sa1100_rtc *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, "trim/divider\t\t: 0x%08x\n", FUNC_1(VAR_2->rttr));
 FUNC_2(VAR_1, "RTSR\t\t\t: 0x%08x\n", FUNC_1(VAR_2->rtsr));

 return 0;
}
