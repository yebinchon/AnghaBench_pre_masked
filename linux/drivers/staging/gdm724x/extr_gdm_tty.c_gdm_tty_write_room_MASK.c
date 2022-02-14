
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gdm* driver_data; } ;
struct gdm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gdm*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_2)
{
 struct gdm *VAR_3 = VAR_2->driver_data;

 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return VAR_1;
}
