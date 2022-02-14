
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct TYPE_9__ {TYPE_2__ dev; TYPE_3__* algo_data; int class; int owner; int name; } ;
struct TYPE_8__ {int udelay; int timeout; struct i740fb_par* data; int getscl; int getsda; int setscl; int setsda; } ;
struct i740fb_par {TYPE_4__ ddc_adapter; TYPE_3__ ddc_algo; } ;
struct TYPE_6__ {int id; } ;
struct fb_info {int device; TYPE_1__ fix; struct i740fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,struct i740fb_par*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_6)
{
 struct i740fb_par *VAR_7 = VAR_6->par;

 FUNC_2(VAR_7->ddc_adapter.name, VAR_6->fix.id,
  sizeof(VAR_7->ddc_adapter.name));
 VAR_7->ddc_adapter.owner = VAR_1;
 VAR_7->ddc_adapter.class = VAR_0;
 VAR_7->ddc_adapter.algo_data = &VAR_7->ddc_algo;
 VAR_7->ddc_adapter.dev.parent = VAR_6->device;
 VAR_7->ddc_algo.setsda = VAR_5;
 VAR_7->ddc_algo.setscl = VAR_4;
 VAR_7->ddc_algo.getsda = VAR_3;
 VAR_7->ddc_algo.getscl = VAR_2;
 VAR_7->ddc_algo.udelay = 10;
 VAR_7->ddc_algo.timeout = 20;
 VAR_7->ddc_algo.data = VAR_7;

 FUNC_1(&VAR_7->ddc_adapter, VAR_7);

 return FUNC_0(&VAR_7->ddc_adapter);
}
