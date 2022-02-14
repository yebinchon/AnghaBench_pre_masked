
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct tty_struct {int dummy; } ;
struct fwtty_port {int port; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct fwtty_port* FUNC_2 (struct work_struct*,int ) ;
 int FUNC_3 (struct tty_struct*) ;
 struct tty_struct* FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_1)
{
 struct fwtty_port *VAR_2 = FUNC_2(VAR_1, VAR_0);
 struct tty_struct *VAR_3;

 FUNC_1(FUNC_0(50));

 VAR_3 = FUNC_4(&VAR_2->port);
 if (VAR_3)
  FUNC_5(VAR_3);
 FUNC_3(VAR_3);
}
