
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{







 u64 VAR_2, VAR_3;





 VAR_2 = *(u64 *)(VAR_1 + 8);
 VAR_3 = *(u64 *)VAR_1;

 if (VAR_2 == 0)
  FUNC_0(VAR_0, "0x%llx", VAR_3);
 else
  FUNC_0(VAR_0, "0x%llx%016llx", VAR_2, VAR_3);
}
