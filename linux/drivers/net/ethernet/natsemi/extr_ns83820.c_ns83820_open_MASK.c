
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ns83820 {int tx_watchdog; scalar_t__ base; scalar_t__ tx_phy_descs; scalar_t__ tx_done_idx; scalar_t__ tx_idx; int * tx_descs; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_8 ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_9)
{
 struct ns83820 *VAR_10 = FUNC_0(VAR_9);
 unsigned VAR_11;
 u32 VAR_12;
 int VAR_13;

 FUNC_2("ns83820_open\n");

 FUNC_9(0, VAR_10->base + VAR_4);

 VAR_13 = FUNC_6(VAR_9);
 if (VAR_13)
  goto failed;

 FUNC_3(VAR_10->tx_descs, 0, 4 * VAR_3 * VAR_1);
 for (VAR_11=0; VAR_11<VAR_3; VAR_11++) {
  VAR_10->tx_descs[(VAR_11 * VAR_1) + VAR_0]
    = FUNC_1(
      VAR_10->tx_phy_descs
      + ((VAR_11+1) % VAR_3) * VAR_1 * 4);
 }

 VAR_10->tx_idx = 0;
 VAR_10->tx_done_idx = 0;
 VAR_12 = VAR_10->tx_phy_descs;
 FUNC_9(0, VAR_10->base + VAR_6);
 FUNC_9(VAR_12, VAR_10->base + VAR_5);

 FUNC_8(&VAR_10->tx_watchdog, VAR_8, 0);
 FUNC_4(&VAR_10->tx_watchdog, VAR_7 + 2*VAR_2);

 FUNC_5(VAR_9);

 return 0;

failed:
 FUNC_7(VAR_9);
 return VAR_13;
}
