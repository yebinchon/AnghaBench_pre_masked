
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_range {int we_version_source; int throughput; int we_version_compiled; } ;


 int VAR_0 ;
 int FUNC_0 (struct iw_range*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
       struct iw_request_info *VAR_2,
       union iwreq_data *VAR_3, char *VAR_4)
{
 struct iw_range *VAR_5 = (struct iw_range *)VAR_4;


 VAR_3->data.length = sizeof(*VAR_5);


 FUNC_0(VAR_5, 0, sizeof(*VAR_5));


 VAR_5->we_version_compiled = VAR_0;
 VAR_5->we_version_source = 1;
 VAR_5->throughput = 2 * 1000 * 1000;

 return 0;
}
