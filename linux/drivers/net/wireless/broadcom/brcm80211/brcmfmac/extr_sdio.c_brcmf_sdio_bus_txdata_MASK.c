
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef scalar_t__ u16 ;
struct sk_buff {int priority; scalar_t__ cb; int len; int data; } ;
struct device {int dummy; } ;
struct brcmf_sdio_dev {scalar_t__ state; struct brcmf_sdio* bus; } ;
struct TYPE_4__ {int fcqueued; } ;
struct brcmf_sdio {int txoff; int txq; int txq_lock; int tx_hdrlen; TYPE_2__ sdcnt; } ;
struct TYPE_3__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (int *,struct sk_buff*,size_t) ;
 int FUNC_4 (struct brcmf_sdio*) ;
 struct brcmf_bus* FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,size_t) ;
 size_t FUNC_8 (int) ;
 scalar_t__* VAR_7 ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_8, struct sk_buff *VAR_9)
{
 int VAR_10 = -VAR_1;
 uint VAR_11;
 struct brcmf_bus *VAR_12 = FUNC_5(VAR_8);
 struct brcmf_sdio_dev *VAR_13 = VAR_12->bus_priv.sdio;
 struct brcmf_sdio *VAR_14 = VAR_13->bus;

 FUNC_0(VAR_5, "Enter: pkt: data %p len %d\n", VAR_9->data, VAR_9->len);
 if (VAR_13->state != VAR_0)
  return -VAR_2;


 FUNC_10(VAR_9, VAR_14->tx_hdrlen);


 VAR_11 = FUNC_8((VAR_9->priority & VAR_4));



 FUNC_0(VAR_5, "deferring pktq len %d\n", FUNC_6(&VAR_14->txq));
 VAR_14->sdcnt.fcqueued++;


 FUNC_11(&VAR_14->txq_lock);

 *(u16 *)(VAR_9->cb) = 0;
 if (!FUNC_3(&VAR_14->txq, VAR_9, VAR_11)) {
  FUNC_9(VAR_9, VAR_14->tx_hdrlen);
  FUNC_1("out of bus->txq !!!\n");
  VAR_10 = -VAR_3;
 } else {
  VAR_10 = 0;
 }

 if (FUNC_6(&VAR_14->txq) >= VAR_6) {
  VAR_14->txoff = 1;
  FUNC_2(VAR_8, 1);
 }
 FUNC_12(&VAR_14->txq_lock);






 FUNC_4(VAR_14);
 return VAR_10;
}
