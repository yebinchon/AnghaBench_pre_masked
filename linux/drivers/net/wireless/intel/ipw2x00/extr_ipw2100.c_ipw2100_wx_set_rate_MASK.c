
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int fixed; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ipw2100_priv*,int,int ) ;
 struct ipw2100_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7,
          struct iw_request_info *VAR_8,
          union iwreq_data *VAR_9, char *VAR_10)
{
 struct ipw2100_priv *VAR_11 = FUNC_2(VAR_7);
 u32 VAR_12 = VAR_9->bitrate.value;
 u32 VAR_13;
 int VAR_14 = 0;

 FUNC_3(&VAR_11->action_mutex);
 if (!(VAR_11->status & VAR_2)) {
  VAR_14 = -VAR_1;
  goto done;
 }

 VAR_13 = 0;

 if (VAR_12 == 1000000 ||
     (!VAR_9->bitrate.fixed && VAR_12 > 1000000))
  VAR_13 |= VAR_4;
 if (VAR_12 == 2000000 ||
     (!VAR_9->bitrate.fixed && VAR_12 > 2000000))
  VAR_13 |= VAR_5;
 if (VAR_12 == 5500000 ||
     (!VAR_9->bitrate.fixed && VAR_12 > 5500000))
  VAR_13 |= VAR_6;
 if (VAR_12 == 11000000 ||
     (!VAR_9->bitrate.fixed && VAR_12 > 11000000))
  VAR_13 |= VAR_3;
 if (VAR_13 == 0)
  VAR_13 = VAR_0;

 VAR_14 = FUNC_1(VAR_11, VAR_13, 0);

 FUNC_0("SET Rate -> %04X\n", VAR_13);
      done:
 FUNC_4(&VAR_11->action_mutex);
 return VAR_14;
}
