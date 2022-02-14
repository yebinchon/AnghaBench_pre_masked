
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct kempld_device_data {TYPE_1__ info; } ;



__attribute__((used)) static const char *FUNC_0(struct kempld_device_data *VAR_0)
{
 const char *VAR_1;

 switch (VAR_0->info.type) {
 case 0:
  VAR_1 = "release";
  break;
 case 1:
  VAR_1 = "debug";
  break;
 case 2:
  VAR_1 = "custom";
  break;
 default:
  VAR_1 = "unspecified";
  break;
 }

 return VAR_1;
}
