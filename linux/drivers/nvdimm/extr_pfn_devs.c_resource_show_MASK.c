
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nd_pfn_sb {int start_pad; int dataoff; } ;
struct nd_pfn {struct nd_namespace_common* ndns; struct nd_pfn_sb* pfn_sb; } ;
struct TYPE_2__ {scalar_t__ start; } ;
struct nd_namespace_io {TYPE_1__ res; } ;
struct nd_namespace_common {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 struct nd_namespace_io* FUNC_5 (int *) ;
 struct nd_pfn* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct nd_pfn *VAR_4 = FUNC_6(VAR_1);
 ssize_t VAR_5;

 FUNC_2(VAR_1);
 if (VAR_1->driver) {
  struct nd_pfn_sb *VAR_6 = VAR_4->pfn_sb;
  u64 VAR_7 = FUNC_1(VAR_6->dataoff);
  struct nd_namespace_common *VAR_8 = VAR_4->ndns;
  u32 VAR_9 = FUNC_0(VAR_6->start_pad);
  struct nd_namespace_io *VAR_10 = FUNC_5(&VAR_8->dev);

  VAR_5 = FUNC_4(VAR_3, "%#llx\n", (unsigned long long) VAR_10->res.start
    + VAR_9 + VAR_7);
 } else {

  VAR_5 = -VAR_0;
 }
 FUNC_3(VAR_1);

 return VAR_5;
}
