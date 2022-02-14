
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cyberpro_info {int dev_name; TYPE_3__* info; int fb_size; int fb; int irq; int regs; int * i2c; int dev; } ;
struct TYPE_4__ {int id; int smem_len; } ;
struct TYPE_5__ {TYPE_1__ fix; int screen_base; int device; } ;
struct TYPE_6__ {TYPE_2__ fb; int irq; int regs; int i2c_adapter; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

int FUNC_1(struct cyberpro_info *VAR_1, int VAR_2)
{
 if (VAR_0 != ((void*)0)) {
  VAR_1->dev = VAR_0->fb.device;



  VAR_1->i2c = ((void*)0);

  VAR_1->regs = VAR_0->regs;
  VAR_1->irq = VAR_0->irq;
  VAR_1->fb = VAR_0->fb.screen_base;
  VAR_1->fb_size = VAR_0->fb.fix.smem_len;
  VAR_1->info = VAR_0;

  FUNC_0(VAR_1->dev_name, VAR_0->fb.fix.id,
   sizeof(VAR_1->dev_name));
 }

 return VAR_0 != ((void*)0);
}
