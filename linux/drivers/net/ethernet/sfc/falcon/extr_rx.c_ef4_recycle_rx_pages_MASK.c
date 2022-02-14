
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_rx_queue {int dummy; } ;
struct ef4_rx_buffer {int dummy; } ;
struct ef4_channel {int dummy; } ;


 struct ef4_rx_queue* FUNC_0 (struct ef4_channel*) ;
 int FUNC_1 (struct ef4_channel*,struct ef4_rx_buffer*) ;
 struct ef4_rx_buffer* FUNC_2 (struct ef4_rx_queue*,struct ef4_rx_buffer*) ;

__attribute__((used)) static void FUNC_3(struct ef4_channel *VAR_0,
     struct ef4_rx_buffer *VAR_1,
     unsigned int VAR_2)
{
 struct ef4_rx_queue *VAR_3 = FUNC_0(VAR_0);

 do {
  FUNC_1(VAR_0, VAR_1);
  VAR_1 = FUNC_2(VAR_3, VAR_1);
 } while (--VAR_2);
}
