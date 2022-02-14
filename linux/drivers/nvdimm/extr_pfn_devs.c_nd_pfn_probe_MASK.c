
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nd_region {int dummy; } ;
struct nd_pfn_sb {int dummy; } ;
struct nd_pfn {int ndns; struct nd_pfn_sb* pfn_sb; } ;
struct TYPE_3__ {int parent; } ;
struct nd_namespace_common {int claim_class; TYPE_1__ dev; scalar_t__ force_raw; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,char*) ;
 char* FUNC_2 (struct device*) ;
 struct nd_pfn_sb* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int *) ;
 struct nd_pfn* FUNC_5 (struct nd_region*) ;
 struct device* FUNC_6 (struct nd_pfn*,struct nd_namespace_common*) ;
 int FUNC_7 (struct nd_pfn*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct device*) ;
 struct nd_pfn* FUNC_11 (struct device*) ;
 struct nd_region* FUNC_12 (int ) ;

int FUNC_13(struct device *VAR_4, struct nd_namespace_common *VAR_5)
{
 int VAR_6;
 struct nd_pfn *VAR_7;
 struct device *VAR_8;
 struct nd_pfn_sb *VAR_9;
 struct nd_region *VAR_10 = FUNC_12(VAR_5->dev.parent);

 if (VAR_5->force_raw)
  return -VAR_0;

 switch (VAR_5->claim_class) {
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 FUNC_8(&VAR_5->dev);
 VAR_7 = FUNC_5(VAR_10);
 VAR_8 = FUNC_6(VAR_7, VAR_5);
 FUNC_9(&VAR_5->dev);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = FUNC_3(VAR_4, sizeof(*VAR_9), VAR_2);
 VAR_7 = FUNC_11(VAR_8);
 VAR_7->pfn_sb = VAR_9;
 VAR_6 = FUNC_7(VAR_7, VAR_3);
 FUNC_1(VAR_4, "pfn: %s\n", VAR_6 == 0 ? FUNC_2(VAR_8) : "<none>");
 if (VAR_6 < 0) {
  FUNC_4(VAR_8, &VAR_7->ndns);
  FUNC_10(VAR_8);
 } else
  FUNC_0(VAR_8);

 return VAR_6;
}
