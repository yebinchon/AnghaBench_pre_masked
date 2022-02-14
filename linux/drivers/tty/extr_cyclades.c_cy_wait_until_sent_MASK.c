
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {int xmit_fifo_size; int timeout; struct cyclades_card* card; } ;
struct cyclades_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cyclades_card*) ;
 int FUNC_1 (struct cyclades_port*,int ) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct cyclades_port*,int ,char*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_4, int VAR_5)
{
 struct cyclades_card *VAR_6;
 struct cyclades_port *VAR_7 = VAR_4->driver_data;
 unsigned long VAR_8;
 int VAR_9;

 if (FUNC_5(VAR_7, VAR_4->name, "cy_wait_until_sent"))
  return;

 if (VAR_7->xmit_fifo_size == 0)
  return;

 VAR_8 = VAR_3;
 VAR_9 = (VAR_7->timeout - VAR_2 / 50) / VAR_7->xmit_fifo_size;
 VAR_9 = VAR_9 / 5;
 if (VAR_9 <= 0)
  VAR_9 = 1;
 if (VAR_5 < 0)
  VAR_5 = 0;
 if (VAR_5)
  VAR_9 = FUNC_3(VAR_9, VAR_5);
 if (!VAR_5 || VAR_5 > 2 * VAR_7->timeout)
  VAR_5 = 2 * VAR_7->timeout;

 VAR_6 = VAR_7->card;
 if (!FUNC_0(VAR_6)) {
  while (FUNC_1(VAR_7, VAR_0) & VAR_1) {
   if (FUNC_4(FUNC_2(VAR_9)))
    break;
   if (VAR_5 && FUNC_6(VAR_3, VAR_8 +
     VAR_5))
    break;
  }
 }

 FUNC_4(FUNC_2(VAR_9 * 5));
}
