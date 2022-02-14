
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct fwtty_port {int mstatus; } ;


 int VAR_0 ;
 int FUNC_0 (struct fwtty_port*,char*,int) ;
 struct fwtty_port* VAR_1 ;
 struct fwtty_port* FUNC_1 (struct tty_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct tty_port *VAR_2)
{
 struct fwtty_port *VAR_3 = FUNC_1(VAR_2, VAR_3);
 int VAR_4;

 VAR_4 = (VAR_3->mstatus & VAR_0);

 FUNC_0(VAR_3, "%d\n", VAR_4);

 return VAR_4;
}
