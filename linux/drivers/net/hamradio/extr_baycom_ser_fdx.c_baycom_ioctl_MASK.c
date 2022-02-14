
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct TYPE_6__ {int debug3; int debug2; int debug1; } ;
struct TYPE_7__ {char* modename; TYPE_2__ dbg; } ;
struct hdlcdrv_ioctl {int cmd; TYPE_3__ data; } ;
struct TYPE_8__ {int last_pllcorr; int last_intcnt; } ;
struct TYPE_5__ {scalar_t__ magic; int ptt_keyed; } ;
struct baycom_state {int baud; TYPE_4__ debug_vals; TYPE_1__ hdrv; int opt_dcd; } ;
struct baycom_ioctl {int cmd; TYPE_3__ data; } ;
typedef int bi ;



 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct baycom_state*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct hdlcdrv_ioctl*,int ,int) ;
 scalar_t__ FUNC_4 (int ,struct hdlcdrv_ioctl*,int) ;
 struct baycom_state* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_9, struct ifreq *VAR_10,
   struct hdlcdrv_ioctl *VAR_11, int VAR_12)
{
 struct baycom_state *VAR_13;
 struct baycom_ioctl VAR_14;

 if (!VAR_9)
  return -VAR_3;

 VAR_13 = FUNC_5(VAR_9);
 FUNC_0(VAR_13->hdrv.magic != VAR_5);

 if (VAR_12 != VAR_8)
  return -VAR_4;
 switch (VAR_11->cmd) {
 default:
  break;

 case 131:
  FUNC_7(VAR_11->data.modename, "ser%u", VAR_13->baud / 100);
  if (VAR_13->opt_dcd <= 0)
   FUNC_8(VAR_11->data.modename, (!VAR_13->opt_dcd) ? "*" : "+");
  if (FUNC_4(VAR_10->ifr_data, VAR_11, sizeof(struct hdlcdrv_ioctl)))
   return -VAR_2;
  return 0;

 case 128:
  if (FUNC_6(VAR_9) || !FUNC_2(VAR_0))
   return -VAR_1;
  VAR_11->data.modename[sizeof(VAR_11->data.modename)-1] = '\0';
  return FUNC_1(VAR_13, VAR_11->data.modename);

 case 130:
  FUNC_9(VAR_11->data.modename, "ser12,ser3,ser24");
  if (FUNC_4(VAR_10->ifr_data, VAR_11, sizeof(struct hdlcdrv_ioctl)))
   return -VAR_2;
  return 0;

 case 129:
  return VAR_6 | VAR_7;

 }

 if (FUNC_3(&VAR_14, VAR_10->ifr_data, sizeof(VAR_14)))
  return -VAR_2;
 switch (VAR_14.cmd) {
 default:
  return -VAR_4;
 }
 if (FUNC_4(VAR_10->ifr_data, &VAR_14, sizeof(VAR_14)))
  return -VAR_2;
 return 0;

}
