
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef long uint ;
typedef int u8 ;
struct TYPE_5__ {int rxc_errors; int f2rxdata; int rx_toolong; } ;
struct brcmf_sdio {unsigned long head_align; long roundup; long blocksize; long rxlen; int rxctl_lock; int * rxctl_orig; int * rxctl; TYPE_2__ sdcnt; TYPE_3__* sdiodev; int * rxbuf; scalar_t__ rxblen; } ;
struct TYPE_6__ {TYPE_1__* bus_if; } ;
struct TYPE_4__ {long maxctl; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 long VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int *,long,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct brcmf_sdio*) ;
 int FUNC_6 (struct brcmf_sdio*,int,int) ;
 int FUNC_7 (TYPE_3__*,int *,long) ;
 int FUNC_8 (int *,int *,long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (scalar_t__) ;

__attribute__((used)) static void
FUNC_13(struct brcmf_sdio *VAR_2, u8 *VAR_3, uint VAR_4, uint VAR_5)
{
 uint VAR_6, VAR_7;
 u8 *VAR_8 = ((void*)0), *VAR_9;
 int VAR_10;

 FUNC_2(VAR_1, "Enter\n");
 if (VAR_2->rxblen)
  VAR_8 = FUNC_12(VAR_2->rxblen);
 if (!VAR_8)
  goto done;

 VAR_9 = VAR_2->rxbuf;
 VAR_7 = ((unsigned long)VAR_9 % VAR_2->head_align);
 if (VAR_7)
  VAR_9 += (VAR_2->head_align - VAR_7);


 FUNC_8(VAR_8, VAR_3, VAR_0);
 if (VAR_4 <= VAR_0)
  goto gotpkt;


 VAR_6 = VAR_4 - VAR_0;
 if (VAR_2->roundup && VAR_2->blocksize && (VAR_6 > VAR_2->blocksize)) {
  VAR_7 = VAR_2->blocksize - (VAR_6 % VAR_2->blocksize);
  if ((VAR_7 <= VAR_2->roundup) && (VAR_7 < VAR_2->blocksize) &&
      ((VAR_4 + VAR_7) < VAR_2->sdiodev->bus_if->maxctl))
   VAR_6 += VAR_7;
 } else if (VAR_6 % VAR_2->head_align) {
  VAR_6 += VAR_2->head_align - (VAR_6 % VAR_2->head_align);
 }


 if ((VAR_6 + VAR_0) > VAR_2->sdiodev->bus_if->maxctl) {
  FUNC_4("%d-byte control read exceeds %d-byte buffer\n",
     VAR_6, VAR_2->sdiodev->bus_if->maxctl);
  FUNC_6(VAR_2, 0, 0);
  goto done;
 }

 if ((VAR_4 - VAR_5) > VAR_2->sdiodev->bus_if->maxctl) {
  FUNC_4("%d-byte ctl frame (%d-byte ctl data) exceeds %d-byte limit\n",
     VAR_4, VAR_4 - VAR_5, VAR_2->sdiodev->bus_if->maxctl);
  VAR_2->sdcnt.rx_toolong++;
  FUNC_6(VAR_2, 0, 0);
  goto done;
 }


 VAR_10 = FUNC_7(VAR_2->sdiodev, VAR_9, VAR_6);
 VAR_2->sdcnt.f2rxdata++;


 if (VAR_10 < 0) {
  FUNC_4("read %d control bytes failed: %d\n",
     VAR_6, VAR_10);
  VAR_2->sdcnt.rxc_errors++;
  FUNC_6(VAR_2, 1, 1);
  goto done;
 } else
  FUNC_8(VAR_8 + VAR_0, VAR_9, VAR_6);

gotpkt:

 FUNC_3(FUNC_0() && FUNC_1(),
      VAR_8, VAR_4, "RxCtrl:\n");


 FUNC_9(&VAR_2->rxctl_lock);
 if (VAR_2->rxctl) {
  FUNC_4("last control frame is being processed.\n");
  FUNC_10(&VAR_2->rxctl_lock);
  FUNC_11(VAR_8);
  goto done;
 }
 VAR_2->rxctl = VAR_8 + VAR_5;
 VAR_2->rxctl_orig = VAR_8;
 VAR_2->rxlen = VAR_4 - VAR_5;
 FUNC_10(&VAR_2->rxctl_lock);

done:

 FUNC_5(VAR_2);
}
