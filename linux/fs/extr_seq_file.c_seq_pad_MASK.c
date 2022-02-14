
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int pad_until; int count; scalar_t__ size; scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__,char,int) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*) ;

void FUNC_3(struct seq_file *VAR_0, char VAR_1)
{
 int VAR_2 = VAR_0->pad_until - VAR_0->count;
 if (VAR_2 > 0) {
  if (VAR_2 + VAR_0->count > VAR_0->size) {
   FUNC_2(VAR_0);
   return;
  }
  FUNC_0(VAR_0->buf + VAR_0->count, ' ', VAR_2);
  VAR_0->count += VAR_2;
 }
 if (VAR_1)
  FUNC_1(VAR_0, VAR_1);
}
