
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int tty_drivers; int num; int minor_start; int major; scalar_t__ refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct tty_driver *VAR_2)
{





 FUNC_4(FUNC_0(VAR_2->major, VAR_2->minor_start),
    VAR_2->num);
 FUNC_2(&VAR_1);
 FUNC_1(&VAR_2->tty_drivers);
 FUNC_3(&VAR_1);
 return 0;
}
