
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct fb_info {TYPE_1__ fix; TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_1)
{
 FUNC_0(&VAR_1->var, 0, sizeof(VAR_1->var));
 FUNC_0(&VAR_1->fix, 0, sizeof(VAR_1->fix));
 FUNC_1(VAR_1->fix.id, VAR_0, sizeof(VAR_1->fix.id));
}
