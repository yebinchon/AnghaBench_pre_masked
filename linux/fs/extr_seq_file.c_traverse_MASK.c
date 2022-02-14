
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ count; scalar_t__ from; int size; void* buf; TYPE_1__* op; int index; scalar_t__ version; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* show ) (struct seq_file*,void*) ;int (* stop ) (struct seq_file*,void*) ;void* (* next ) (struct seq_file*,void*,int *) ;void* (* start ) (struct seq_file*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct seq_file*) ;
 void* FUNC_5 (struct seq_file*,int *) ;
 int FUNC_6 (struct seq_file*,void*) ;
 void* FUNC_7 (struct seq_file*,void*,int *) ;
 int FUNC_8 (struct seq_file*,void*) ;
 int FUNC_9 (struct seq_file*,void*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct seq_file *VAR_3, loff_t VAR_4)
{
 loff_t VAR_5 = 0;
 int VAR_6 = 0;
 void *VAR_7;

 VAR_3->version = 0;
 VAR_3->index = 0;
 VAR_3->count = VAR_3->from = 0;
 if (!VAR_4)
  return 0;

 if (!VAR_3->buf) {
  VAR_3->buf = FUNC_3(VAR_3->size = VAR_2);
  if (!VAR_3->buf)
   return -VAR_1;
 }
 VAR_7 = VAR_3->op->start(VAR_3, &VAR_3->index);
 while (VAR_7) {
  VAR_6 = FUNC_1(VAR_7);
  if (FUNC_0(VAR_7))
   break;
  VAR_6 = VAR_3->op->show(VAR_3, VAR_7);
  if (VAR_6 < 0)
   break;
  if (FUNC_10(VAR_6)) {
   VAR_6 = 0;
   VAR_3->count = 0;
  }
  if (FUNC_4(VAR_3))
   goto Eoverflow;
  VAR_7 = VAR_3->op->next(VAR_3, VAR_7, &VAR_3->index);
  if (VAR_5 + VAR_3->count > VAR_4) {
   VAR_3->from = VAR_4 - VAR_5;
   VAR_3->count -= VAR_3->from;
   break;
  }
  VAR_5 += VAR_3->count;
  VAR_3->count = 0;
  if (VAR_5 == VAR_4)
   break;
 }
 VAR_3->op->stop(VAR_3, VAR_7);
 return VAR_6;

Eoverflow:
 VAR_3->op->stop(VAR_3, VAR_7);
 FUNC_2(VAR_3->buf);
 VAR_3->count = 0;
 VAR_3->buf = FUNC_3(VAR_3->size <<= 1);
 return !VAR_3->buf ? -VAR_1 : -VAR_0;
}
