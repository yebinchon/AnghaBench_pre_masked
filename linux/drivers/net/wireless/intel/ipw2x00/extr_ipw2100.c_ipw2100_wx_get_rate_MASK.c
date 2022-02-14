
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct TYPE_2__ {int value; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int FUNC_1 (struct ipw2100_priv*,int ,int*,unsigned int*) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7,
          struct iw_request_info *VAR_8,
          union iwreq_data *VAR_9, char *VAR_10)
{
 struct ipw2100_priv *VAR_11 = FUNC_2(VAR_7);
 int VAR_12;
 unsigned int VAR_13 = sizeof(VAR_12);
 int VAR_14 = 0;

 if (!(VAR_11->status & VAR_3) ||
     VAR_11->status & VAR_5 ||
     !(VAR_11->status & VAR_2)) {
  VAR_9->bitrate.value = 0;
  return 0;
 }

 FUNC_3(&VAR_11->action_mutex);
 if (!(VAR_11->status & VAR_4)) {
  VAR_14 = -VAR_0;
  goto done;
 }

 VAR_14 = FUNC_1(VAR_11, VAR_1, &VAR_12, &VAR_13);
 if (VAR_14) {
  FUNC_0("failed querying ordinals.\n");
  goto done;
 }

 switch (VAR_12 & VAR_6) {
 case 130:
  VAR_9->bitrate.value = 1000000;
  break;
 case 129:
  VAR_9->bitrate.value = 2000000;
  break;
 case 128:
  VAR_9->bitrate.value = 5500000;
  break;
 case 131:
  VAR_9->bitrate.value = 11000000;
  break;
 default:
  VAR_9->bitrate.value = 0;
 }

 FUNC_0("GET Rate -> %d\n", VAR_9->bitrate.value);

      done:
 FUNC_4(&VAR_11->action_mutex);
 return VAR_14;
}
