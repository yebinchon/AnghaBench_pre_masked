
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct gbphy_device {int dummy; } ;
struct gb_tty {int disconnected; struct gb_tty* buffer; int write_fifo; int port; int minor; int mutex; int wioctl; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;


 int FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int FUNC_2 (struct gb_connection*) ;
 struct gb_tty* FUNC_3 (struct gbphy_device*) ;
 int VAR_0 ;
 int FUNC_4 (struct gbphy_device*) ;
 int FUNC_5 (struct gbphy_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct gb_tty*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct gb_tty*) ;
 int FUNC_11 (struct tty_struct*) ;
 int FUNC_12 (int *) ;
 struct tty_struct* FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct tty_struct*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct gbphy_device *VAR_1)
{
 struct gb_tty *VAR_2 = FUNC_3(VAR_1);
 struct gb_connection *VAR_3 = VAR_2->connection;
 struct tty_struct *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5)
  FUNC_4(VAR_1);

 FUNC_8(&VAR_2->mutex);
 VAR_2->disconnected = 1;

 FUNC_16(&VAR_2->wioctl);
 FUNC_9(&VAR_2->mutex);

 VAR_4 = FUNC_13(&VAR_2->port);
 if (VAR_4) {
  FUNC_15(VAR_4);
  FUNC_11(VAR_4);
 }

 FUNC_2(VAR_3);
 FUNC_14(VAR_0, VAR_2->minor);



 FUNC_1(VAR_3);
 FUNC_12(&VAR_2->port);
 FUNC_0(VAR_3);
 FUNC_10(VAR_2);
 FUNC_6(&VAR_2->write_fifo);
 FUNC_7(VAR_2->buffer);
 FUNC_7(VAR_2);
}
