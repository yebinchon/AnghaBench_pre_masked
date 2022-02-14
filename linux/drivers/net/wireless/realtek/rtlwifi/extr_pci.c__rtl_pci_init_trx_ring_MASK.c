
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl_pci {TYPE_1__* tx_ring; int * txringcount; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ buffer_desc; scalar_t__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 struct rtl_pci* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_2)
{
 struct rtl_pci *VAR_3 = FUNC_4(FUNC_5(VAR_2));
 int VAR_4;
 int VAR_5, VAR_6;




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = FUNC_2(VAR_2, VAR_6);
  if (VAR_4)
   return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_3(VAR_2, VAR_5, VAR_3->txringcount[VAR_5]);
  if (VAR_4)
   goto err_free_rings;
 }

 return 0;

err_free_rings:
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(VAR_2, VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_3->tx_ring[VAR_5].desc ||
      VAR_3->tx_ring[VAR_5].buffer_desc)
   FUNC_1(VAR_2, VAR_5);

 return 1;
}
