
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
typedef int u32 ;
struct rtllib_device {int rate; } ;
struct iw_request_info {int dummy; } ;



int FUNC_0(struct rtllib_device *VAR_0,
        struct iw_request_info *VAR_1,
        union iwreq_data *VAR_2, char *VAR_3)
{

 u32 VAR_4 = VAR_2->bitrate.value;

 VAR_0->rate = VAR_4/100000;
 return 0;
}
