
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ coreid; } ;
struct ssb_device {TYPE_2__ id; TYPE_1__* bus; } ;
struct TYPE_3__ {int chip_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct ssb_device *VAR_1)
{
 u16 VAR_2 = VAR_1->bus->chip_id;

 if (VAR_1->id.coreid == VAR_0) {
  return (VAR_2 == 0x4322 || VAR_2 == 43221 ||
   VAR_2 == 43231 || VAR_2 == 43222);
 }

 return 0;
}
