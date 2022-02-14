
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* phys; } ;
struct mmp_overlay {TYPE_1__ addr; int path; } ;
struct mmp_addr {int * phys; } ;
struct lcd_regs {int g_0; int v_v0; int v_u0; int v_y0; } ;


 int FUNC_0 (TYPE_1__*,struct mmp_addr*,int) ;
 scalar_t__ FUNC_1 (struct mmp_overlay*) ;
 struct lcd_regs* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct mmp_overlay *VAR_0, struct mmp_addr *VAR_1)
{
 struct lcd_regs *VAR_2 = FUNC_2(VAR_0->path);


 FUNC_0(&VAR_0->addr, VAR_1, sizeof(struct mmp_addr));

 if (FUNC_1(VAR_0)) {
  FUNC_3(VAR_1->phys[0], &VAR_2->v_y0);
  FUNC_3(VAR_1->phys[1], &VAR_2->v_u0);
  FUNC_3(VAR_1->phys[2], &VAR_2->v_v0);
 } else
  FUNC_3(VAR_1->phys[0], &VAR_2->g_0);

 return VAR_0->addr.phys[0];
}
