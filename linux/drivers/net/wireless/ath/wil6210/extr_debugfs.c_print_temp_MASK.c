
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int s32 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct seq_file*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, const char *VAR_1, s32 VAR_2)
{
 switch (VAR_2) {
 case 0:
 case 128:
  FUNC_1(VAR_0, "%s N/A\n", VAR_1);
 break;
 default:
  FUNC_1(VAR_0, "%s %s%d.%03d\n", VAR_1, (VAR_2 < 0 ? "-" : ""),
      FUNC_0(VAR_2 / 1000), FUNC_0(VAR_2 % 1000));
  break;
 }
}
