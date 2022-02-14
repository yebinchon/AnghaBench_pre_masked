
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acm*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_2)
{
 struct acm *VAR_3 = VAR_2->driver_data;

 FUNC_1(VAR_0, &VAR_3->flags);


 FUNC_2();

 FUNC_0(VAR_3, VAR_1);
}
