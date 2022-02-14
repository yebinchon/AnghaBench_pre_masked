
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct delta_dev {int dev; } ;
struct TYPE_2__ {int m2m_ctx; } ;
struct delta_ctx {int name; scalar_t__ aborting; TYPE_1__ fh; struct delta_dev* dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct delta_ctx *VAR_1 = VAR_0;
 struct delta_dev *VAR_2 = VAR_1->dev;
 int VAR_3 = FUNC_2(VAR_1->fh.m2m_ctx);

 if (!VAR_3) {
  FUNC_0(VAR_2->dev, "%s not ready: not enough video buffers.\n",
   VAR_1->name);
  return 0;
 }

 if (!FUNC_1(VAR_1->fh.m2m_ctx)) {
  FUNC_0(VAR_2->dev, "%s not ready: not enough video capture buffers.\n",
   VAR_1->name);
  return 0;
 }

 if (VAR_1->aborting) {
  FUNC_0(VAR_2->dev, "%s job not ready: aborting\n", VAR_1->name);
  return 0;
 }

 FUNC_0(VAR_2->dev, "%s job ready\n", VAR_1->name);

 return 1;
}
