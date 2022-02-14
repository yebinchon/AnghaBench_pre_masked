
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {int port; } ;


 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct isi_port *VAR_1 = VAR_0->driver_data;

 if (FUNC_0(VAR_1, VAR_0->name, "isicom_hangup"))
  return;
 FUNC_1(&VAR_1->port);
}
