
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gs_port* driver_data; } ;
struct gs_port {int port_lock; scalar_t__ port_usb; int port_write_buf; int port_num; } ;


 int FUNC_0 (struct gs_port*) ;
 int FUNC_1 (int *,unsigned char const*,int) ;
 int FUNC_2 (char*,int ,struct tty_struct*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 struct gs_port *VAR_3 = VAR_0->driver_data;
 unsigned long VAR_4;

 FUNC_2("gs_write: ttyGS%d (%p) writing %d bytes\n",
   VAR_3->port_num, VAR_0, VAR_2);

 FUNC_3(&VAR_3->port_lock, VAR_4);
 if (VAR_2)
  VAR_2 = FUNC_1(&VAR_3->port_write_buf, VAR_1, VAR_2);

 if (VAR_3->port_usb)
  FUNC_0(VAR_3);
 FUNC_4(&VAR_3->port_lock, VAR_4);

 return VAR_2;
}
