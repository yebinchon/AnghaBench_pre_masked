
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;




 int FUNC_0 (int const*,int,int,int,char*,size_t,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct seq_file*,int) ;
 size_t FUNC_3 (struct seq_file*,char**) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*,char*,char const*,...) ;
 int FUNC_6 (struct seq_file*,char) ;

void FUNC_7(struct seq_file *VAR_0, const char *VAR_1, int VAR_2,
    int VAR_3, int VAR_4, const void *VAR_5, size_t VAR_6,
    bool VAR_7)
{
 const u8 *VAR_8 = VAR_5;
 int VAR_9, VAR_10, VAR_11 = VAR_6;
 char *VAR_12;
 size_t VAR_13;
 int VAR_14;

 if (VAR_3 != 16 && VAR_3 != 32)
  VAR_3 = 16;

 for (VAR_9 = 0; VAR_9 < VAR_6 && !FUNC_4(VAR_0); VAR_9 += VAR_3) {
  VAR_10 = FUNC_1(VAR_11, VAR_3);
  VAR_11 -= VAR_3;

  switch (VAR_2) {
  case 129:
   FUNC_5(VAR_0, "%s%p: ", VAR_1, VAR_8 + VAR_9);
   break;
  case 128:
   FUNC_5(VAR_0, "%s%.8x: ", VAR_1, VAR_9);
   break;
  default:
   FUNC_5(VAR_0, "%s", VAR_1);
   break;
  }

  VAR_13 = FUNC_3(VAR_0, &VAR_12);
  VAR_14 = FUNC_0(VAR_8 + VAR_9, VAR_10, VAR_3, VAR_4,
      VAR_12, VAR_13, VAR_7);
  FUNC_2(VAR_0, VAR_14 < VAR_13 ? VAR_14 : -1);

  FUNC_6(VAR_0, '\n');
 }
}
