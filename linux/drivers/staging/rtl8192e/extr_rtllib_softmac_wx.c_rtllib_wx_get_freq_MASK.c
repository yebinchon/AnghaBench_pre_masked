
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_freq {int m; int e; } ;
union iwreq_data {struct iw_freq freq; } ;
struct TYPE_2__ {int channel; } ;
struct rtllib_device {TYPE_1__ current_network; } ;
struct iw_request_info {int dummy; } ;


 int* VAR_0 ;

int FUNC_0(struct rtllib_device *VAR_1,
        struct iw_request_info *VAR_2,
        union iwreq_data *VAR_3, char *VAR_4)
{
 struct iw_freq *VAR_5 = &VAR_3->freq;

 if (VAR_1->current_network.channel == 0)
  return -1;
 VAR_5->m = VAR_0[VAR_1->current_network.channel-1] *
    100000;
 VAR_5->e = 1;
 return 0;
}
