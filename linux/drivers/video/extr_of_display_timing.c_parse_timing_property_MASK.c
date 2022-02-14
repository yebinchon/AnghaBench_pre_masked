
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timing_entry {int min; int typ; int max; } ;
struct property {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct property* FUNC_0 (struct device_node const*,char const*,int*) ;
 int FUNC_1 (struct device_node const*,char const*,int *) ;
 int FUNC_2 (struct device_node const*,char const*,int *,int) ;
 int FUNC_3 (char*,struct device_node const*,char const*) ;

__attribute__((used)) static int FUNC_4(const struct device_node *VAR_1, const char *VAR_2,
     struct timing_entry *VAR_3)
{
 struct property *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_5);
 if (!VAR_4) {
  FUNC_3("%pOF: could not find property %s\n", VAR_1, VAR_2);
  return -VAR_0;
 }

 VAR_6 = VAR_5 / sizeof(u32);
 if (VAR_6 == 1) {
  VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_3->typ);
  VAR_3->min = VAR_3->typ;
  VAR_3->max = VAR_3->typ;
 } else if (VAR_6 == 3) {
  VAR_7 = FUNC_2(VAR_1, VAR_2, &VAR_3->min, VAR_6);
 } else {
  FUNC_3("%pOF: illegal timing specification in %s\n", VAR_1, VAR_2);
  return -VAR_0;
 }

 return VAR_7;
}
