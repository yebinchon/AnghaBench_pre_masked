
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
        struct iw_request_info *VAR_3,
        union iwreq_data *VAR_4, char *VAR_5)
{
 FUNC_0(VAR_1, VAR_0, ("+rtw_wx_set_freq\n"));

 return 0;
}
