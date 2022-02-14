
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int alloc_len; int alloc; } ;
struct TYPE_4__ {int function; } ;
struct ec_bhf_priv {TYPE_3__ rx_buf; TYPE_1__ hrtimer; scalar_t__ mii_io; int tx_dma_chan; TYPE_3__ tx_buf; int rx_dma_chan; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct device* FUNC_0 (struct ec_bhf_priv*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (struct ec_bhf_priv*,TYPE_3__*,int ,int) ;
 int FUNC_4 (struct ec_bhf_priv*) ;
 int FUNC_5 (struct ec_bhf_priv*) ;
 int FUNC_6 (struct ec_bhf_priv*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 struct ec_bhf_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_6)
{
 struct ec_bhf_priv *VAR_7 = FUNC_10(VAR_6);
 struct device *VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = 0;

 FUNC_4(VAR_7);

 VAR_9 = FUNC_3(VAR_7, &VAR_7->rx_buf, VAR_7->rx_dma_chan,
       VAR_1 * sizeof(struct rx_desc));
 if (VAR_9) {
  FUNC_1(VAR_8, "Failed to allocate rx buffer\n");
  goto out;
 }
 FUNC_5(VAR_7);

 VAR_9 = FUNC_3(VAR_7, &VAR_7->tx_buf, VAR_7->tx_dma_chan,
       VAR_1 * sizeof(struct tx_desc));
 if (VAR_9) {
  FUNC_1(VAR_8, "Failed to allocate tx buffer\n");
  goto error_rx_free;
 }
 FUNC_9(0, VAR_7->mii_io + VAR_3);
 FUNC_6(VAR_7);

 FUNC_11(VAR_6);

 FUNC_7(&VAR_7->hrtimer, VAR_0, VAR_2);
 VAR_7->hrtimer.function = VAR_4;
 FUNC_8(&VAR_7->hrtimer, VAR_5, VAR_2);

 return 0;

error_rx_free:
 FUNC_2(VAR_8, VAR_7->rx_buf.alloc_len, VAR_7->rx_buf.alloc,
     VAR_7->rx_buf.alloc_len);
out:
 return VAR_9;
}
