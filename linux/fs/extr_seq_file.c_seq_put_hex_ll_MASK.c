
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct seq_file {unsigned int count; unsigned int size; int * buf; } ;


 int FUNC_0 (unsigned long long) ;
 int * VAR_0 ;
 int FUNC_1 (struct seq_file*,char const) ;
 int FUNC_2 (struct seq_file*,char const*) ;
 int FUNC_3 (struct seq_file*) ;

void FUNC_4(struct seq_file *VAR_1, const char *VAR_2,
    unsigned long long VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_2 && VAR_2[0]) {
  if (VAR_2[1] == 0)
   FUNC_1(VAR_1, VAR_2[0]);
  else
   FUNC_2(VAR_1, VAR_2);
 }


 if (VAR_3 == 0)
  VAR_5 = 1;
 else
  VAR_5 = (sizeof(VAR_3) * 8 - FUNC_0(VAR_3) + 3) / 4;

 if (VAR_5 < VAR_4)
  VAR_5 = VAR_4;

 if (VAR_1->count + VAR_5 > VAR_1->size) {
  FUNC_3(VAR_1);
  return;
 }

 for (VAR_6 = VAR_5 - 1; VAR_6 >= 0; VAR_6--) {
  VAR_1->buf[VAR_1->count + VAR_6] = VAR_0[0xf & VAR_3];
  VAR_3 = VAR_3 >> 4;
 }
 VAR_1->count += VAR_5;
}
