
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {scalar_t__ cb; } ;
struct octnet_buf_free_info {struct octeon_soft_command* sc; struct lio* lio; } ;
struct octeon_soft_command {scalar_t__ virtrptr; } ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct oct_timestamp_resp {scalar_t__ timestamp; } ;
struct lio {scalar_t__ ptp_adjust; int netdev; struct octeon_device* oct_dev; } ;
struct TYPE_4__ {int tx_flags; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct lio*,int ,int ,char*,struct sk_buff*,unsigned long long) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_5 (scalar_t__*,int) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 int FUNC_8 (struct sk_buff*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct octeon_device *VAR_3,
        u32 VAR_4,
        void *VAR_5)
{
 struct octnet_buf_free_info *VAR_6;
 struct octeon_soft_command *VAR_7;
 struct oct_timestamp_resp *VAR_8;
 struct lio *VAR_9;
 struct sk_buff *VAR_10 = (struct sk_buff *)VAR_5;

 VAR_6 = (struct octnet_buf_free_info *)VAR_10->cb;
 VAR_9 = VAR_6->lio;
 VAR_7 = VAR_6->sc;
 VAR_3 = VAR_9->oct_dev;
 VAR_8 = (struct oct_timestamp_resp *)VAR_7->virtrptr;

 if (VAR_4 != VAR_0) {
  FUNC_1(&VAR_3->pci_dev->dev, "Tx timestamp instruction failed. Status: %llx\n",
   FUNC_0(VAR_4));
  VAR_8->timestamp = 0;
 }

 FUNC_5(&VAR_8->timestamp, 1);

 if (FUNC_9((FUNC_6(VAR_10)->tx_flags & VAR_1) != 0)) {
  struct skb_shared_hwtstamps VAR_11;
  u64 VAR_12 = VAR_8->timestamp;

  FUNC_2(VAR_9, VAR_2, VAR_9->netdev,
      "Got resulting SKBTX_HW_TSTAMP skb=%p ns=%016llu\n",
      VAR_10, (unsigned long long)VAR_12);
  VAR_11.hwtstamp = FUNC_3(VAR_12 + VAR_9->ptp_adjust);
  FUNC_7(VAR_10, &VAR_11);
 }

 FUNC_4(VAR_3, VAR_7);
 FUNC_8(VAR_10);
}
