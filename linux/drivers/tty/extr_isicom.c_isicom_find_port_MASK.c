
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; int name; } ;
struct tty_port {int dummy; } ;
struct isi_port {struct tty_port port; } ;
struct isi_board {int status; unsigned int port_count; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 struct isi_board* VAR_1 ;
 struct isi_port* VAR_2 ;
 scalar_t__ FUNC_1 (struct isi_port*,int ,char*) ;

__attribute__((used)) static struct tty_port *FUNC_2(struct tty_struct *VAR_3)
{
 struct isi_port *VAR_4;
 struct isi_board *VAR_5;
 unsigned int VAR_6;
 int VAR_7 = VAR_3->index;

 VAR_6 = FUNC_0(VAR_7);
 VAR_5 = &VAR_1[VAR_6];

 if (!(VAR_5->status & VAR_0))
  return ((void*)0);


 if (VAR_7 > ((VAR_6 * 16) + VAR_5->port_count - 1))
  return ((void*)0);

 VAR_4 = &VAR_2[VAR_7];
 if (FUNC_1(VAR_4, VAR_3->name, "isicom_open"))
  return ((void*)0);

 return &VAR_4->port;
}
