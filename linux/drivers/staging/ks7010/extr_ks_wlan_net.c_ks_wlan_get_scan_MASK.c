
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int length; scalar_t__ flags; } ;
union iwreq_data {TYPE_3__ data; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int size; int * ap; } ;
struct TYPE_4__ {int sme_flag; } ;
struct ks_wlan_private {scalar_t__ sleep_mode; TYPE_2__ aplist; TYPE_1__ sme_i; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (struct net_device*,struct iw_request_info*,char*,char*,int *) ;
 struct ks_wlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_7,
       struct iw_request_info *VAR_8,
       union iwreq_data *VAR_9, char *VAR_10)
{
 struct ks_wlan_private *VAR_11 = FUNC_1(VAR_7);
 int VAR_12;
 char *VAR_13 = VAR_10;

 if (VAR_11->sleep_mode == VAR_5)
  return -VAR_3;

 if (VAR_11->sme_i.sme_flag & VAR_6)
  return -VAR_1;

 if (VAR_11->aplist.size == 0) {



  return -VAR_2;
 }


 for (VAR_12 = 0; VAR_12 < VAR_11->aplist.size; VAR_12++) {
  if ((VAR_10 + VAR_9->data.length) - VAR_13 <= VAR_4) {
   VAR_9->data.length = 0;
   return -VAR_0;
  }

  VAR_13 = FUNC_0(VAR_7, VAR_8, VAR_13,
          VAR_10 + VAR_9->data.length,
          &VAR_11->aplist.ap[VAR_12]);
 }

 VAR_9->data.length = (VAR_13 - VAR_10);
 VAR_9->data.flags = 0;

 return 0;
}
