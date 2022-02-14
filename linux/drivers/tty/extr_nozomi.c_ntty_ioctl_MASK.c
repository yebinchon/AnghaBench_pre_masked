
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct port* driver_data; } ;
struct async_icount {int dummy; } ;
struct port {int tty_wait; struct async_icount tty_icount; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int VAR_0 ;

 int FUNC_1 (struct port*,unsigned long,struct async_icount*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1,
        unsigned int VAR_2, unsigned long VAR_3)
{
 struct port *VAR_4 = VAR_1->driver_data;
 int VAR_5 = -VAR_0;

 FUNC_0("******** IOCTL, cmd: %d", VAR_2);

 switch (VAR_2) {
 case 128: {
  struct async_icount VAR_6 = VAR_4->tty_icount;

  VAR_5 = FUNC_2(VAR_4->tty_wait,
    FUNC_1(VAR_4, VAR_3, &VAR_6));
  break;
 }
 default:
  FUNC_0("ERR: 0x%08X, %d", VAR_2, VAR_2);
  break;
 }

 return VAR_5;
}
