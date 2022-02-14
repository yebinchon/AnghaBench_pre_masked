
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,int) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, int VAR_1,
     int VAR_2, __le32 *VAR_3)
{
 int VAR_4;


 FUNC_1(VAR_0, "index %04d:\n\t", VAR_1);
 for (VAR_4 = 1; VAR_4 <= VAR_2 / 4; VAR_4++, VAR_3++) {
  FUNC_1(VAR_0, " 0x%08x", FUNC_0(*VAR_3));
  if (!(VAR_4 % 4))
   FUNC_2(VAR_0, "\n\t");
 }
 FUNC_2(VAR_0, "\n");
}
