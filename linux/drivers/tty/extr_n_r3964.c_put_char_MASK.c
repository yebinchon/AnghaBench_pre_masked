
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct r3964_info {unsigned char bcc; struct tty_struct* tty; } ;


 int FUNC_0 (struct tty_struct*,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct r3964_info *VAR_0, unsigned char VAR_1)
{
 struct tty_struct *VAR_2 = VAR_0->tty;

 FUNC_0(VAR_2, VAR_1);
 VAR_0->bcc ^= VAR_1;
}
