
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bus; } ;
struct bttv_sub_driver {TYPE_1__ drv; int wanted; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,char*,char*) ;

int FUNC_2(struct bttv_sub_driver *VAR_1, char *VAR_2)
{
 VAR_1->drv.bus = &VAR_0;
 FUNC_1(VAR_1->wanted,sizeof(VAR_1->wanted),"%s",VAR_2);
 return FUNC_0(&VAR_1->drv);
}
