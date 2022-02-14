
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; scalar_t__ fixed; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3, char *VAR_4)
{
 u16 VAR_5 = 0;

 VAR_5 = FUNC_0((struct adapter *)FUNC_1(VAR_1));

 if (VAR_5 == 0)
  return -VAR_0;

 VAR_3->bitrate.fixed = 0;
 VAR_3->bitrate.value = VAR_5 * 100000;

 return 0;
}
