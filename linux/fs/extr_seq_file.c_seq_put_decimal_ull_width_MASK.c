
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ count; scalar_t__ size; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,scalar_t__,unsigned long long,unsigned int) ;
 int FUNC_1 (struct seq_file*,char const) ;
 int FUNC_2 (struct seq_file*,char const*) ;
 int FUNC_3 (struct seq_file*) ;

void FUNC_4(struct seq_file *VAR_0, const char *VAR_1,
    unsigned long long VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 if (VAR_0->count + 2 >= VAR_0->size)
  goto overflow;

 if (VAR_1 && VAR_1[0]) {
  if (VAR_1[1] == 0)
   FUNC_1(VAR_0, VAR_1[0]);
  else
   FUNC_2(VAR_0, VAR_1);
 }

 if (!VAR_3)
  VAR_3 = 1;

 if (VAR_0->count + VAR_3 >= VAR_0->size)
  goto overflow;

 VAR_4 = FUNC_0(VAR_0->buf + VAR_0->count, VAR_0->size - VAR_0->count, VAR_2, VAR_3);
 if (!VAR_4)
  goto overflow;

 VAR_0->count += VAR_4;
 return;

overflow:
 FUNC_3(VAR_0);
}
