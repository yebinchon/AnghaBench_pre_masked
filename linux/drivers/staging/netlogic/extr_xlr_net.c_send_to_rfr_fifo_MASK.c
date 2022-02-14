
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xlr_net_priv {int ndev; TYPE_1__* nd; } ;
struct nlm_fmn_msg {int msg0; scalar_t__ msg3; scalar_t__ msg2; scalar_t__ msg1; } ;
struct TYPE_2__ {int rfr_station; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int,int ,int,struct nlm_fmn_msg*) ;
 unsigned long FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct xlr_net_priv *VAR_0, void *VAR_1)
{
 struct nlm_fmn_msg VAR_2;
 int VAR_3 = 0, VAR_4 = 0, VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_1);
 VAR_2.msg0 = (u64)VAR_6 & 0xffffffffe0ULL;
 VAR_2.msg1 = 0;
 VAR_2.msg2 = 0;
 VAR_2.msg3 = 0;
 VAR_5 = VAR_0->nd->rfr_station;
 do {
  VAR_7 = FUNC_2();
  VAR_3 = FUNC_3(1, 0, VAR_5, &VAR_2);
  FUNC_1(VAR_7);
  if (VAR_3 == 0)
   return 0;
 } while (++VAR_4 < 10000);

 FUNC_0(VAR_0->ndev, "Send to RFR failed in RX path\n");
 return VAR_3;
}
