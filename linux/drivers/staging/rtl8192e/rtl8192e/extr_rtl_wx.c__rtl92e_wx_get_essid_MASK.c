
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8192_priv {int wx_mutex; int rtllib; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct iw_request_info*,union iwreq_data*,char*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    union iwreq_data *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct r8192_priv *VAR_5 = FUNC_2(VAR_0);

 FUNC_0(&VAR_5->wx_mutex);

 VAR_4 = FUNC_3(VAR_5->rtllib, VAR_1, VAR_2, VAR_3);

 FUNC_1(&VAR_5->wx_mutex);

 return VAR_4;
}
