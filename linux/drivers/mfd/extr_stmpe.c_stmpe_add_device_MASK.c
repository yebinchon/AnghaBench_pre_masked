
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmpe {int domain; TYPE_1__* pdata; int dev; } ;
struct mfd_cell {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ,int ,struct mfd_cell const*,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_0, const struct mfd_cell *VAR_1)
{
 return FUNC_0(VAR_0->dev, VAR_0->pdata->id, VAR_1, 1,
          ((void*)0), 0, VAR_0->domain);
}
