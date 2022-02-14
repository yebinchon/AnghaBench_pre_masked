
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union iwreq_data {int mode; } ;
struct rtllib_device {int iw_mode; } ;
struct iw_request_info {int dummy; } ;



int FUNC_0(struct rtllib_device *VAR_0, struct iw_request_info *VAR_1,
         union iwreq_data *VAR_2, char *VAR_3)
{
 VAR_2->mode = VAR_0->iw_mode;
 return 0;
}
