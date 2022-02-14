
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43legacy_wldev {int wl; TYPE_2__* dev; } ;
struct b43legacy_pioqueue {int need_workarounds; scalar_t__ tx_devq_size; scalar_t__ mmio_base; int txtask; int txrunning; int txqueue; int txfree; struct b43legacy_wldev* dev; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct b43legacy_wldev*,scalar_t__) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct b43legacy_pioqueue*) ;
 struct b43legacy_pioqueue* FUNC_6 (int,int ) ;
 int FUNC_7 (struct b43legacy_pioqueue*) ;
 int FUNC_8 (int *,int ,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static
struct b43legacy_pioqueue *FUNC_9(struct b43legacy_wldev *VAR_6,
          u16 VAR_7)
{
 struct b43legacy_pioqueue *VAR_8;
 u32 VAR_9;
 u16 VAR_10;

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  goto out;

 VAR_8->dev = VAR_6;
 VAR_8->mmio_base = VAR_7;
 VAR_8->need_workarounds = (VAR_6->dev->id.revision < 3);

 FUNC_0(&VAR_8->txfree);
 FUNC_0(&VAR_8->txqueue);
 FUNC_0(&VAR_8->txrunning);
 FUNC_8(&VAR_8->txtask, VAR_5,
       (unsigned long)VAR_8);

 VAR_9 = FUNC_2(VAR_6, VAR_1);
 VAR_9 &= ~VAR_0;
 FUNC_3(VAR_6, VAR_1, VAR_9);

 VAR_10 = FUNC_1(VAR_6, VAR_8->mmio_base
     + VAR_3);
 if (VAR_10 == 0) {
  FUNC_4(VAR_6->wl, "This card does not support PIO "
         "operation mode. Please use DMA mode "
         "(module parameter pio=0).\n");
  goto err_freequeue;
 }
 if (VAR_10 <= VAR_2) {
  FUNC_4(VAR_6->wl, "PIO tx device-queue too small (%u)\n",
         VAR_10);
  goto err_freequeue;
 }
 VAR_10 -= VAR_2;
 VAR_8->tx_devq_size = VAR_10;

 FUNC_7(VAR_8);

out:
 return VAR_8;

err_freequeue:
 FUNC_5(VAR_8);
 VAR_8 = ((void*)0);
 goto out;
}
