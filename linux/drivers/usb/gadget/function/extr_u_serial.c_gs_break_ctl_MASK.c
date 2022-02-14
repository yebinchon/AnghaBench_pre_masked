
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gserial {int (* send_break ) (struct gserial*,int) ;} ;
struct gs_port {int port_lock; struct gserial* port_usb; int port_num; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gserial*,int) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0, int VAR_1)
{
 struct gs_port *VAR_2 = VAR_0->driver_data;
 int VAR_3 = 0;
 struct gserial *VAR_4;

 FUNC_0("gs_break_ctl: ttyGS%d, send break (%d) \n",
   VAR_2->port_num, VAR_1);

 FUNC_1(&VAR_2->port_lock);
 VAR_4 = VAR_2->port_usb;
 if (VAR_4 && VAR_4->send_break)
  VAR_3 = VAR_4->send_break(VAR_4, VAR_1);
 FUNC_2(&VAR_2->port_lock);

 return VAR_3;
}
