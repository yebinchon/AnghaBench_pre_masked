
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct r3964_info {size_t tx_position; int flags; scalar_t__ bcc; int tmr; int state; struct r3964_block_header* tx_first; struct tty_struct* tty; } ;
struct r3964_block_header {size_t length; scalar_t__* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,struct r3964_block_header*,int,size_t) ;
 int FUNC_1 (struct r3964_info*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct r3964_info*,scalar_t__) ;
 int FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_5(struct r3964_info *VAR_6)
{
 struct tty_struct *VAR_7 = VAR_6->tty;
 struct r3964_block_header *VAR_8 = VAR_6->tx_first;
 int VAR_9 = 0;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0)) {
  return;
 }

 VAR_9 = FUNC_4(VAR_7);

 FUNC_0("transmit_block %p, room %d, length %d",
   VAR_8, VAR_9, VAR_8->length);

 while (VAR_6->tx_position < VAR_8->length) {
  if (VAR_9 < 2)
   break;

  if (VAR_8->data[VAR_6->tx_position] == VAR_0) {

   FUNC_3(VAR_6, VAR_0);
  }
  FUNC_3(VAR_6, VAR_8->data[VAR_6->tx_position++]);

  VAR_9--;
 }

 if ((VAR_6->tx_position == VAR_8->length) && (VAR_9 >= 3)) {
  FUNC_3(VAR_6, VAR_0);
  FUNC_3(VAR_6, VAR_1);
  if (VAR_6->flags & VAR_2) {
   FUNC_3(VAR_6, VAR_6->bcc);
  }
  VAR_6->state = VAR_4;
  FUNC_2(&VAR_6->tmr, VAR_5 + VAR_3);
 }
 FUNC_1(VAR_6);
}
