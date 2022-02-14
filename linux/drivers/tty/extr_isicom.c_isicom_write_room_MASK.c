
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {int xmit_cnt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1)
{
 struct isi_port *VAR_2 = VAR_1->driver_data;
 int VAR_3;

 if (FUNC_0(VAR_2, VAR_1->name, "isicom_write_room"))
  return 0;

 VAR_3 = VAR_0 - VAR_2->xmit_cnt - 1;
 if (VAR_3 < 0)
  VAR_3 = 0;
 return VAR_3;
}
