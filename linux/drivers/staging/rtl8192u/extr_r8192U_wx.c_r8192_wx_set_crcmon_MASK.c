
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8192_priv {int crcmon; int wx_mutex; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
          struct iw_request_info *VAR_1,
          union iwreq_data *VAR_2, char *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_0);
 int *VAR_5 = (int *)VAR_3;
 int VAR_6 = (VAR_5[0] > 0);

 FUNC_2(&VAR_4->wx_mutex);

 if (VAR_6)
  VAR_4->crcmon = 1;
 else
  VAR_4->crcmon = 0;

 FUNC_0("bad CRC in monitor mode are %s",
       VAR_4->crcmon ? "accepted" : "rejected");

 FUNC_3(&VAR_4->wx_mutex);

 return 0;
}
