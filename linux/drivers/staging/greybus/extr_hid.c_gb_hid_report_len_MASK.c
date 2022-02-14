
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hid_report {int size; size_t type; TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* report_enum; } ;
struct TYPE_3__ {int numbered; } ;



__attribute__((used)) static int FUNC_0(struct hid_report *VAR_0)
{
 return ((VAR_0->size - 1) >> 3) + 1 +
  VAR_0->device->report_enum[VAR_0->type].numbered;
}
