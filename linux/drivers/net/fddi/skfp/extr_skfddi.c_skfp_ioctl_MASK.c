
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int MacStat; } ;
struct s_smc {TYPE_1__ os; } ;
struct s_skfp_ioctl {int cmd; int len; int data; } ;
struct net_device {int name; } ;
struct ifreq {int ifr_data; } ;
typedef TYPE_1__ skfddi_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct s_skfp_ioctl*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int ,int) ;
 struct s_smc* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, struct ifreq *VAR_5, int VAR_6)
{
 struct s_smc *VAR_7 = FUNC_4(VAR_4);
 skfddi_priv *VAR_8 = &VAR_7->os;
 struct s_skfp_ioctl VAR_9;
 int VAR_10 = 0;

 if (FUNC_1(&VAR_9, VAR_5->ifr_data, sizeof(struct s_skfp_ioctl)))
  return -VAR_1;

 switch (VAR_9.cmd) {
 case 128:
  VAR_9.len = sizeof(VAR_8->MacStat);
  VAR_10 = FUNC_2(VAR_9.data, FUNC_6(VAR_4), VAR_9.len)
    ? -VAR_1 : 0;
  break;
 case 129:
  if (!FUNC_0(VAR_0)) {
   VAR_10 = -VAR_3;
  } else {
   FUNC_3(&VAR_8->MacStat, 0, sizeof(VAR_8->MacStat));
  }
  break;
 default:
  FUNC_5("ioctl for %s: unknown cmd: %04x\n", VAR_4->name, VAR_9.cmd);
  VAR_10 = -VAR_2;

 }

 return VAR_10;
}
