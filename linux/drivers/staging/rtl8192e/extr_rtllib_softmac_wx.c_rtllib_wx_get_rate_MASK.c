
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
union iwreq_data {TYPE_2__ bitrate; } ;
typedef int u32 ;
struct TYPE_3__ {int CurrentShowTxate; } ;
struct rtllib_device {TYPE_1__ softmac_stats; } ;
struct iw_request_info {int dummy; } ;


 int FUNC_0 (struct rtllib_device*,int ) ;

int FUNC_1(struct rtllib_device *VAR_0,
        struct iw_request_info *VAR_1,
        union iwreq_data *VAR_2, char *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0,
         VAR_0->softmac_stats.CurrentShowTxate);
 VAR_2->bitrate.value = VAR_4 * 500000;

 return 0;
}
