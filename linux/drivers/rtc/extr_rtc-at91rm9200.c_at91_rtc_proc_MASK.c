
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct seq_file *VAR_3)
{
 unsigned long VAR_4 = FUNC_0();

 FUNC_1(VAR_3, "update_IRQ\t: %s\n",
   (VAR_4 & VAR_0) ? "yes" : "no");
 FUNC_1(VAR_3, "periodic_IRQ\t: %s\n",
   (VAR_4 & VAR_1) ? "yes" : "no");

 return 0;
}
