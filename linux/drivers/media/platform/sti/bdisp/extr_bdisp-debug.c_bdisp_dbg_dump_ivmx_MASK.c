
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct seq_file {int dummy; } ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2,
    u32 VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 FUNC_0(VAR_2, "IVMX0\t0x%08X\n", VAR_3);
 FUNC_0(VAR_2, "IVMX1\t0x%08X\n", VAR_4);
 FUNC_0(VAR_2, "IVMX2\t0x%08X\n", VAR_5);
 FUNC_0(VAR_2, "IVMX3\t0x%08X\t", VAR_6);

 if (!VAR_3 && !VAR_4 && !VAR_5 && !VAR_6) {
  FUNC_1(VAR_2, '\n');
  return;
 }

 if ((VAR_3 == VAR_0[0]) &&
     (VAR_4 == VAR_0[1]) &&
     (VAR_5 == VAR_0[2]) &&
     (VAR_6 == VAR_0[3])) {
  FUNC_2(VAR_2, "RGB to YUV\n");
  return;
 }

 if ((VAR_3 == VAR_1[0]) &&
     (VAR_4 == VAR_1[1]) &&
     (VAR_5 == VAR_1[2]) &&
     (VAR_6 == VAR_1[3])) {
  FUNC_2(VAR_2, "YUV to RGB\n");
  return;
 }
 FUNC_2(VAR_2, "Unknown conversion\n");
}
