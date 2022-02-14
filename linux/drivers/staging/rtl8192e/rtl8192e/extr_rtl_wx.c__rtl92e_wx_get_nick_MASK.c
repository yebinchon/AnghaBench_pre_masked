
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct r8192_priv {int wx_mutex; int nick; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0,
          struct iw_request_info *VAR_1,
          union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_3(VAR_0);

 FUNC_1(&VAR_4->wx_mutex);
 VAR_2->data.length = FUNC_4(VAR_4->nick);
 FUNC_0(VAR_3, VAR_4->nick, VAR_2->data.length);
 VAR_2->data.flags = 1;
 FUNC_2(&VAR_4->wx_mutex);
 return 0;
}
