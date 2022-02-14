
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
struct TYPE_8__ {int udelay; int timeout; struct tridentfb_par* data; int getscl; int getsda; int setscl; int setsda; } ;
struct tridentfb_par {TYPE_4__ ddc_adapter; TYPE_3__ ddc_algo; int chip_id; } ;
struct TYPE_6__ {int id; } ;
struct fb_info {int device; TYPE_1__ fix; struct tridentfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,struct tridentfb_par*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_9)
{
 struct tridentfb_par *VAR_10 = VAR_9->par;

 FUNC_3(VAR_10->ddc_adapter.name, VAR_9->fix.id,
  sizeof(VAR_10->ddc_adapter.name));
 VAR_10->ddc_adapter.owner = VAR_1;
 VAR_10->ddc_adapter.class = VAR_0;
 VAR_10->ddc_adapter.algo_data = &VAR_10->ddc_algo;
 VAR_10->ddc_adapter.dev.parent = VAR_9->device;
 if (FUNC_2(VAR_10->chip_id)) {
  VAR_10->ddc_algo.setsda = VAR_8;
  VAR_10->ddc_algo.setscl = VAR_6;
  VAR_10->ddc_algo.getsda = VAR_4;

 } else {
  VAR_10->ddc_algo.setsda = VAR_7;
  VAR_10->ddc_algo.setscl = VAR_5;
  VAR_10->ddc_algo.getsda = VAR_3;
  VAR_10->ddc_algo.getscl = VAR_2;
 }
 VAR_10->ddc_algo.udelay = 10;
 VAR_10->ddc_algo.timeout = 20;
 VAR_10->ddc_algo.data = VAR_10;

 FUNC_1(&VAR_10->ddc_adapter, VAR_10);

 return FUNC_0(&VAR_10->ddc_adapter);
}
