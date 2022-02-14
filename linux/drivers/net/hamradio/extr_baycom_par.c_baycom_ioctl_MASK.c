
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
struct baycom_state {TYPE_4__ debug_vals; TYPE_1__ hdrv; int options; } ;
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
 int FUNC_1 (struct baycom_state*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct hdlcdrv_ioctl*,int ,int) ;
 scalar_t__ FUNC_4 (int ,struct hdlcdrv_ioctl*,int) ;
 struct baycom_state* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_8, struct ifreq *VAR_9,
   struct hdlcdrv_ioctl *VAR_10, int VAR_11)
{
 struct baycom_state *VAR_12;
 struct baycom_ioctl VAR_13;

 if (!VAR_8)
  return -VAR_3;

 VAR_12 = FUNC_5(VAR_8);
 FUNC_0(VAR_12->hdrv.magic != VAR_5);

 if (VAR_11 != VAR_7)
  return -VAR_4;
 switch (VAR_10->cmd) {
 default:
  break;

 case 131:
  FUNC_7(VAR_10->data.modename, VAR_12->options ? "par96" : "picpar");
  if (FUNC_4(VAR_9->ifr_data, VAR_10, sizeof(struct hdlcdrv_ioctl)))
   return -VAR_2;
  return 0;

 case 128:
  if (FUNC_6(VAR_8) || !FUNC_2(VAR_0))
   return -VAR_1;
  VAR_10->data.modename[sizeof(VAR_10->data.modename)-1] = '\0';
  return FUNC_1(VAR_12, VAR_10->data.modename);

 case 130:
  FUNC_7(VAR_10->data.modename, "par96,picpar");
  if (FUNC_4(VAR_9->ifr_data, VAR_10, sizeof(struct hdlcdrv_ioctl)))
   return -VAR_2;
  return 0;

 case 129:
  return VAR_6;

 }

 if (FUNC_3(&VAR_13, VAR_9->ifr_data, sizeof(VAR_13)))
  return -VAR_2;
 switch (VAR_13.cmd) {
 default:
  return -VAR_4;
 }
 if (FUNC_4(VAR_9->ifr_data, &VAR_13, sizeof(VAR_13)))
  return -VAR_2;
 return 0;

}
