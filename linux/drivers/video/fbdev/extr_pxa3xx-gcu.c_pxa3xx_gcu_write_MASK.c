
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa3xx_gcu_priv {int spinlock; TYPE_1__* shared; struct pxa3xx_gcu_batch* ready_last; struct pxa3xx_gcu_batch* ready; struct pxa3xx_gcu_batch* free; } ;
struct pxa3xx_gcu_batch {int* ptr; int length; struct pxa3xx_gcu_batch* next; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int num_words; int hw_running; int num_writes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,char const*,int) ;
 int FUNC_2 (struct pxa3xx_gcu_priv*) ;
 int FUNC_3 (struct pxa3xx_gcu_priv*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct pxa3xx_gcu_priv* FUNC_6 (struct file*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct file *VAR_3, const char *VAR_4,
   size_t VAR_5, loff_t *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct pxa3xx_gcu_batch *VAR_9;
 struct pxa3xx_gcu_priv *VAR_10 = FUNC_6(VAR_3);

 int VAR_11 = VAR_5 / 4;



 VAR_10->shared->num_writes++;
 VAR_10->shared->num_words += VAR_11;


 if (VAR_11 >= VAR_2)
  return -VAR_0;


 if (!VAR_10->free) {
  VAR_7 = FUNC_2(VAR_10);
  if (VAR_7 < 0)
   return VAR_7;
 }




 FUNC_4(&VAR_10->spinlock, VAR_8);
 VAR_9 = VAR_10->free;
 VAR_10->free = VAR_9->next;
 FUNC_5(&VAR_10->spinlock, VAR_8);



 VAR_7 = FUNC_1(VAR_9->ptr, VAR_4, VAR_11 * 4);
 if (VAR_7) {
  FUNC_4(&VAR_10->spinlock, VAR_8);
  VAR_9->next = VAR_10->free;
  VAR_10->free = VAR_9;
  FUNC_5(&VAR_10->spinlock, VAR_8);
  return -VAR_1;
 }

 VAR_9->length = VAR_11;


 VAR_9->ptr[VAR_11] = 0x01000000;




 FUNC_4(&VAR_10->spinlock, VAR_8);

 VAR_9->next = ((void*)0);

 if (VAR_10->ready) {
  FUNC_0(VAR_10->ready_last == ((void*)0));

  VAR_10->ready_last->next = VAR_9;
 } else
  VAR_10->ready = VAR_9;

 VAR_10->ready_last = VAR_9;

 if (!VAR_10->shared->hw_running)
  FUNC_3(VAR_10);

 FUNC_5(&VAR_10->spinlock, VAR_8);

 return VAR_11 * 4;
}
