
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; struct isi_board* card; } ;
struct isi_board {int card_lock; } ;


 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_0)
{
 struct isi_port *VAR_1 = VAR_0->driver_data;
 struct isi_board *VAR_2 = VAR_1->card;
 unsigned long VAR_3;

 if (FUNC_0(VAR_1, VAR_0->name, "isicom_flush_buffer"))
  return;

 FUNC_1(&VAR_2->card_lock, VAR_3);
 VAR_1->xmit_cnt = VAR_1->xmit_head = VAR_1->xmit_tail = 0;
 FUNC_2(&VAR_2->card_lock, VAR_3);

 FUNC_3(VAR_0);
}
