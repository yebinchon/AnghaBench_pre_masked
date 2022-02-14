
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_tx_queue {scalar_t__ insert_count; scalar_t__ write_count; } ;
struct ef4_tx_buffer {int dummy; } ;


 struct ef4_tx_buffer* FUNC_0 (struct ef4_tx_queue*) ;
 int FUNC_1 (struct ef4_tx_queue*,struct ef4_tx_buffer*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ef4_tx_queue *VAR_0)
{
 struct ef4_tx_buffer *VAR_1;


 while (VAR_0->insert_count != VAR_0->write_count) {
  --VAR_0->insert_count;
  VAR_1 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_1, ((void*)0), ((void*)0));
 }
}
