
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ser_device* disc_data; } ;
struct ser_device {int node; int tty; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_3)
{
 struct ser_device *VAR_4 = VAR_3->disc_data;

 FUNC_4(VAR_4->tty);

 FUNC_2(&VAR_0);
 FUNC_0(&VAR_4->node, &VAR_1);
 FUNC_3(&VAR_0);
 FUNC_1(&VAR_2);
}
