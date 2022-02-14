
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ count; scalar_t__ size; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,char const*,int) ;
 int FUNC_1 (struct seq_file*) ;
 int FUNC_2 (char const*) ;

void FUNC_3(struct seq_file *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_1);

 if (VAR_0->count + VAR_2 >= VAR_0->size) {
  FUNC_1(VAR_0);
  return;
 }
 FUNC_0(VAR_0->buf + VAR_0->count, VAR_1, VAR_2);
 VAR_0->count += VAR_2;
}
