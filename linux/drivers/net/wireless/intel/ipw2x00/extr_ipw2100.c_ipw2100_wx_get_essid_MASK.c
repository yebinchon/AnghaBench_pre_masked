
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int length; } ;
union iwreq_data {TYPE_1__ essid; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int config; int status; int essid_len; int essid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
    struct iw_request_info *VAR_3,
    union iwreq_data *VAR_4, char *VAR_5)
{




 struct ipw2100_priv *VAR_6 = FUNC_1(VAR_2);



 if (VAR_6->config & VAR_0 || VAR_6->status & VAR_1) {
  FUNC_0("Getting essid: '%*pE'\n",
        VAR_6->essid_len, VAR_6->essid);
  FUNC_2(VAR_5, VAR_6->essid, VAR_6->essid_len);
  VAR_4->essid.length = VAR_6->essid_len;
  VAR_4->essid.flags = 1;
 } else {
  FUNC_0("Getting essid: ANY\n");
  VAR_4->essid.length = 0;
  VAR_4->essid.flags = 0;
 }

 return 0;
}
