
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dev_state; scalar_t__ reset_count; int dev; int rd_msg_hdr; } ;
typedef enum mei_dev_state { ____Placeholder_mei_dev_state } mei_dev_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int ,char*) ;
 int FUNC_3 (struct mei_device*) ;
 int FUNC_4 (struct mei_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mei_device*,char*,int) ;
 int FUNC_7 (struct mei_device*) ;
 int FUNC_8 (struct mei_device*) ;
 int FUNC_9 (struct mei_device*) ;
 int FUNC_10 (struct mei_device*,int) ;
 int FUNC_11 (struct mei_device*) ;
 int FUNC_12 (struct mei_device*,int) ;
 int FUNC_13 (int ,int ,int) ;

int FUNC_14(struct mei_device *VAR_9)
{
 enum mei_dev_state VAR_10 = VAR_9->dev_state;
 bool VAR_11;
 int VAR_12;

 if (VAR_10 != VAR_2 &&
     VAR_10 != VAR_1 &&
     VAR_10 != VAR_4 &&
     VAR_10 != VAR_5) {
  char VAR_13[VAR_7];

  FUNC_6(VAR_9, VAR_13, VAR_7);
  FUNC_2(VAR_9->dev, "unexpected reset: dev_state = %s fw status = %s\n",
    FUNC_5(VAR_10), VAR_13);
 }

 FUNC_4(VAR_9);






 FUNC_7(VAR_9);


 VAR_11 = VAR_10 != VAR_4;
 FUNC_12(VAR_9, VAR_6);

 VAR_9->reset_count++;
 if (VAR_9->reset_count > VAR_8) {
  FUNC_1(VAR_9->dev, "reset: reached maximal consecutive resets: disabling the device\n");
  FUNC_12(VAR_9, VAR_1);
  return -VAR_0;
 }

 VAR_12 = FUNC_10(VAR_9, VAR_11);



 if (VAR_10 != VAR_2 && VAR_10 != VAR_5)
  FUNC_3(VAR_9);

 FUNC_8(VAR_9);

 FUNC_13(VAR_9->rd_msg_hdr, 0, sizeof(VAR_9->rd_msg_hdr));

 if (VAR_12) {
  FUNC_1(VAR_9->dev, "hw_reset failed ret = %d\n", VAR_12);
  return VAR_12;
 }

 if (VAR_10 == VAR_4) {
  FUNC_0(VAR_9->dev, "powering down: end of reset\n");
  FUNC_12(VAR_9, VAR_1);
  return 0;
 }

 VAR_12 = FUNC_11(VAR_9);
 if (VAR_12) {
  FUNC_1(VAR_9->dev, "hw_start failed ret = %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_0(VAR_9->dev, "link is established start sending messages.\n");

 FUNC_12(VAR_9, VAR_3);
 VAR_12 = FUNC_9(VAR_9);
 if (VAR_12) {
  FUNC_1(VAR_9->dev, "hbm_start failed ret = %d\n", VAR_12);
  FUNC_12(VAR_9, VAR_6);
  return VAR_12;
 }

 return 0;
}
