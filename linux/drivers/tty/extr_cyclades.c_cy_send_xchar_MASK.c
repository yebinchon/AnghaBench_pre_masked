
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct cyclades_port* driver_data; } ;
struct cyclades_port {char x_char; int line; struct cyclades_card* card; } ;
struct cyclades_card {int first_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (struct tty_struct*) ;
 char FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct cyclades_card*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct cyclades_card*,int,int ,long) ;
 scalar_t__ FUNC_5 (struct cyclades_port*,int ,char*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_2, char VAR_3)
{
 struct cyclades_port *VAR_4 = VAR_2->driver_data;
 struct cyclades_card *VAR_5;
 int VAR_6;

 if (FUNC_5(VAR_4, VAR_2->name, "cy_send_xchar"))
  return;

 VAR_4->x_char = VAR_3;

 if (VAR_3)
  FUNC_3(VAR_2);

 VAR_5 = VAR_4->card;
 VAR_6 = VAR_4->line - VAR_5->first_line;

 if (FUNC_2(VAR_5)) {
  if (VAR_3 == FUNC_1(VAR_2))
   FUNC_4(VAR_5, VAR_6, VAR_0, 0L);
  else if (VAR_3 == FUNC_0(VAR_2))
   FUNC_4(VAR_5, VAR_6, VAR_1, 0L);
 }
}
