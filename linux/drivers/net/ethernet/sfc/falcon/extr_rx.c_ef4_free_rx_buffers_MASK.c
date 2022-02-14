
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_rx_queue {int dummy; } ;
struct ef4_rx_buffer {int * page; } ;


 struct ef4_rx_buffer* FUNC_0 (struct ef4_rx_queue*,struct ef4_rx_buffer*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ef4_rx_queue *VAR_0,
    struct ef4_rx_buffer *VAR_1,
    unsigned int VAR_2)
{
 do {
  if (VAR_1->page) {
   FUNC_1(VAR_1->page);
   VAR_1->page = ((void*)0);
  }
  VAR_1 = FUNC_0(VAR_0, VAR_1);
 } while (--VAR_2);
}
