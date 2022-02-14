
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ssb_sflash {scalar_t__ size; scalar_t__ window; scalar_t__ present; } ;
struct ssb_pflash {int present; int buswidth; scalar_t__ window_size; scalar_t__ window; } ;
struct ssb_mipscore {TYPE_1__* dev; struct ssb_pflash pflash; struct ssb_sflash sflash; } ;
struct TYPE_7__ {int capabilities; int dev; } ;
struct ssb_bus {TYPE_2__ chipco; } ;
struct TYPE_9__ {int width; } ;
struct TYPE_8__ {scalar_t__ end; scalar_t__ start; } ;
struct TYPE_6__ {int dev; struct ssb_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct ssb_mipscore *VAR_9)
{
 struct ssb_bus *VAR_10 = VAR_9->dev->bus;
 struct ssb_sflash *VAR_11 = &VAR_9->sflash;
 struct ssb_pflash *VAR_12 = &VAR_9->pflash;


 if (!FUNC_2(&VAR_10->chipco)) {
  VAR_12->present = 1;
  VAR_12->buswidth = 2;
  VAR_12->window = VAR_3;
  VAR_12->window_size = VAR_4;
  goto ssb_pflash;
 }


 switch (VAR_10->chipco.capabilities & VAR_0) {
 case 128:
 case 130:
  FUNC_1(VAR_9->dev->dev, "Found serial flash\n");
  FUNC_4(&VAR_10->chipco);
  break;
 case 129:
  FUNC_1(VAR_9->dev->dev, "Found parallel flash\n");
  VAR_12->present = 1;
  VAR_12->window = VAR_5;
  VAR_12->window_size = VAR_6;
  if ((FUNC_3(VAR_10->chipco.dev, VAR_2)
                 & VAR_1) == 0)
   VAR_12->buswidth = 1;
  else
   VAR_12->buswidth = 2;
  break;
 }

ssb_pflash:
 if (VAR_11->present) {



 } else if (VAR_12->present) {




  VAR_7.width = VAR_12->buswidth;
  VAR_8.start = VAR_12->window;
  VAR_8.end = VAR_12->window + VAR_12->window_size;
 }
}
