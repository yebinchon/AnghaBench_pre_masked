
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_hw {int dummy; } ;
struct enetc_si {scalar_t__ num_rss; int cbd_ring; struct enetc_hw hw; } ;
struct enetc_ndev_priv {int num_rx_rings; struct enetc_si* si; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct enetc_hw*,int *) ;
 int FUNC_1 (struct enetc_si*,int ) ;
 int FUNC_2 (struct enetc_hw*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct enetc_ndev_priv *VAR_7)
{
 struct enetc_si *VAR_8 = VAR_7->si;
 struct enetc_hw *VAR_9 = &VAR_8->hw;
 int VAR_10;

 FUNC_0(VAR_9, &VAR_8->cbd_ring);

 FUNC_2(VAR_9, VAR_0,
   VAR_3 | VAR_4);
 FUNC_2(VAR_9, VAR_1, VAR_2);

 FUNC_2(VAR_9, VAR_5, VAR_6);

 if (VAR_8->num_rss) {
  VAR_10 = FUNC_1(VAR_8, VAR_7->num_rx_rings);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
