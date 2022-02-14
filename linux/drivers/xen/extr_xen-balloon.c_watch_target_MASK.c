
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_watch {int dummy; } ;
struct TYPE_2__ {unsigned long long target_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long long) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*,char*,char*,unsigned long long*) ;

__attribute__((used)) static void FUNC_4(struct xenbus_watch *VAR_5,
    const char *VAR_6, const char *VAR_7)
{
 unsigned long long VAR_8, VAR_9;
 int VAR_10;
 static bool VAR_11;
 static long VAR_12;







 VAR_10 = FUNC_3(VAR_1, "memory", "target", "%llu", &VAR_8);
 if (VAR_10 != 1) {

  return;
 }




 VAR_8 >>= VAR_0 - 10;

 if (!VAR_11) {
  VAR_11 = 1;

  if ((FUNC_3(VAR_1, "memory", "static-max",
      "%llu", &VAR_9) == 1) ||
      (FUNC_3(VAR_1, "memory", "memory_static_max",
      "%llu", &VAR_9) == 1))
   VAR_9 >>= VAR_0 - 10;
  else
   VAR_9 = VAR_8;

  VAR_12 = (FUNC_2() || FUNC_1()) ? 0
    : VAR_9 - VAR_2.target_pages;
 }

 FUNC_0(VAR_8 - VAR_12);
}
