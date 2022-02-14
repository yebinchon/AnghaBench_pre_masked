
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pch_gbe_tx_ring {int next_to_clean; int next_to_use; } ;
struct pch_gbe_adapter {struct pch_gbe_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pch_gbe_tx_ring*) ;
 int FUNC_1 (struct net_device*,char*,int ,int ) ;
 struct pch_gbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pch_gbe_adapter*,struct pch_gbe_tx_ring*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct pch_gbe_adapter *VAR_4 = FUNC_2(VAR_3);
 struct pch_gbe_tx_ring *VAR_5 = VAR_4->tx_ring;

 if (FUNC_5(!FUNC_0(VAR_5))) {
  FUNC_3(VAR_3);
  FUNC_1(VAR_3,
      "Return : BUSY  next_to use : 0x%08x  next_to clean : 0x%08x\n",
      VAR_5->next_to_use, VAR_5->next_to_clean);
  return VAR_0;
 }


 FUNC_4(VAR_4, VAR_5, VAR_2);
 return VAR_1;
}
