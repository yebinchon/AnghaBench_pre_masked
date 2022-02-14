
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {scalar_t__ claim_class; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*) ;
 struct nd_namespace_common* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
  struct device_attribute *VAR_6, char *VAR_7)
{
 struct nd_namespace_common *VAR_8 = FUNC_3(VAR_5);
 ssize_t VAR_9;

 FUNC_0(VAR_5);
 if (VAR_8->claim_class == VAR_3)
  VAR_9 = FUNC_2(VAR_7, "\n");
 else if ((VAR_8->claim_class == VAR_0) ||
   (VAR_8->claim_class == VAR_1))
  VAR_9 = FUNC_2(VAR_7, "btt\n");
 else if (VAR_8->claim_class == VAR_4)
  VAR_9 = FUNC_2(VAR_7, "pfn\n");
 else if (VAR_8->claim_class == VAR_2)
  VAR_9 = FUNC_2(VAR_7, "dax\n");
 else
  VAR_9 = FUNC_2(VAR_7, "<unknown>\n");
 FUNC_1(VAR_5);

 return VAR_9;
}
