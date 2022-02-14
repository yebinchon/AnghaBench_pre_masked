
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int writesize; } ;


 scalar_t__ FUNC_0 (struct acm*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_0)
{
 struct acm *VAR_1 = VAR_0->driver_data;




 return FUNC_0(VAR_1) ? VAR_1->writesize : 0;
}
