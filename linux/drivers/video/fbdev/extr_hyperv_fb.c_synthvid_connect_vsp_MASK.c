
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hvfb_par {scalar_t__ synthvid_version; } ;
struct hv_device {TYPE_3__* channel; } ;
struct fb_info {struct hvfb_par* par; } ;
struct TYPE_5__ {int mmio_megabytes; } ;
struct TYPE_6__ {TYPE_1__ offer; } ;
struct TYPE_7__ {TYPE_2__ offermsg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct fb_info* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct hv_device*,scalar_t__) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int *,int ,int ,struct hv_device*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_11)
{
 struct fb_info *VAR_12 = FUNC_0(VAR_11);
 struct hvfb_par *VAR_13 = VAR_12->par;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_11->channel, VAR_0, VAR_0,
    ((void*)0), 0, VAR_9, VAR_11);
 if (VAR_14) {
  FUNC_1("Unable to open vmbus channel\n");
  return VAR_14;
 }


 if (VAR_10 == VAR_6 ||
     VAR_10 == VAR_5)
  VAR_14 = FUNC_2(VAR_11, VAR_3);
 else
  VAR_14 = FUNC_2(VAR_11, VAR_4);

 if (VAR_14) {
  FUNC_1("Synthetic video device version not accepted\n");
  goto error;
 }

 if (VAR_13->synthvid_version == VAR_3)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 VAR_8 = VAR_11->channel->offermsg.offer.
    mmio_megabytes * 1024 * 1024;

 return 0;

error:
 FUNC_3(VAR_11->channel);
 return VAR_14;
}
