
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct isi_port* driver_data; } ;
struct isi_port {int status; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct isi_port*,int ,char*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1)
{
 struct isi_port *VAR_2 = VAR_1->driver_data;

 if (FUNC_0(VAR_2, VAR_1->name, "isicom_start"))
  return;



 VAR_2->status |= VAR_0;
}
