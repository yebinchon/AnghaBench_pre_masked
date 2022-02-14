
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct seq_file *VAR_3)
{
 FUNC_1(VAR_3, "periodic_IRQ\t: %s\n",
       (FUNC_0(VAR_0) & VAR_1) ? "yes" : "no");
 return 0;
}
