
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, &VAR_4);
 if (VAR_5) {
  FUNC_0("Get IOSS Trace Verbosity Failed with Error %d\n", VAR_5);
  return -VAR_0;
 }

 FUNC_1(VAR_2, "IOSS Trace Verbosity %u\n", VAR_4);
 return 0;
}
