
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; struct mxser_port* driver_data; } ;
struct mxser_port {int port; int ioaddr; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mxser_port* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,struct tty_struct*,struct file*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_4, struct file *VAR_5)
{
 struct mxser_port *VAR_6;
 int VAR_7;

 VAR_7 = VAR_4->index;
 if (VAR_7 == VAR_1)
  return 0;
 VAR_6 = &VAR_3[VAR_7 / VAR_2].ports[VAR_7 % VAR_2];
 if (!VAR_6->ioaddr)
  return -VAR_0;

 VAR_4->driver_data = VAR_6;
 return FUNC_0(&VAR_6->port, VAR_4, VAR_5);
}
