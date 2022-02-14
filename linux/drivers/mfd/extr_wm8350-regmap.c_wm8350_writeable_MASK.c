
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8350 {int unlocked; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int writable; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct wm8350* FUNC_0 (struct device*) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_5, unsigned int VAR_6)
{
 struct wm8350 *VAR_7 = FUNC_0(VAR_5);

 if (!VAR_7->unlocked) {
  if ((VAR_6 >= VAR_2 &&
       VAR_6 <= VAR_3) ||
      (VAR_6 >= VAR_0 &&
       VAR_6 <= VAR_1))
   return 0;
 }

 return VAR_4[VAR_6].writable;
}
