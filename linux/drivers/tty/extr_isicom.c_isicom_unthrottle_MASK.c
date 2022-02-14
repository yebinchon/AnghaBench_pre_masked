
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {int channel; struct isi_board* card; } ;
struct isi_board {int port_status; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct isi_port *VAR_1 = VAR_0->driver_data;
 struct isi_board *VAR_2 = VAR_1->card;

 if (FUNC_0(VAR_1, VAR_0->name, "isicom_unthrottle"))
  return;


 VAR_2->port_status |= (1 << VAR_1->channel);
 FUNC_1(VAR_2->port_status, VAR_2->base + 0x02);
}
