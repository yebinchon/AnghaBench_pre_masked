
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct omapfb_info {int id; TYPE_1__* region; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct omapfb_info *VAR_1)
{
 if (VAR_1->id == VAR_1->region->id)
  return 0;

 return VAR_0 | VAR_1->region->id;
}
