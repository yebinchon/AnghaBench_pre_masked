
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {int up; int lock; } ;
struct softing {int dpram_size; TYPE_5__ fw; TYPE_6__* pdev; TYPE_4__* pdat; int * dpram; } ;
typedef int stream ;
struct TYPE_16__ {int dev; } ;
struct TYPE_13__ {int fw; } ;
struct TYPE_12__ {scalar_t__ addr; scalar_t__ offs; int fw; } ;
struct TYPE_11__ {scalar_t__ addr; scalar_t__ offs; int fw; } ;
struct TYPE_14__ {int (* reset ) (TYPE_6__*,int) ;int (* enable_irq ) (TYPE_6__*,int) ;TYPE_3__ app; TYPE_2__ load; TYPE_1__ boot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned char*,int const*,int) ;
 int FUNC_3 (unsigned char*,int *,int) ;
 int FUNC_4 (int *,int const*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct softing*,int ,char*) ;
 int FUNC_8 (struct softing*) ;
 int FUNC_9 (struct softing*) ;
 int FUNC_10 (int ,struct softing*) ;
 int FUNC_11 (int ,struct softing*,int *,int,scalar_t__) ;
 int FUNC_12 (struct softing*) ;
 int FUNC_13 (TYPE_6__*,int) ;
 int FUNC_14 (TYPE_6__*,int) ;
 int FUNC_15 (TYPE_6__*,int) ;
 int FUNC_16 (TYPE_6__*,int) ;
 int FUNC_17 (TYPE_6__*,int) ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct softing *VAR_2)
{
 int VAR_3, VAR_4;
 static const uint8_t VAR_5[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, };
 unsigned char VAR_6[sizeof(VAR_5)];

 if (FUNC_5(&VAR_2->fw.lock))
  return -VAR_1;
 if (VAR_2->fw.up) {
  FUNC_6(&VAR_2->fw.lock);
  return 0;
 }

 if (VAR_2->pdat->enable_irq)
  VAR_2->pdat->enable_irq(VAR_2->pdev, 1);

 FUNC_12(VAR_2);
 if (VAR_2->pdat->reset)
  VAR_2->pdat->reset(VAR_2->pdev, 1);
 for (VAR_4 = 0; (VAR_4 + sizeof(VAR_5)) < VAR_2->dpram_size;
   VAR_4 += sizeof(VAR_5)) {

  FUNC_4(&VAR_2->dpram[VAR_4], VAR_5, sizeof(VAR_5));

  FUNC_1();
  FUNC_3(VAR_6, &VAR_2->dpram[VAR_4], sizeof(VAR_5));

  if (!FUNC_2(VAR_6, VAR_5, sizeof(VAR_5)))
   continue;

  FUNC_0(&VAR_2->pdev->dev, "dpram failed at 0x%04x\n", VAR_4);
  VAR_3 = -VAR_0;
  goto failed;
 }
 FUNC_18();

 VAR_3 = FUNC_11(VAR_2->pdat->boot.fw, VAR_2, VAR_2->dpram,
    VAR_2->dpram_size,
    VAR_2->pdat->boot.offs - VAR_2->pdat->boot.addr);
 if (VAR_3 < 0)
  goto failed;

 VAR_3 = FUNC_11(VAR_2->pdat->load.fw, VAR_2, VAR_2->dpram,
    VAR_2->dpram_size,
    VAR_2->pdat->load.offs - VAR_2->pdat->load.addr);
 if (VAR_3 < 0)
  goto failed;

 if (VAR_2->pdat->reset)
  VAR_2->pdat->reset(VAR_2->pdev, 0);
 FUNC_9(VAR_2);
 VAR_3 = FUNC_7(VAR_2, 0, "card boot");
 if (VAR_3 < 0)
  goto failed;
 VAR_3 = FUNC_10(VAR_2->pdat->app.fw, VAR_2);
 if (VAR_3 < 0)
  goto failed;

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3 < 0)
  goto failed;

 VAR_2->fw.up = 1;
 FUNC_6(&VAR_2->fw.lock);
 return 0;
failed:
 VAR_2->fw.up = 0;
 if (VAR_2->pdat->enable_irq)
  VAR_2->pdat->enable_irq(VAR_2->pdev, 0);
 FUNC_12(VAR_2);
 if (VAR_2->pdat->reset)
  VAR_2->pdat->reset(VAR_2->pdev, 1);
 FUNC_6(&VAR_2->fw.lock);
 return VAR_3;
}
