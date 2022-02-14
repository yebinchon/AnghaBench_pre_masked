
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct brcmf_sdio_dev {scalar_t__ state; int func1; int func2; struct brcmf_sdio* bus; } ;
struct brcmf_sdio {int rxskip; scalar_t__ rx_seq; scalar_t__ tx_seq; int rxctl_lock; scalar_t__ rxlen; int glomd; int txq; int ci; scalar_t__ hostintmask; int * watchdog_tsk; struct brcmf_core* sdio_core; } ;
struct brcmf_core {scalar_t__ base; } ;
struct TYPE_2__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct brcmf_sdio*,int,int) ;
 int FUNC_5 (struct brcmf_sdio*) ;
 int FUNC_6 (struct brcmf_sdio*) ;
 int FUNC_7 (struct brcmf_sdio_dev*,int ,int*) ;
 int FUNC_8 (struct brcmf_sdio_dev*,int ,int ,int*) ;
 int FUNC_9 (struct brcmf_sdio_dev*,scalar_t__,scalar_t__,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int,int *,int *) ;
 struct brcmf_bus* FUNC_12 (struct device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(struct device *VAR_9)
{
 struct brcmf_bus *VAR_10 = FUNC_12(VAR_9);
 struct brcmf_sdio_dev *VAR_11 = VAR_10->bus_priv.sdio;
 struct brcmf_sdio *VAR_12 = VAR_11->bus;
 struct brcmf_core *VAR_13 = VAR_12->sdio_core;
 u32 VAR_14;
 u8 VAR_15, VAR_16;
 int VAR_17;

 FUNC_2(VAR_6, "Enter\n");

 if (VAR_12->watchdog_tsk) {
  FUNC_17(VAR_5, VAR_12->watchdog_tsk, 1);
  FUNC_13(VAR_12->watchdog_tsk);
  VAR_12->watchdog_tsk = ((void*)0);
 }

 if (VAR_11->state != VAR_0) {
  FUNC_14(VAR_11->func1);


  FUNC_4(VAR_12, 0, 0);


  FUNC_9(VAR_11, VAR_13->base + FUNC_0(VAR_7),
       0, ((void*)0));

  VAR_14 = VAR_12->hostintmask;
  VAR_12->hostintmask = 0;


  VAR_15 = FUNC_7(VAR_11, VAR_3,
         &VAR_17);
  if (!VAR_17) {
   VAR_16 = VAR_15;
   VAR_16 |= FUNC_1(VAR_12->ci) ?
    VAR_4 : VAR_2;
   FUNC_8(VAR_11,
        VAR_3,
        VAR_16, &VAR_17);
  }
  if (VAR_17)
   FUNC_3("Failed to force clock for F2: err %d\n",
      VAR_17);


  FUNC_2(VAR_1, "disable SDIO interrupts\n");
  FUNC_15(VAR_11->func2);


  FUNC_9(VAR_11, VAR_13->base + FUNC_0(VAR_8),
       VAR_14, ((void*)0));

  FUNC_16(VAR_11->func1);
 }

 FUNC_11(&VAR_12->txq, 1, ((void*)0), ((void*)0));


 FUNC_10(VAR_12->glomd);
 FUNC_6(VAR_12);


 FUNC_18(&VAR_12->rxctl_lock);
 VAR_12->rxlen = 0;
 FUNC_19(&VAR_12->rxctl_lock);
 FUNC_5(VAR_12);


 VAR_12->rxskip = 0;
 VAR_12->tx_seq = VAR_12->rx_seq = 0;
}
