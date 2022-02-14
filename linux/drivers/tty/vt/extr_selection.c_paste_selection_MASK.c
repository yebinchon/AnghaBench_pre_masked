
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int port; int paste_wait; } ;
struct tty_struct {struct vc_data* driver_data; } ;
struct tty_ldisc {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct tty_ldisc*) ;
 unsigned int FUNC_12 (struct tty_ldisc*,scalar_t__,int *,unsigned int) ;
 struct tty_ldisc* FUNC_13 (struct tty_struct*) ;
 scalar_t__ FUNC_14 (struct tty_struct*) ;
 int VAR_6 ;

int FUNC_15(struct tty_struct *VAR_7)
{
 struct vc_data *VAR_8 = VAR_7->driver_data;
 int VAR_9 = 0;
 unsigned int VAR_10;
 struct tty_ldisc *VAR_11;
 FUNC_0(VAR_6, VAR_3);

 FUNC_3();
 FUNC_5();
 FUNC_4();

 VAR_11 = FUNC_13(VAR_7);
 if (!VAR_11)
  return -VAR_0;
 FUNC_9(&VAR_8->port);

 FUNC_2(&VAR_8->paste_wait, &VAR_6);
 while (VAR_4 && VAR_5 > VAR_9) {
  FUNC_8(VAR_1);
  if (FUNC_14(VAR_7)) {
   FUNC_7();
   continue;
  }
  FUNC_1(VAR_2);
  VAR_10 = VAR_5 - VAR_9;
  VAR_10 = FUNC_12(VAR_11, VAR_4 + VAR_9, ((void*)0),
           VAR_10);
  VAR_9 += VAR_10;
 }
 FUNC_6(&VAR_8->paste_wait, &VAR_6);
 FUNC_1(VAR_2);

 FUNC_10(&VAR_8->port);
 FUNC_11(VAR_11);
 return 0;
}
