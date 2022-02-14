
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty3270* driver_data; } ;
struct tty3270 {int kbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned long) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2, unsigned int VAR_3,
    unsigned long VAR_4)
{
 struct tty3270 *VAR_5;

 VAR_5 = VAR_2->driver_data;
 if (!VAR_5)
  return -VAR_1;
 if (FUNC_1(VAR_2))
  return -VAR_0;
 return FUNC_0(VAR_5->kbd, VAR_3, VAR_4);
}
