
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; } ;
struct fwtty_port {unsigned int mctrl; unsigned int mstatus; int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct fwtty_port*,char*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1)
{
 struct fwtty_port *VAR_2 = VAR_1->driver_data;
 unsigned int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = (VAR_2->mctrl & VAR_0) | (VAR_2->mstatus & ~VAR_0);
 FUNC_2(&VAR_2->lock);

 FUNC_0(VAR_2, "%x\n", VAR_3);

 return VAR_3;
}
