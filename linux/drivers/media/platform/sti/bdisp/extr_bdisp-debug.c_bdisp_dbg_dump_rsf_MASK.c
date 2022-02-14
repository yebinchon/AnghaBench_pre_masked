
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, u32 VAR_1, char *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_0, "%s\t0x%08X\t", VAR_2, VAR_1);

 if (!VAR_1)
  goto done;

 VAR_3 = VAR_1 & 0xFFFF;
 FUNC_0(VAR_0, "H: %d(6.10) / scale~%dx0.1 - ", VAR_3, 1024 * 10 / VAR_3);

 VAR_3 = VAR_1 >> 16;
 FUNC_0(VAR_0, "V: %d(6.10) / scale~%dx0.1", VAR_3, 1024 * 10 / VAR_3);

done:
 FUNC_1(VAR_0, '\n');
}
