
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct nd_region {int id; } ;
struct nd_namespace_pmem {int id; } ;
struct TYPE_6__ {int parent; } ;
struct nd_namespace_common {TYPE_1__ dev; scalar_t__ claim; } ;
struct nd_namespace_blk {int id; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,int,...) ;
 struct nd_namespace_blk* FUNC_5 (TYPE_1__*) ;
 struct nd_namespace_pmem* FUNC_6 (TYPE_1__*) ;
 struct nd_region* FUNC_7 (int ) ;

const char *FUNC_8(struct nd_namespace_common *VAR_0,
  char *VAR_1)
{
 struct nd_region *VAR_2 = FUNC_7(VAR_0->dev.parent);
 const char *VAR_3 = ((void*)0);

 if (VAR_0->claim && FUNC_3(VAR_0->claim))
  VAR_3 = "s";

 if (FUNC_2(&VAR_0->dev) || FUNC_1(&VAR_0->dev)) {
  int VAR_4 = 0;

  if (FUNC_2(&VAR_0->dev)) {
   struct nd_namespace_pmem *VAR_5;

   VAR_5 = FUNC_6(&VAR_0->dev);
   VAR_4 = VAR_5->id;
  }

  if (VAR_4)
   FUNC_4(VAR_1, "pmem%d.%d%s", VAR_2->id, VAR_4,
     VAR_3 ? VAR_3 : "");
  else
   FUNC_4(VAR_1, "pmem%d%s", VAR_2->id,
     VAR_3 ? VAR_3 : "");
 } else if (FUNC_0(&VAR_0->dev)) {
  struct nd_namespace_blk *VAR_6;

  VAR_6 = FUNC_5(&VAR_0->dev);
  FUNC_4(VAR_1, "ndblk%d.%d%s", VAR_2->id, VAR_6->id,
    VAR_3 ? VAR_3 : "");
 } else {
  return ((void*)0);
 }

 return VAR_1;
}
