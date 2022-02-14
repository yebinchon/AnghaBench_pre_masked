
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {scalar_t__ regbase; } ;
struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 struct sh_rtc* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, struct seq_file *VAR_5)
{
 struct sh_rtc *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;

 VAR_7 = FUNC_1(VAR_6->regbase + VAR_0);
 FUNC_2(VAR_5, "carry_IRQ\t: %s\n", (VAR_7 & VAR_1) ? "yes" : "no");

 VAR_7 = FUNC_1(VAR_6->regbase + VAR_2);
 FUNC_2(VAR_5, "periodic_IRQ\t: %s\n",
     (VAR_7 & VAR_3) ? "yes" : "no");

 return 0;
}
