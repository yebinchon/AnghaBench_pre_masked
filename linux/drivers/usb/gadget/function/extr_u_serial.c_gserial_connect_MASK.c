
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct gserial {TYPE_2__* in; int (* disconnect ) (struct gserial*) ;int (* connect ) (struct gserial*) ;int port_line_coding; struct gs_port* ioport; TYPE_2__* out; } ;
struct TYPE_5__ {scalar_t__ count; } ;
struct gs_port {int port_lock; int port_num; TYPE_1__ port; int port_line_coding; struct gserial* port_usb; } ;
struct TYPE_7__ {struct gs_port* port; } ;
struct TYPE_6__ {struct gs_port* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct gs_port*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct gserial*) ;
 int FUNC_7 (struct gserial*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

int FUNC_10(struct gserial *VAR_5, u8 VAR_6)
{
 struct gs_port *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_6 >= VAR_3)
  return -VAR_2;

 VAR_7 = VAR_4[VAR_6].port;
 if (!VAR_7) {
  FUNC_3("serial line %d not allocated.\n", VAR_6);
  return -VAR_1;
 }
 if (VAR_7->port_usb) {
  FUNC_3("serial line %d is in use.\n", VAR_6);
  return -VAR_0;
 }


 VAR_9 = FUNC_9(VAR_5->in);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_5->in->driver_data = VAR_7;

 VAR_9 = FUNC_9(VAR_5->out);
 if (VAR_9 < 0)
  goto fail_out;
 VAR_5->out->driver_data = VAR_7;


 FUNC_4(&VAR_7->port_lock, VAR_8);
 VAR_5->ioport = VAR_7;
 VAR_7->port_usb = VAR_5;




 VAR_5->port_line_coding = VAR_7->port_line_coding;






 if (VAR_7->port.count) {
  FUNC_2("gserial_connect: start ttyGS%d\n", VAR_7->port_num);
  FUNC_1(VAR_7);
  if (VAR_5->connect)
   VAR_5->connect(VAR_5);
 } else {
  if (VAR_5->disconnect)
   VAR_5->disconnect(VAR_5);
 }

 VAR_9 = FUNC_0(VAR_6);
 FUNC_5(&VAR_7->port_lock, VAR_8);

 return VAR_9;

fail_out:
 FUNC_8(VAR_5->in);
 return VAR_9;
}
