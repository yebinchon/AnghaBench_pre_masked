
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int flags; TYPE_1__* ops; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* write ) (struct tty_struct*,unsigned char const*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct tty_struct*,unsigned char const*,size_t) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static ssize_t FUNC_3(struct tty_struct *VAR_2, struct file *VAR_3,
      const unsigned char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 >= VAR_5)
  return VAR_2->ops->write(VAR_2, VAR_4, VAR_5);
 FUNC_0(VAR_1, &VAR_2->flags);
 return -VAR_0;
}
