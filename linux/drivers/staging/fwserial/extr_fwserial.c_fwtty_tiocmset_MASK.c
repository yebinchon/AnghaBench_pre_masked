
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct fwtty_port* driver_data; } ;
struct fwtty_port {unsigned int mctrl; int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct fwtty_port*) ;
 int FUNC_1 (struct fwtty_port*,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3)
{
 struct fwtty_port *VAR_4 = VAR_1->driver_data;

 FUNC_1(VAR_4, "set: %x clear: %x\n", VAR_2, VAR_3);



 FUNC_2(&VAR_4->lock);
 VAR_4->mctrl &= ~(VAR_3 & VAR_0 & 0xffff);
 VAR_4->mctrl |= VAR_2 & VAR_0 & 0xffff;
 FUNC_0(VAR_4);
 FUNC_3(&VAR_4->lock);
 return 0;
}
