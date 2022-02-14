
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* put_char ) (struct tty_struct*,unsigned char) ;int (* write ) (struct tty_struct*,unsigned char*,int) ;} ;


 int FUNC_0 (struct tty_struct*,unsigned char) ;
 int FUNC_1 (struct tty_struct*,unsigned char*,int) ;

int FUNC_2(struct tty_struct *VAR_0, unsigned char VAR_1)
{
 if (VAR_0->ops->put_char)
  return VAR_0->ops->put_char(VAR_0, VAR_1);
 return VAR_0->ops->write(VAR_0, &VAR_1, 1);
}
