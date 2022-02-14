
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1)
{
 if (VAR_0 < 0) {
  FUNC_1(VAR_1, "status:\t\tnot supported\n");
 } else {
  FUNC_0(VAR_1, "status:\t\t%d\n", VAR_0);
  FUNC_1(VAR_1, "commands:\t0, 1\n");
 }

 return 0;
}
