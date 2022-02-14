
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct seq_file {scalar_t__ count; scalar_t__ size; scalar_t__ buf; } ;


 int FUNC_0 (struct seq_file*) ;
 int FUNC_1 (scalar_t__,scalar_t__,char const*,int ) ;

void FUNC_2(struct seq_file *VAR_0, const char *VAR_1, va_list VAR_2)
{
 int VAR_3;

 if (VAR_0->count < VAR_0->size) {
  VAR_3 = FUNC_1(VAR_0->buf + VAR_0->count, VAR_0->size - VAR_0->count, VAR_1, VAR_2);
  if (VAR_0->count + VAR_3 < VAR_0->size) {
   VAR_0->count += VAR_3;
   return;
  }
 }
 FUNC_0(VAR_0);
}
