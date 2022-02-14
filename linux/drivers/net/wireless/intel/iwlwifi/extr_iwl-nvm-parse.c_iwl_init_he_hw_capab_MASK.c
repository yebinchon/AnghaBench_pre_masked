
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_supported_band {int n_iftype_data; TYPE_3__* iftype_data; } ;
struct TYPE_5__ {int * phy_cap_info; } ;
struct TYPE_6__ {TYPE_1__ he_cap_elem; } ;
struct TYPE_7__ {TYPE_2__ he_cap; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void FUNC_1(struct ieee80211_supported_band *VAR_5,
     u8 VAR_6, u8 VAR_7)
{
 VAR_5->iftype_data = VAR_4;
 VAR_5->n_iftype_data = FUNC_0(VAR_4);


 if ((VAR_6 & VAR_7) != VAR_0) {
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_5->n_iftype_data; VAR_8++) {
   VAR_4[VAR_8].he_cap.he_cap_elem.phy_cap_info[1] &=
    ~VAR_1;
   VAR_4[VAR_8].he_cap.he_cap_elem.phy_cap_info[2] &=
    ~VAR_2;
   VAR_4[VAR_8].he_cap.he_cap_elem.phy_cap_info[7] &=
    ~VAR_3;
  }
 }
}
