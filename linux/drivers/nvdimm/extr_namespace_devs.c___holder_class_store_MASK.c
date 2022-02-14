
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {scalar_t__ claim_class; scalar_t__ claim; } ;
struct device {scalar_t__ driver; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 struct nd_namespace_common* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5, const char *VAR_6)
{
 struct nd_namespace_common *VAR_7 = FUNC_2(VAR_5);

 if (VAR_5->driver || VAR_7->claim)
  return -VAR_0;

 if (FUNC_1(VAR_6, "btt"))
  VAR_7->claim_class = FUNC_0(VAR_5);
 else if (FUNC_1(VAR_6, "pfn"))
  VAR_7->claim_class = VAR_4;
 else if (FUNC_1(VAR_6, "dax"))
  VAR_7->claim_class = VAR_2;
 else if (FUNC_1(VAR_6, ""))
  VAR_7->claim_class = VAR_3;
 else
  return -VAR_1;


 if (VAR_7->claim_class < 0)
  return VAR_7->claim_class;

 return 0;
}
