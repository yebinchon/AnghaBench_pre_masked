
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; } ;
struct fwtty_port {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct fwtty_port*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, unsigned int VAR_2,
         unsigned long VAR_3)
{
 struct fwtty_port *VAR_4 = VAR_1->driver_data;
 int VAR_5;

 switch (VAR_2) {
 case 128:
  VAR_5 = FUNC_0(VAR_4, VAR_3);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
