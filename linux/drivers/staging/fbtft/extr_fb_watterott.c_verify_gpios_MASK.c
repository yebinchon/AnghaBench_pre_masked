
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reset; } ;
struct fbtft_par {TYPE_2__* info; TYPE_1__ gpio; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct fbtft_par *VAR_1)
{
 if (!VAR_1->gpio.reset) {
  FUNC_0(VAR_1->info->device, "Missing 'reset' gpio. Aborting.\n");
  return -VAR_0;
 }
 return 0;
}
