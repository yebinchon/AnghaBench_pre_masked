
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct mips_ejtag_fdc_tty_port* driver_data; } ;
struct TYPE_2__ {scalar_t__ xmit_buf; } ;
struct mips_ejtag_fdc_tty_port {int xmit_cnt; scalar_t__ xmit_head; int xmit_lock; int xmit_empty; TYPE_1__ port; struct mips_ejtag_fdc_tty* driver; } ;
struct mips_ejtag_fdc_tty {scalar_t__ xmit_size; int waitqueue; int xmit_total; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (scalar_t__,unsigned char const*,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_0,
        const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 struct mips_ejtag_fdc_tty_port *VAR_5 = VAR_0->driver_data;
 struct mips_ejtag_fdc_tty *VAR_6 = VAR_5->driver;
 FUNC_4(&VAR_5->xmit_lock);

 VAR_2 = FUNC_2(VAR_2, (int)(VAR_6->xmit_size - VAR_5->xmit_cnt));
 FUNC_0(VAR_2, &VAR_6->xmit_total);
 VAR_5->xmit_cnt += VAR_2;

 for (VAR_3 = VAR_2; VAR_3; VAR_3 -= VAR_4) {
  VAR_4 = FUNC_2(VAR_3, (int)(VAR_6->xmit_size - VAR_5->xmit_head));
  FUNC_1(VAR_5->port.xmit_buf + VAR_5->xmit_head, VAR_1, VAR_4);
  VAR_5->xmit_head += VAR_4;
  if (VAR_5->xmit_head >= VAR_6->xmit_size)
   VAR_5->xmit_head -= VAR_6->xmit_size;
  VAR_1 += VAR_4;
 }
 VAR_3 = VAR_5->xmit_cnt;

 if (VAR_3)
  FUNC_3(&VAR_5->xmit_empty);
 FUNC_5(&VAR_5->xmit_lock);


 if (VAR_2)
  FUNC_6(&VAR_6->waitqueue);
 return VAR_2;
}
