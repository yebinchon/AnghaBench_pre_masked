
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_namespace_pmem {char* alt_name; } ;
struct nd_namespace_blk {char* alt_name; } ;
struct device {scalar_t__ driver; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ claim; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,size_t const,int ) ;
 char* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*,char*,char*) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 struct nd_namespace_blk* FUNC_8 (struct device*) ;
 struct nd_namespace_pmem* FUNC_9 (struct device*) ;
 TYPE_1__* FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_6, const char *VAR_7,
  const size_t VAR_8)
{
 char *VAR_9, *VAR_10, *VAR_11, **VAR_12;
 ssize_t VAR_13;

 if (FUNC_1(VAR_6)) {
  struct nd_namespace_pmem *VAR_14 = FUNC_9(VAR_6);

  VAR_12 = &VAR_14->alt_name;
 } else if (FUNC_0(VAR_6)) {
  struct nd_namespace_blk *VAR_15 = FUNC_8(VAR_6);

  VAR_12 = &VAR_15->alt_name;
 } else
  return -VAR_3;

 if (VAR_6->driver || FUNC_10(VAR_6)->claim)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_4);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_6(VAR_9);
 if (FUNC_7(VAR_10) + 1 > VAR_5) {
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_11 = FUNC_4(VAR_5, VAR_4);
 if (!VAR_11) {
  VAR_13 = -VAR_2;
  goto out;
 }
 FUNC_2(*VAR_12);
 *VAR_12 = VAR_11;
 FUNC_5(*VAR_12, "%s", VAR_10);
 VAR_13 = VAR_8;

out:
 FUNC_2(VAR_9);
 return VAR_13;
}
