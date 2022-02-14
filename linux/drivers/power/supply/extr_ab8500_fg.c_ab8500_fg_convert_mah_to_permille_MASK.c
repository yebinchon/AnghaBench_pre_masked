
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_mah_design; } ;
struct ab8500_fg {TYPE_1__ bat_cap; } ;



__attribute__((used)) static int FUNC_0(struct ab8500_fg *VAR_0, int VAR_1)
{
 return (VAR_1 * 1000) / VAR_0->bat_cap.max_mah_design;
}
