
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int magic; struct tty_struct* write_buf; int dev; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_0)
{
 FUNC_2(VAR_0);
 FUNC_1(VAR_0->dev);
 FUNC_0(VAR_0->write_buf);
 VAR_0->magic = 0xDEADDEAD;
 FUNC_0(VAR_0);
}
