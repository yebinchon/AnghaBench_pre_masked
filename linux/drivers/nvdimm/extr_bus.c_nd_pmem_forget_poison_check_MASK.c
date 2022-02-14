
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nd_pfn {struct nd_namespace_common* ndns; } ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ end; } ;
struct nd_namespace_io {TYPE_2__ res; } ;
struct nd_namespace_common {int dev; } ;
struct TYPE_3__ {struct nd_namespace_common* ndns; } ;
struct nd_dax {TYPE_1__ nd_pfn; } ;
struct nd_cmd_clear_error {scalar_t__ address; scalar_t__ cleared; } ;
struct nd_btt {struct nd_namespace_common* ndns; } ;
struct device {int driver; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 struct nd_btt* FUNC_3 (struct device*) ;
 struct nd_dax* FUNC_4 (struct device*) ;
 struct nd_namespace_io* FUNC_5 (int *) ;
 struct nd_pfn* FUNC_6 (struct device*) ;
 struct nd_namespace_common* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1, void *VAR_2)
{
 struct nd_cmd_clear_error *VAR_3 =
  (struct nd_cmd_clear_error *)VAR_2;
 struct nd_btt *VAR_4 = FUNC_0(VAR_1) ? FUNC_3(VAR_1) : ((void*)0);
 struct nd_pfn *VAR_5 = FUNC_2(VAR_1) ? FUNC_6(VAR_1) : ((void*)0);
 struct nd_dax *VAR_6 = FUNC_1(VAR_1) ? FUNC_4(VAR_1) : ((void*)0);
 struct nd_namespace_common *VAR_7 = ((void*)0);
 struct nd_namespace_io *VAR_8;
 resource_size_t VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12, VAR_13, VAR_14;

 if (VAR_6 || !VAR_1->driver)
  return 0;

 VAR_11 = VAR_3->address;
 VAR_12 = VAR_3->address + VAR_3->cleared - 1;

 if (VAR_4 || VAR_5 || VAR_6) {
  if (VAR_4)
   VAR_7 = VAR_4->ndns;
  else if (VAR_5)
   VAR_7 = VAR_5->ndns;
  else if (VAR_6)
   VAR_7 = VAR_6->nd_pfn.ndns;

  if (!VAR_7)
   return 0;
 } else
  VAR_7 = FUNC_7(VAR_1);

 VAR_8 = FUNC_5(&VAR_7->dev);
 VAR_13 = VAR_8->res.start + VAR_9;
 VAR_14 = VAR_8->res.end - VAR_10;

 if ((VAR_13 >= VAR_11) && (VAR_14 <= VAR_12))
  return -VAR_0;

 return 0;

}
