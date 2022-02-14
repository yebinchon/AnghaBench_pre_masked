
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {int dev; } ;
struct hl_ctx {int asid; int refcount; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct hl_device *VAR_1, struct hl_ctx *VAR_2)
{
 if (FUNC_1(&VAR_2->refcount, VAR_0) == 1)
  return;

 FUNC_0(VAR_1->dev,
  "Context %d closed or terminated but its CS are executing\n",
  VAR_2->asid);
}
