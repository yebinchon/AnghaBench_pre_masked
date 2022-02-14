
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; } ;
struct vivid_dev {int vid_cap_caps; int vid_out_caps; int vbi_cap_caps; int vbi_out_caps; int radio_rx_caps; int radio_tx_caps; int sdr_cap_caps; TYPE_1__ v4l2_dev; } ;
struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 struct vivid_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
     struct v4l2_capability *VAR_3)
{
 struct vivid_dev *VAR_4 = FUNC_2(VAR_1);

 FUNC_1(VAR_3->driver, "vivid", sizeof(VAR_3->driver));
 FUNC_1(VAR_3->card, "vivid", sizeof(VAR_3->card));
 FUNC_0(VAR_3->bus_info, sizeof(VAR_3->bus_info),
   "platform:%s", VAR_4->v4l2_dev.name);

 VAR_3->capabilities = VAR_4->vid_cap_caps | VAR_4->vid_out_caps |
  VAR_4->vbi_cap_caps | VAR_4->vbi_out_caps |
  VAR_4->radio_rx_caps | VAR_4->radio_tx_caps |
  VAR_4->sdr_cap_caps | VAR_0;
 return 0;
}
