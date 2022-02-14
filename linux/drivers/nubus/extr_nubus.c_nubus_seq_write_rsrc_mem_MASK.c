
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct nubus_dirent {int mask; } ;
typedef int buf ;


 unsigned int FUNC_0 (unsigned long*) ;
 unsigned char* FUNC_1 (struct nubus_dirent const*) ;
 unsigned long FUNC_2 (unsigned char**,int,int ) ;
 int FUNC_3 (struct seq_file*,unsigned long) ;
 int FUNC_4 (struct seq_file*,unsigned long*,unsigned int) ;

void FUNC_5(struct seq_file *VAR_0,
         const struct nubus_dirent *VAR_1,
         unsigned int VAR_2)
{
 unsigned long VAR_3[32];
 unsigned int VAR_4 = sizeof(VAR_3);
 unsigned char *VAR_5 = FUNC_1(VAR_1);


 while (VAR_2 >= VAR_4) {
  unsigned int VAR_6;

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++)
   VAR_3[VAR_6] = FUNC_2(&VAR_5, sizeof(VAR_3[0]),
            VAR_1->mask);
  FUNC_4(VAR_0, VAR_3, VAR_4);
  VAR_2 -= VAR_4;
 }

 while (VAR_2--)
  FUNC_3(VAR_0, FUNC_2(&VAR_5, 1, VAR_1->mask));
}
