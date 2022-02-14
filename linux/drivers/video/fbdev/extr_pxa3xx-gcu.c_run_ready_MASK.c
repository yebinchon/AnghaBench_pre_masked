
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_gcu_shared {int* buffer; int hw_running; unsigned int buffer_phys; } ;
struct pxa3xx_gcu_priv {int * ready_last; struct pxa3xx_gcu_batch* ready; struct pxa3xx_gcu_batch* running; struct pxa3xx_gcu_shared* shared; } ;
struct pxa3xx_gcu_batch {int phys; struct pxa3xx_gcu_batch* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pxa3xx_gcu_priv*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct pxa3xx_gcu_priv *VAR_3)
{
 unsigned int VAR_4 = 0;
 struct pxa3xx_gcu_shared *VAR_5 = VAR_3->shared;
 struct pxa3xx_gcu_batch *VAR_6 = VAR_3->ready;

 FUNC_1("Start");

 FUNC_0(!VAR_6);

 VAR_5->buffer[VAR_4++] = 0x05000000;

 while (VAR_6) {
  VAR_5->buffer[VAR_4++] = 0x00000001;
  VAR_5->buffer[VAR_4++] = VAR_6->phys;
  VAR_6 = VAR_6->next;
 }

 VAR_5->buffer[VAR_4++] = 0x05000000;
 VAR_3->running = VAR_3->ready;
 VAR_3->ready = VAR_3->ready_last = ((void*)0);
 FUNC_2(VAR_3, VAR_1, 0);
 VAR_5->hw_running = 1;


 FUNC_2(VAR_3, VAR_0, VAR_5->buffer_phys);


 FUNC_2(VAR_3, VAR_2, VAR_5->buffer_phys + VAR_4 * 4);


 FUNC_2(VAR_3, VAR_1, ((VAR_4 + 63) & ~63) * 4);
}
