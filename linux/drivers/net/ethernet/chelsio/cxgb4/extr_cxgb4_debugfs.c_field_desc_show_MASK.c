
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct seq_file {int dummy; } ;
struct field_desc {unsigned long long width; unsigned long long start; int name; } ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int ,unsigned long long) ;
 int FUNC_1 (struct seq_file*,char*,char*) ;
 int FUNC_2 (struct seq_file*,char) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0, u64 VAR_1,
       const struct field_desc *VAR_2)
{
 char VAR_3[32];
 int VAR_4 = 0;

 while (VAR_2->name) {
  u64 VAR_5 = (1ULL << VAR_2->width) - 1;
  int VAR_6 = FUNC_0(VAR_3, sizeof(VAR_3), "%s: %llu", VAR_2->name,
        ((unsigned long long)VAR_1 >> VAR_2->start) & VAR_5);

  if (VAR_4 + VAR_6 >= 79) {
   VAR_4 = 8;
   FUNC_3(VAR_0, "\n        ");
  }
  FUNC_1(VAR_0, "%s ", VAR_3);
  VAR_4 += VAR_6 + 1;
  VAR_2++;
 }
 FUNC_2(VAR_0, '\n');
}
