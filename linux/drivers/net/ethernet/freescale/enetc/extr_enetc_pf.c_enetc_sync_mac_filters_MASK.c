
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct enetc_si {TYPE_1__* pdev; } ;
struct enetc_pf {struct enetc_si* si; struct enetc_mac_filter* mac_filter; } ;
struct enetc_mac_filter {int mac_addr_cnt; scalar_t__ mac_hash_table; int mac_addr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct enetc_si*,int) ;
 int FUNC_3 (struct enetc_si*,int ,int) ;
 int FUNC_4 (struct enetc_si*,int,int ,int ) ;
 int FUNC_5 (struct enetc_si*,int ,int,int *) ;

__attribute__((used)) static void FUNC_6(struct enetc_pf *VAR_3)
{
 struct enetc_mac_filter *VAR_4 = VAR_3->mac_filter;
 struct enetc_si *VAR_5 = VAR_3->si;
 int VAR_6, VAR_7;

 VAR_7 = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_4++) {
  bool VAR_8 = (VAR_4->mac_addr_cnt == 1) && (VAR_6 == VAR_2);
  bool VAR_9 = !VAR_4->mac_addr_cnt;

  if (VAR_9) {
   if (VAR_6 == VAR_2)
    FUNC_2(VAR_5, VAR_7);

   FUNC_3(VAR_5, 0, VAR_6);
   continue;
  }


  if (VAR_8) {
   int VAR_10;

   FUNC_3(VAR_5, 0, VAR_2);

   VAR_10 = FUNC_4(VAR_5, VAR_7, VAR_4->mac_addr,
            FUNC_0(0));
   if (!VAR_10)
    continue;


   FUNC_1(&VAR_5->pdev->dev, "fallback to HT filt (%d)\n",
     VAR_10);
  }


  if (VAR_6 == VAR_2)
   FUNC_2(VAR_5, VAR_7);

  FUNC_5(VAR_5, 0, VAR_6, (u32 *)VAR_4->mac_hash_table);
 }
}
