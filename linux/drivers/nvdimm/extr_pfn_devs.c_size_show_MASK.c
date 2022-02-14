
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef unsigned long long u32 ;
struct nd_pfn_sb {int end_trunc; int start_pad; int dataoff; } ;
struct nd_pfn {struct nd_namespace_common* ndns; struct nd_pfn_sb* pfn_sb; } ;
struct nd_namespace_io {int res; } ;
struct nd_namespace_common {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,unsigned long long) ;
 struct nd_namespace_io* FUNC_6 (int *) ;
 struct nd_pfn* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct nd_pfn *VAR_4 = FUNC_7(VAR_1);
 ssize_t VAR_5;

 FUNC_2(VAR_1);
 if (VAR_1->driver) {
  struct nd_pfn_sb *VAR_6 = VAR_4->pfn_sb;
  u64 VAR_7 = FUNC_1(VAR_6->dataoff);
  struct nd_namespace_common *VAR_8 = VAR_4->ndns;
  u32 VAR_9 = FUNC_0(VAR_6->start_pad);
  u32 VAR_10 = FUNC_0(VAR_6->end_trunc);
  struct nd_namespace_io *VAR_11 = FUNC_6(&VAR_8->dev);

  VAR_5 = FUNC_5(VAR_3, "%llu\n", (unsigned long long)
    FUNC_4(&VAR_11->res) - VAR_9
    - VAR_10 - VAR_7);
 } else {

  VAR_5 = -VAR_0;
 }
 FUNC_3(VAR_1);

 return VAR_5;
}
