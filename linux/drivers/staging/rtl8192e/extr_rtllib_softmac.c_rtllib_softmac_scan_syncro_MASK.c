
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wrqu ;
typedef union iwreq_data {int dummy; } iwreq_data ;
typedef int u8 ;
struct rtllib_device {int be_scan_inprogress; int* active_channel_map; scalar_t__ state; int actscanning; int dev; int scan_mutex; scalar_t__ sync_scan_hurryup; int (* set_chan ) (int ,short) ;} ;


 scalar_t__ FUNC_0 (struct rtllib_device*) ;
 short VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (union iwreq_data*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct rtllib_device*,int ) ;
 int FUNC_8 (struct rtllib_device*) ;
 int FUNC_9 (int ,short) ;
 int FUNC_10 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_11(struct rtllib_device *VAR_4, u8 VAR_5)
{
 union iwreq_data VAR_6;
 short VAR_7 = 0;

 FUNC_8(VAR_4);

 VAR_4->be_scan_inprogress = 1;

 FUNC_4(&VAR_4->scan_mutex);

 while (1) {
  do {
   VAR_7++;
   if (VAR_7 > VAR_0)
    goto out;
  } while (!VAR_4->active_channel_map[VAR_7]);
  if (VAR_4->state == VAR_1)
   goto out;
  if (VAR_4->sync_scan_hurryup) {
   FUNC_6(VAR_4->dev,
        "============>sync_scan_hurryup out\n");
   goto out;
  }

  VAR_4->set_chan(VAR_4->dev, VAR_7);
  if (VAR_4->active_channel_map[VAR_7] == 1)
   FUNC_7(VAR_4, 0);




  FUNC_3(VAR_2);
 }
out:
 VAR_4->actscanning = 0;
 VAR_4->sync_scan_hurryup = 0;

 if (VAR_4->state >= VAR_1) {
  if (FUNC_0(VAR_4))
   FUNC_1(VAR_4);
 }
 FUNC_5(&VAR_4->scan_mutex);

 VAR_4->be_scan_inprogress = 0;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_10(VAR_4->dev, VAR_3, &VAR_6, ((void*)0));
}
