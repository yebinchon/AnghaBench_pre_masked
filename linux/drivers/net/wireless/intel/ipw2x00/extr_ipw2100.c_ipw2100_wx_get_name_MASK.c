
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int name; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{




 struct ipw2100_priv *VAR_6 = FUNC_1(VAR_2);
 if (!(VAR_6->status & VAR_1))
  FUNC_3(VAR_4->name, "unassociated");
 else
  FUNC_2(VAR_4->name, VAR_0, "IEEE 802.11b");

 FUNC_0("Name: %s\n", VAR_4->name);
 return 0;
}
