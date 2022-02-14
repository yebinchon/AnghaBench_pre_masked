
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct wl3501_card {void* tx_buffer_tail; int tx_buffer_cnt; void* tx_buffer_head; } ;
typedef int ptr ;
typedef int next ;


 int FUNC_0 (struct wl3501_card*,void*,void**,int) ;
 int FUNC_1 (struct wl3501_card*,void*,void**,int) ;

__attribute__((used)) static void FUNC_2(struct wl3501_card *VAR_0, u16 VAR_1)
{

 if (!VAR_0->tx_buffer_head)
  VAR_0->tx_buffer_head = VAR_1;
 else
  FUNC_1(VAR_0, VAR_0->tx_buffer_tail,
      &VAR_1, sizeof(VAR_1));
 while (VAR_1) {
  u16 VAR_2;

  VAR_0->tx_buffer_cnt++;
  FUNC_0(VAR_0, VAR_1, &VAR_2, sizeof(VAR_2));
  VAR_0->tx_buffer_tail = VAR_1;
  VAR_1 = VAR_2;
 }
}
