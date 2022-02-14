
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, struct seq_file *VAR_5)
{
 unsigned char VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_0);

 FUNC_1(VAR_5, "mode\t\t: %s\n",
     (VAR_6 & VAR_1) ? "binary" : "bcd");

 VAR_6 = FUNC_0(VAR_4, VAR_2);

 FUNC_1(VAR_5, "battery\t\t: %s\n",
     (VAR_6 & VAR_3) ? "ok" : "exhausted");

 return 0;
}
