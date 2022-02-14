
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int fixed; int disabled; } ;
union iwreq_data {TYPE_1__ rts; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int rts_threshold; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
         struct iw_request_info *VAR_2,
         union iwreq_data *VAR_3, char *VAR_4)
{




 struct ipw2100_priv *VAR_5 = FUNC_1(VAR_1);

 VAR_3->rts.value = VAR_5->rts_threshold & ~VAR_0;
 VAR_3->rts.fixed = 1;


 VAR_3->rts.disabled = (VAR_5->rts_threshold & VAR_0) ? 1 : 0;

 FUNC_0("GET RTS Threshold -> 0x%08X\n", VAR_3->rts.value);

 return 0;
}
