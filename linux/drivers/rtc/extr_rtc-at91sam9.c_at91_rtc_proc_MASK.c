
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct sam9_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sam9_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct sam9_rtc*,int ) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct seq_file *VAR_3)
{
 struct sam9_rtc *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = FUNC_1(VAR_4, VAR_1);

 FUNC_2(VAR_3, "update_IRQ\t: %s\n",
     (VAR_5 & VAR_0) ? "yes" : "no");
 return 0;
}
