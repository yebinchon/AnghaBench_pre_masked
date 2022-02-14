
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct seq_file *VAR_1)
{
 if (!VAR_0 || !VAR_0->driver)
  return 0;

 FUNC_1(VAR_1, "name\t\t: %s\n", FUNC_0(VAR_0));

 return 0;
}
