
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_cdc_line_coding {int dummy; } ;
struct gs_port {unsigned int port_num; struct usb_cdc_line_coding port_line_coding; int write_pool; int read_queue; int read_pool; int push; int close_wait; int drain_wait; int port_lock; int port; } ;
struct TYPE_2__ {int lock; struct gs_port* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct gs_port* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(unsigned VAR_5, struct usb_cdc_line_coding *VAR_6)
{
 struct gs_port *VAR_7;
 int VAR_8 = 0;

 FUNC_4(&VAR_4[VAR_5].lock);
 if (VAR_4[VAR_5].port) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_3(sizeof(struct gs_port), VAR_2);
 if (VAR_7 == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 FUNC_7(&VAR_7->port);
 FUNC_6(&VAR_7->port_lock);
 FUNC_2(&VAR_7->drain_wait);
 FUNC_2(&VAR_7->close_wait);

 FUNC_0(&VAR_7->push, VAR_3);

 FUNC_1(&VAR_7->read_pool);
 FUNC_1(&VAR_7->read_queue);
 FUNC_1(&VAR_7->write_pool);

 VAR_7->port_num = VAR_5;
 VAR_7->port_line_coding = *VAR_6;

 VAR_4[VAR_5].port = VAR_7;
out:
 FUNC_5(&VAR_4[VAR_5].lock);
 return VAR_8;
}
