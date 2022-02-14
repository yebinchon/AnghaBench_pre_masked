
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct uwb_rc {scalar_t__ ready; } const uwb_rc ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 struct uwb_rc const* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, const void *VAR_1)
{
 const struct uwb_rc *VAR_2 = VAR_1;
 struct uwb_rc *VAR_3 = FUNC_1(VAR_0);

 if (VAR_3 == ((void*)0)) {
  FUNC_0(1);
  return 0;
 }
 if (VAR_3 == VAR_2) {
  if (VAR_3->ready == 0)
   return 0;
  else
   return 1;
 }
 return 0;
}
