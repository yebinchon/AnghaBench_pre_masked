
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int ns_current; } ;
struct nd_region {struct nd_mapping* mapping; scalar_t__ ndr_mappings; struct nd_interleave_set* nd_set; } ;
struct nd_namespace_index {int dummy; } ;
struct nd_mapping {int dummy; } ;
struct nd_interleave_set {int cookie1; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct nd_region*,struct nd_namespace_index*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (char*,char*,int ) ;
 struct nd_namespace_index* FUNC_7 (struct nvdimm_drvdata*,int ) ;
 struct nd_region* FUNC_8 (struct device*) ;
 struct nvdimm_drvdata* FUNC_9 (struct nd_mapping*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct nd_region *VAR_4 = FUNC_8(VAR_1);
 struct nd_interleave_set *VAR_5 = VAR_4->nd_set;
 ssize_t VAR_6 = 0;

 if (FUNC_0(VAR_1) && VAR_5)
                                                   ;
 else
  return -VAR_0;







 FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 FUNC_10(VAR_1);
 if (VAR_4->ndr_mappings) {
  struct nd_mapping *VAR_7 = &VAR_4->mapping[0];
  struct nvdimm_drvdata *VAR_8 = FUNC_9(VAR_7);

  if (VAR_8) {
   struct nd_namespace_index *VAR_9;

   VAR_9 = FUNC_7(VAR_8, VAR_8->ns_current);
   VAR_6 = FUNC_6(VAR_3, "%#llx\n",
     FUNC_3(VAR_4,
      VAR_9));
  }
 }
 FUNC_5(VAR_1);
 FUNC_2(VAR_1);

 if (VAR_6)
  return VAR_6;
 return FUNC_6(VAR_3, "%#llx\n", VAR_5->cookie1);
}
