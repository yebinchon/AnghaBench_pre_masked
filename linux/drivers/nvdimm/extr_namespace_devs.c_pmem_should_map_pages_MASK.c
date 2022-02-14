
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_region {int flags; } ;
struct TYPE_2__ {int start; } ;
struct nd_namespace_io {TYPE_1__ res; } ;
struct nd_namespace_common {scalar_t__ force_raw; } ;
struct device {int parent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int *) ;
 struct nd_namespace_io* FUNC_6 (struct device*) ;
 struct nd_region* FUNC_7 (int ) ;
 struct nd_namespace_common* FUNC_8 (struct device*) ;

bool FUNC_9(struct device *VAR_7)
{
 struct nd_region *VAR_8 = FUNC_7(VAR_7->parent);
 struct nd_namespace_common *VAR_9 = FUNC_8(VAR_7);
 struct nd_namespace_io *VAR_10;

 if (!FUNC_0(VAR_1))
  return 0;

 if (!FUNC_5(VAR_5, &VAR_8->flags))
  return 0;

 if (FUNC_2(VAR_7) || FUNC_1(VAR_7))
  return 0;

 if (VAR_9->force_raw)
  return 0;

 VAR_10 = FUNC_6(VAR_7);
 if (FUNC_3(VAR_10->res.start, FUNC_4(&VAR_10->res),
    VAR_2,
    VAR_3) == VAR_6)
  return 0;

 return VAR_0 == VAR_4;
}
