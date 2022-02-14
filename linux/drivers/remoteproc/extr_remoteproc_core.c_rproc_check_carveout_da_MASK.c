
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rproc_mem_entry {scalar_t__ len; scalar_t__ da; } ;
struct device {int dummy; } ;
struct rproc {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static int FUNC_1(struct rproc *VAR_2,
       struct rproc_mem_entry *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct device *VAR_6 = &VAR_2->dev;
 int VAR_7;


 if (VAR_5 > VAR_3->len) {
  FUNC_0(VAR_6, "Registered carveout doesn't fit len request\n");
  return -VAR_0;
 }

 if (VAR_4 != VAR_1 && VAR_3->da == VAR_1) {

  return -VAR_0;
 } else if (VAR_4 != VAR_1 && VAR_3->da != VAR_1) {
  VAR_7 = VAR_4 - VAR_3->da;


  if (VAR_7 < 0) {
   FUNC_0(VAR_6,
    "Registered carveout doesn't fit da request\n");
   return -VAR_0;
  }

  if (VAR_7 + VAR_5 > VAR_3->len) {
   FUNC_0(VAR_6,
    "Registered carveout doesn't fit len request\n");
   return -VAR_0;
  }
 }

 return 0;
}
