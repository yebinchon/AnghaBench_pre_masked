
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1)
{
 struct acm *VAR_2 = VAR_1->driver_data;

 FUNC_0(VAR_0, &VAR_2->flags);
}
