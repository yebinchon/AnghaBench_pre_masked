
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_2__ {int parent; } ;
struct nd_namespace_common {TYPE_1__ dev; int rw_bytes; } ;
struct nd_namespace_io {int addr; struct resource res; int bb; int size; struct nd_namespace_common common; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct device*,char*,struct resource*) ;
 scalar_t__ FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int *,struct resource*) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct device *VAR_4, struct nd_namespace_io *VAR_5)
{
 struct resource *VAR_6 = &VAR_5->res;
 struct nd_namespace_common *VAR_7 = &VAR_5->common;

 VAR_5->size = FUNC_7(VAR_6);
 if (!FUNC_5(VAR_4, VAR_6->start, FUNC_7(VAR_6),
    FUNC_1(&VAR_7->dev))) {
  FUNC_2(VAR_4, "could not reserve region %pR\n", VAR_6);
  return -VAR_1;
 }

 VAR_7->rw_bytes = VAR_3;
 if (FUNC_3(VAR_4, &VAR_5->bb))
  return -VAR_2;
 FUNC_6(FUNC_8(VAR_7->dev.parent), &VAR_5->bb,
   &VAR_5->res);

 VAR_5->addr = FUNC_4(VAR_4, VAR_6->start, FUNC_7(VAR_6),
   VAR_0);

 return FUNC_0(VAR_5->addr);
}
