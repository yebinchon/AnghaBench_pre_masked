
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_info {int dummy; } ;
struct niu {int num_tx_rings; int dev; struct tx_ring_info* tx_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct niu*,int ,int ,int ,char*) ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*,struct tx_ring_info*) ;
 int FUNC_6 (struct niu*) ;
 int FUNC_7 (struct niu*) ;
 int FUNC_8 (struct niu*) ;
 int FUNC_9 (struct niu*) ;
 int FUNC_10 (struct niu*) ;
 int FUNC_11 (struct niu*) ;
 int FUNC_12 (struct niu*,int) ;
 int FUNC_13 (struct niu*,int) ;
 int FUNC_14 (struct niu*,int ) ;

__attribute__((used)) static int FUNC_15(struct niu *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Initialize TXC\n");
 FUNC_12(VAR_2, 1);
 FUNC_13(VAR_2, 1);
 FUNC_14(VAR_2, 0);

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Initialize TX channels\n");
 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_rings; VAR_3++) {
  struct tx_ring_info *VAR_5 = &VAR_2->tx_rings[VAR_3];

  VAR_4 = FUNC_5(VAR_2, VAR_5);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Initialize RX channels\n");
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4)
  goto out_uninit_tx_channels;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Initialize classifier\n");
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4)
  goto out_uninit_rx_channels;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Initialize ZCP\n");
 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  goto out_uninit_rx_channels;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Initialize IPP\n");
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto out_uninit_rx_channels;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Initialize MAC\n");
 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto out_uninit_ipp;

 return 0;

out_uninit_ipp:
 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Uninit IPP\n");
 FUNC_1(VAR_2);

out_uninit_rx_channels:
 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Uninit RX channels\n");
 FUNC_10(VAR_2);
 FUNC_8(VAR_2);

out_uninit_tx_channels:
 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_2->dev, "Uninit TX channels\n");
 FUNC_11(VAR_2);
 FUNC_9(VAR_2);

 return VAR_4;
}
