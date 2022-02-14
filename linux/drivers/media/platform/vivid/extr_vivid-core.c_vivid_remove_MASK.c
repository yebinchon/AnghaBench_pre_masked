
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; } ;
struct vivid_dev {int v4l2_dev; scalar_t__ cec_workqueue; int * cec_tx_adap; int cec_rx_adap; TYPE_1__ fb_info; scalar_t__ has_fb; int radio_tx_dev; scalar_t__ has_radio_tx; int radio_rx_dev; scalar_t__ has_radio_rx; int sdr_cap_dev; scalar_t__ has_sdr_cap; int vbi_out_dev; scalar_t__ has_vbi_out; int vbi_cap_dev; scalar_t__ has_vbi_cap; int vid_out_dev; scalar_t__ has_vid_out; int vid_cap_dev; scalar_t__ has_vid_cap; int mdev; } ;
struct platform_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct vivid_dev*) ;
 struct vivid_dev** VAR_2 ;
 int FUNC_10 (struct vivid_dev*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_3)
{
 struct vivid_dev *VAR_4;
 unsigned int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = VAR_2[VAR_5];
  if (!VAR_4)
   continue;






  if (VAR_4->has_vid_cap) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering %s\n",
    FUNC_7(&VAR_4->vid_cap_dev));
   FUNC_8(&VAR_4->vid_cap_dev);
  }
  if (VAR_4->has_vid_out) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering %s\n",
    FUNC_7(&VAR_4->vid_out_dev));
   FUNC_8(&VAR_4->vid_out_dev);
  }
  if (VAR_4->has_vbi_cap) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering %s\n",
    FUNC_7(&VAR_4->vbi_cap_dev));
   FUNC_8(&VAR_4->vbi_cap_dev);
  }
  if (VAR_4->has_vbi_out) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering %s\n",
    FUNC_7(&VAR_4->vbi_out_dev));
   FUNC_8(&VAR_4->vbi_out_dev);
  }
  if (VAR_4->has_sdr_cap) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering %s\n",
    FUNC_7(&VAR_4->sdr_cap_dev));
   FUNC_8(&VAR_4->sdr_cap_dev);
  }
  if (VAR_4->has_radio_rx) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering %s\n",
    FUNC_7(&VAR_4->radio_rx_dev));
   FUNC_8(&VAR_4->radio_rx_dev);
  }
  if (VAR_4->has_radio_tx) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering %s\n",
    FUNC_7(&VAR_4->radio_tx_dev));
   FUNC_8(&VAR_4->radio_tx_dev);
  }
  if (VAR_4->has_fb) {
   FUNC_6(&VAR_4->v4l2_dev, "unregistering fb%d\n",
    VAR_4->fb_info.node);
   FUNC_4(&VAR_4->fb_info);
   FUNC_10(VAR_4);
  }
  FUNC_0(VAR_4->cec_rx_adap);
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   FUNC_0(VAR_4->cec_tx_adap[VAR_6]);
  if (VAR_4->cec_workqueue) {
   FUNC_9(VAR_4);
   FUNC_1(VAR_4->cec_workqueue);
  }
  FUNC_5(&VAR_4->v4l2_dev);
  VAR_2[VAR_5] = ((void*)0);
 }
 return 0;
}
